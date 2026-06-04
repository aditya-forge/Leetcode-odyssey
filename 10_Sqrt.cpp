// On Leetcode

// class Solution {
// public:
//     int mySqrt(int x) {
//        return sqrt(x); 
//     }
// }


//Complete Code 

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
       return sqrt(x); 
    }
};
int main() {
    Solution obj;
    int x;
    cin>> x;
    cout << obj.mySqrt(x) << endl;
    return 0;
}

