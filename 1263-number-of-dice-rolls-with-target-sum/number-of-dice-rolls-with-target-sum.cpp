class Solution {
public:
    int t[31][1001]; // 2d array for 2 change variables n aar target
    int MOD = 1e9+7;
    int solve(int n,int k,int target){
        if(target<0) return 0;    // suppose amra target=2 khujji eibar 2nd for loop r time e target negative e chole jawar kotha so bhul rasta so return 0 korchi 
        
        if(t[n][target] != -1){
            return t[n][target];
        }
        
        if(n==0){
            return target==0;   // found a rasta
        }
        int ways_Rasta=0;
        for(int i=1;i<=k;i++){
            ways_Rasta=(ways_Rasta+solve(n-1,k,target-i)) % MOD;
            
        }
        return t[n][target] = ways_Rasta;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(t,-1,sizeof(t));
        return solve(n,k,target);
    }
};