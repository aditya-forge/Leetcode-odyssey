// Leetcode approch

// class Solution {
// public:
//     double myPow(double x, int n) {
//         return pow(x,n);
//     }
// };

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};
int main() {
    Solution obj;
    double x;
    int n ;
    cin>> x;
    cin>>n;
    cout << obj.myPow(x, n) << endl;
    return 0;
}