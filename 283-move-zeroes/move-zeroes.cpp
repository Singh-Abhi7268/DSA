class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            bool flag=true;
            for(int j=0;j<n-1-i;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                    flag=false;
                }
            }
if(flag==true){
    break;
}
        }
    }
};