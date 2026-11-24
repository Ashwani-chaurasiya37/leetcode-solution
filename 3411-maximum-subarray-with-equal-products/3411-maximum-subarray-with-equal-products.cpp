class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            long long prod = 1;
            int curr_gcd = nums[i];
            int curr_lcm = nums[i];
            for (int j = i; j< n; j++) {
                prod *= nums[j];
                if (prod > 25200) {
                    break;
                }
                curr_gcd = gcd(curr_gcd, nums[j]);
                curr_lcm = lcm(curr_lcm, nums[j]);
                if (prod == 1ll * curr_gcd * curr_lcm) {
                    sum = max(sum, j - i + 1);
                }
            }
        }
        return sum;
    }
};