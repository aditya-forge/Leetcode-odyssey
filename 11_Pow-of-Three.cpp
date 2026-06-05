//Leetcode my logic : (Best Time Complexity of 0 ms)

// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         for (int i = 0; i < 20; i++) {
//             if (pow(3, i) == n) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };




//Leetcode resources logic : (Less Time Complexity of 11 ms)

// public:
//     bool isPowerOfThree(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         while (n % 3 == 0) {
//             n /= 3;
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
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        for (int i = 0; i < 20; i++) {
            if (pow(3, i) == n) {
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
    if (obj.isPowerOfThree(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}