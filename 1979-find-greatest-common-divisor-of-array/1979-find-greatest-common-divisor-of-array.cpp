class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int minElem = nums[0], maxElem = nums[0];

        for (int i = 0; i < n; i++) {
            if (nums[i] < minElem)
                minElem = nums[i];
            if (nums[i] > maxElem)
                maxElem = nums[i];
        }
        return gcd(minElem, maxElem);
    }
};
