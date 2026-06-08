// Leetcode  ( My Approch 1 Giving Time Execution Error) 

// class Solution {
// public:
//     int nthMagicalNumber(int n, int a, int b) {
//         int count = 0;
//         for (long long i = 1; ; i++) {
//             if (i % a == 0 || i % b == 0) {
//                 count++;
//                 if (count == n) {
//                     return i;
//                 }
//             }
//         }
//     }
// };



// ( My Approch 1 Giving Time Execution Error)  

// class Solution {
// public:
//     int nthMagicalNumber(int n, int a, int b) {
//         int count = 0;
//         long long num = 1;
//         while (true) {
//             if (num % a == 0 || num % b == 0) {
//                 count++;
//                 if (count == n) {
//                     return num;
//                 }
//             }
//             num++;
//         }
//     }
// };



//Research Logic (All Execution Passed)

// class Solution {
// public:
//     long long gcd(long long a, long long b) {
//         while (b) {
//             long long t = b;
//             b = a % b;
//             a = t;
//         }
//         return a;
//     }
//     int nthMagicalNumber(int n, int a, int b) {
//         const long long MOD = 1000000007;
//         long long lcm = 1LL * a / gcd(a, b) * b;
//         long long left = min(a, b);
//         long long right = 1LL * n * min(a, b);
//         while (left < right) {
//             long long mid = left + (right - left) / 2;
//             long long count =
//                 mid / a +
//                 mid / b -
//                 mid / lcm;
//             if (count < n)
//                 left = mid + 1;
//             else
//                 right = mid;
//         }
//         return left % MOD;
//     }
// };


//IDE Version Complete Code 

#include <iostream>
using namespace std;
class Solution {
public:
    long long gcd(long long a,long long b){
        while(b){
            long long temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int nthMagicalNumber(int n,int a,int b){
        const long long MOD=1000000007;
        long long lcm=(1LL*a*b)/gcd(a,b);
        long long left=min(a,b);
        long long right=1LL*n*min(a,b);
        while(left<right){
            long long mid=left+(right-left)/2;
            long long count=mid/a+mid/b-mid/lcm;
            if(count<n)
                left=mid+1;
            else
                right=mid;
        }
        return left%MOD;
    }
};
int main(){
    Solution obj;
    int n,a,b;
    cin>>n>>a>>b;
    cout<<obj.nthMagicalNumber(n,a,b);
    return 0;
}