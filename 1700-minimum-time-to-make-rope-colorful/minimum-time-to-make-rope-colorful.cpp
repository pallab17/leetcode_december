class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int time=0;
        int agerBalloonPatharTime = 0;
        for(int i=0;i<n;i++){
            if( i>0 && colors[i] != colors[i-1]){    //ager balloon aar hate je  ballon  same color r balloon noye 
                agerBalloonPatharTime = 0;
            }
            int currentBalloonPatharTime = neededTime[i];    // hate je balloon ta ache tar phatar time
            time+= min(agerBalloonPatharTime,currentBalloonPatharTime); // ager aar hater baloon same color hole je taratari phatbe take age pathabo
            agerBalloonPatharTime = max(agerBalloonPatharTime,currentBalloonPatharTime);  // ager aar hater baloon same color hole je taratari phatbe na take store kore rakhbo
        }
        return time;
    }
};