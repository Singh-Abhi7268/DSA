class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                curr++;
            }
                  else if(s[i]==')'){
                curr--;
            }
                res=max(res,curr);
            }
          
    
        return res;
        
    }
};