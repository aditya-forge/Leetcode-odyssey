// Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.
// The digit sum of a positive integer is the sum of all its digits.

// Leetcode Logic (Timwe Complexity of 0ms)

// class Solution {
// public:
//     int countEven(int num) {
//         int count=0;
//         for(int i=1;i<=num;i++){
//             int sum=0;
//             for(int temp=i;temp>0;temp/=10){
//                 int digit=temp%10;
//                 sum+=digit;
//             }
//             if(sum%2==0){
//                 count++;
//             }
//         }
//         return count;
//     }
// };


// Complete Code 


#include<iostream>
using namespace std;
class Solution{
public:
    int countEven(int num){
        int count=0;
        for(int i=1;i<=num;i++){
            int sum=0;
            for(int temp=i;temp>0;temp/=10){
                int digit=temp%10;
                sum+=digit;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution obj;
    int num;
    cin>>num;
    cout<<obj.countEven(num);
    return 0;
}