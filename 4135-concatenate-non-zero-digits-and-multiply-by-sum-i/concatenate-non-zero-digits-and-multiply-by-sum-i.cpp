class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        while(n>0){
            int digits = n % 10;
            if(digits != 0){
                x = x*10 + digits;
                sum += digits;
            }
            n = n/10;

        }
        long long rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev * sum;
    }
};