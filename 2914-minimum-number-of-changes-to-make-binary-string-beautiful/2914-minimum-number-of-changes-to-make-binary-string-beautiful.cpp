//approch Greedy Tc=0(n)
//Traverse the string with i += 2 because to process consecutive non-overlapping pairs.
// step-2 Compare at index i and i+1.
// step-3 If both characters are different, one change is required to make them equal.and count


class Solution {
public:
    int minChanges(string s) {
        int count=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        return count;
    }
};