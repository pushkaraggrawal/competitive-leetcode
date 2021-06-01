class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        if(nums.size()==1) return 1;
        int curr_max=nums[0];
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(curr_max<i) return 0;
            //if(curr_max==i && nums[i]==0) return 0;
            curr_max=max(curr_max,i+nums[i]);
        }
        
        if(curr_max>=nums.size()-1) return 1; else return 0;
        
        }
    
};