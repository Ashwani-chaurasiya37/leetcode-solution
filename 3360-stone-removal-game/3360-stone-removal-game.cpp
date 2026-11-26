class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        bool A=false;
        while(n>=stone){
            n-=stone;
             A=!A;
             stone--;
        }
        return A;
    }
};