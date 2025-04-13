class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int k = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        // Add the last element manually — it's always part of the unique set
        nums[k] = nums[n - 1];
       

        return k+1; //as was giving the index
    }
};
