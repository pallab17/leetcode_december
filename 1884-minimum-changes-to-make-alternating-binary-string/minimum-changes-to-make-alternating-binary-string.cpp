class Solution {
public:
    int minOperations(string s) {
        int n = s.length();       
        int suru_with_0 =0;        
        for(int i=0;i<n;i++){
            if(i%2==0){ // even pos
                if(s[i]=='1'){
                    suru_with_0++;
                }
            } else {  // odd pos
                if(s[i]=='0'){
                    suru_with_0++;
                }
            }
        }
        int suru_with_1=n-suru_with_0;
        return min(suru_with_1,suru_with_0);
    }
};