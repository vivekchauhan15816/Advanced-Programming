class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target=0;
        for(int i=0;i<nums.size();i++){
            if(i>target) 
                return false; 

            target=max(target,i+nums[i]); 
        }
        return true;
    }
};