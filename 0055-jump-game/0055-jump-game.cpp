class Solution {
public:
    bool canJump(vector<int>& nums) {
        int destination=0;
        for(int i=0;i<nums.size();i++){
            if(i>destination) 
                return false; 

            destination=max(destination,i+nums[i]); 
        }
        return true;
    }
};