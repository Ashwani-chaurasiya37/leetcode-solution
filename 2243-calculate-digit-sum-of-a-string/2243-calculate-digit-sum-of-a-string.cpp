class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            int n=s.size();
            string curr = "";
            for (int i = 0; i < s.size(); i += k) {
                int sum = 0;
                int end=min(i + k ,n);
                for (int j = i; j < end; j++) {
                    sum += s[j] - '0';
                }
                curr += to_string(sum);
            }
            s = curr;
        }
        return s;
    }
};