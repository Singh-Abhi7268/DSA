class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        string ans="";
        sort(str.begin(),str.end());
        string str1=str[0];
        string str2=str[n-1];
        for(int i=0;i<min(str1.length(),str2.length());i++){
        if(str1[i]==str2[i]){
                ans+=str1[i];
        }
        else{
            break;
        }
        }
        if(ans.length()>0){
            return ans;
        }
        else return "";

        
    }
};