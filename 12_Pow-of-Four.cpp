//Leetcode my logic : (Time Complexity of 0 ms)

// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         for (int i = 0; i < 20; i++) {
//             if (pow(4, i) == n) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };




//Leetcode resources logic : (Time Complexity Of 0ms)

// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         while (n % 4 == 0) {
//             n /= 4;
//         }
//         return n == 1;
//     }
// };




//Complete Logic  For Complier 

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        for (int i = 0; i < 20; i++) {
            if (pow(4, i) == n) {
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
    if (obj.isPowerOfFour(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}