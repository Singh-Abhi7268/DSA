class Solution {
public:
    int myAtoi(string s) {
      int i=0; int n=s.size();
      while(i<n && s[i]==' '){
        i++;
      }
      if(i==n ) return 0;
      int sign=1;
      if(s[i]=='+' || s[i]=='-'){
        sign=(s[i]=='-')?-1:1;
        i++;
      }
      long long num=0;
      while(i<n && isdigit(s[i])){
        num=(num*10)+(s[i]-'0');
        i++;
      if(num*sign>=INT_MAX) return INT_MAX;
      if(num*sign<=INT_MIN) return INT_MIN;

      }
     
      return num*sign;
    }
};
