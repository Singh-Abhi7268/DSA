class Solution {
public:
    int mySqrt(int x) {
   int lo=0;
   int hi= x;
   while(lo<=hi){
    long mid=lo+(hi-lo)/2; //long use kiya kyuki mid*mid bahot bada number bn rha hai jo integer me store nhi hoga
    if(mid*mid==x) return mid;
    else if(mid*mid>x) hi=mid-1;
    else if (mid*mid<x) lo=mid+1;
   }
return hi;
    }
};