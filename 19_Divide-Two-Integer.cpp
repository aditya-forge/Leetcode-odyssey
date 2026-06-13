// Leetcode Code ( Time Complexity Of 0ms ) 

// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if(dividend == INT_MIN && divisor == -1){
//             return INT_MAX;
//         }
//         return dividend / divisor;
//     }
// };


// Complete Code 

#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        return dividend / divisor;
    }
};
int main() {
    Solution obj;
    int dividend, divisor;
    cin >> dividend >> divisor;
    cout << obj.divide(dividend, divisor);
    return 0;
}