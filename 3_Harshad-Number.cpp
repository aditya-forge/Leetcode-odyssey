class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0, num = x;
        while (x) {
            sum += x % 10;
            x /= 10;
        }
        return (num % sum == 0) ? sum : -1;
    }
};