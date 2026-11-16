class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod = 1000000007;
        int n = arr.size();
        long long count = 0;
        int even = 1;
        int odd = 0;
        long long prefix = 0;
        for (int i = 0; i < n; i++) {
            prefix += arr[i];
            if (prefix % 2 == 0) {
                count += odd;
                even++;
            } else {
                count += even;
                odd++;
            }
        }
        return count % mod;
    }
};