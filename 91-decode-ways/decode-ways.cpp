class Solution {
public:
    int t[101];
    int solve(int index,int n,string &s){
        
        if(t[index]!= -1) {
            return t[index];
        }
        
        if(index==n){
            return t[index]=1;   // out of bound hoye geche we have found one way
        }
        if(s[index]=='0'){ 
            // prothom element ta zero hole we cant find ans
            return t[index]= 0;
        }
        
        int ektaElementTulchi = solve(index+1,n,s);
         int dutoElementTulchi=0;
        
        if(index+1<n){   // duto element eksathe tolar somoye jodi dekhi je bhai 2nd element tar index tai n chariye geche tahole toh 2nd element ta exist e korena so cant take eksathe 2 to element
            if(s[index]=='1' || s[index]=='2' && s[index+1]<='6'){
                 dutoElementTulchi = solve(index+2,n,s);
            }
        }
        
        return t[index]=ektaElementTulchi + dutoElementTulchi;
        
        
        
    }
    int numDecodings(string s) {
        int n =s.length();
        memset(t,-1,sizeof(t));
        return solve(0,n,s);
    }
};