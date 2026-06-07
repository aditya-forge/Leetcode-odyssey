// Leet code version 

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         for (int i = 0; i < 31; i++) {
//             if (pow(2, i) == n) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };


// Complete Code (Best Case of Time Complexity with 0ms)

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        for (int i = 0; i < 31; i++) {
            if (pow(2, i) == n) {
                return true;
            }
        }
        return false;
    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    if (obj.isPowerOfTwo(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}

