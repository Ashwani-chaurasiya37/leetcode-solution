class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int Dsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int num = nums[i];
            while (num > 0) {
                Dsum += num % 10;
                num /= 10;
            }
        }
        return abs(sum - Dsum);
    }
};