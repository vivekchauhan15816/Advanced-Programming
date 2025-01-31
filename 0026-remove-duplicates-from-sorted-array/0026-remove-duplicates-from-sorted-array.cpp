class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newarr; 

        for (int i = 0; i < nums.size(); i++) {
            
            if (i == 0 || nums[i]  != nums[i - 1]) {
                newarr.push_back(nums[i]);
            }
        }

        nums = newarr;
        return nums.size(); 
    }
};