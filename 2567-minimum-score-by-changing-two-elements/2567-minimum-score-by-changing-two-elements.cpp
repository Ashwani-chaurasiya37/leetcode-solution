// Approach
//  step-1 Sort the array in ascending order.
//  step-2 we can change two elements, consi three possible cases:
//  Change the two largest elements
//  Change the two smallest elements
//  Change the smallest and largest elements:.
//   step-3 all three and return the minimum.

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n < 3)
            return 0;
        int a = abs(nums[2] - nums[n - 1]);
        int b = abs(nums[n - 3] - nums[0]);
        int c = abs(nums[1] - nums[n - 2]);
        return min({a, b, c});
    }
};