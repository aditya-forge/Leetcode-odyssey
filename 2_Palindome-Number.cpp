class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long num = x;
        long long rev = 0; 
        for (num = num; num != 0; num /= 10) {
            int digit = num % 10;
            rev = rev * 10 + digit;
        }
        if (x == rev) {    
            return true;
        }
        else {
            return false;
        }
    }
};