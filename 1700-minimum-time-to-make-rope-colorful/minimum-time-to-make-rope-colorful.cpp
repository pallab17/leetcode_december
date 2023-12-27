class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int time=0;
        int agerBalloonPatharTime = 0;
        for(int i=0;i<n;i++){
            if( i>0 && colors[i] != colors[i-1]){
                agerBalloonPatharTime = 0;
            }
            int currentBalloonPatharTime = neededTime[i];
            time+= min(agerBalloonPatharTime,currentBalloonPatharTime);
            agerBalloonPatharTime = max(agerBalloonPatharTime,currentBalloonPatharTime);
        }
        return time;
    }
};