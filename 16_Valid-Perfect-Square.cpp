// leetcode logic : (My logic : error )

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         for(long long i = 1; i * i <= num; i++){
//             if(i * i == num){
//                 return true;
//             }
//         }
//         return false;
//     }
// };



// Leetcode Modified Logic (Time Complexity of 0 ms )

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         for(long long i=1 ; i*i<=num ; i++){
//             if(i*i == num){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


// Complete Code 

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i = 1; i * i <= num; i++) {
            if(i * i == num) {
                return true;
            }
        }
        return false;
    }
};
int main() {
    Solution obj;
    int num;
    cin >> num;
    if(obj.isPerfectSquare(num)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}