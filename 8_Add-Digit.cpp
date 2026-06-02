class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return 0;
        }
        else{
            int sum = 0;
        while(num>9){
            sum = 0;
            for(;num>0;num = num/10){
                int digit = num % 10;
                sum = sum + digit;
            }

            num = sum;
        }
        return num;
        }      
    }
};