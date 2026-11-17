class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int i = 0;
        while (n > 0) {
            int digit = n % 10;
            if (i % 2 == 0)
                sum += (digit);
            else
                sum -= (digit);

            i++;
            n /= 10;
        }
        if (i % 2 == 0)
            return 0 - sum;
        return sum;
    }
};