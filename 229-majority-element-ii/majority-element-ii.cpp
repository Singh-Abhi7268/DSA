class Solution {
public:
    vector<int> majorityElement(vector<int>& num) {
        int n = num.size();
        int ans1 = 0, ans2 = 0, fq1 = 0, fq2 = 0;

        // Step 1: Find candidates
        for (int i=0;i<n;i++) {
            if (fq1==0 && ans2!=num[i]) {
                ans1=num[i];
                fq1=1;
                           }
             else if (fq2==0 && ans1!=num[i]) {
                ans2=num[i];
                fq2=1;
               
            }
             else if (num[i]==ans2) {
            fq2++;
            } 
             else if (num[i]==ans1) {
                fq1++;
            } 
            
         else {
                fq1--;
                fq2--;
            }
        }
        int mini=(int)(n/3)+1;
    
 vector<int> result;
 fq1=0;fq2=0;
 for(int i=0;i<n;i++){
    if(num[i]==ans1){
        fq1++;
    }
   else  if(num[i]==ans2){
        fq2++;
    }
 }
        if (fq1 >=mini) {
            result.push_back(ans1);
        }
        if (fq2 >= mini){

         result.push_back(ans2);
        }
    
        return result;

    
    }  
};
