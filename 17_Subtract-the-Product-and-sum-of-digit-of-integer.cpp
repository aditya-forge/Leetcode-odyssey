// Leetcode Logic of Mine (0 ms Of Time complexity)

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int sum = 0;
//         int Product = 1;
//         int Difference = 0;
//         for(;n>0;n/=10){
//             int digit = n%10;
//             sum = sum + digit;
//             Product = Product*digit;
//         }
//         Difference = Product - sum;
//         return Difference;

//     }
// };





// Complete Code 


#include <iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int Product = 1;
        int Difference = 0;
        for (; n > 0; n /= 10) {
            int digit = n % 10;
            sum = sum + digit;
            Product = Product * digit;
        }
        Difference = Product - sum;
        return Difference;
    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.subtractProductAndSum(n);
    return 0;
}