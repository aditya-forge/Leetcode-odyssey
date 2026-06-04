Write-Host "Checking for changes..." -ForegroundColor Green

# Get untracked or modified files
$status = git status --porcelain
if (-not $status) {
    Write-Host "No changes detected. Nothing to push!" -ForegroundColor Yellow
    exit
}

# Extract changed file names to build a descriptive commit message
$changedFiles = $status | ForEach-Object {
    $line = $_.Trim()
    # Check for rename status: R  "oldpath" -> "newpath"
    if ($line -match '^R\s+(.+)\s+->\s+(.+)$') {
        $filePath = $Matches[2]
    } else {
        $filePath = $line -replace '^[MADRC?U! ]+\s+', ''
    }
    
    # Strip wrapping quotes if present
    $filePath = $filePath -replace '^"|"$', ''
    
    if ($filePath) {
        # Use -LiteralPath to handle wildcards and special characters like ! and & in filenames
        Get-Item -LiteralPath $filePath -ErrorAction SilentlyContinue
    }
} | Where-Object { $_ -ne $null -and $_.Attributes -ne 'Directory' }

# Generate clean topic names from modified files
$cleanedNames = @()
$ignoredFiles = @("README.md", ".gitignore", "done.bat", "done.ps1", "setup_git.ps1")

foreach ($file in $changedFiles) {
    if ($ignoredFiles -contains $file.Name) { continue }
    $name = $file.BaseName
    $name = $name -replace '^\d+[\s_]+', '' # Remove leading numbers, underscores, and spaces (e.g. 1_ Reverse-Integer -> Reverse-Integer)
    $name = $name -replace '[-_]', ' '      # Replace dashes/underscores with spaces
    $name = $name.Trim()
    if ($name -and $cleanedNames -notcontains $name) {
        $cleanedNames += $name
    }
}

# Formulate commit message
if ($cleanedNames.Count -eq 0) {
    # If only README or gitignore changed
    $commitMsg = "docs: update repository documentation"
} else {
    $listLimit = 5
    if ($cleanedNames.Count -le $listLimit) {
        $topics = $cleanedNames -join ", "
    } else {
        $firstFew = $cleanedNames[0..($listLimit - 1)] -join ", "
        $remaining = $cleanedNames.Count - $listLimit
        $topics = "$firstFew (and $remaining more)"
    }
    $commitMsg = "docs: solve $topics"
}

Write-Host "Adding changes..." -ForegroundColor Green
git add .

Write-Host "Committing with message: '$commitMsg'..." -ForegroundColor Green
git commit -m "$commitMsg"

Write-Host "Pushing to GitHub..." -ForegroundColor Green
git push origin main

Write-Host "`n====================================================" -ForegroundColor Cyan
Write-Host "Leetcode daily practice pushed to GitHub successfully!" -ForegroundColor Cyan
Write-Host "====================================================" -ForegroundColor Cyan
