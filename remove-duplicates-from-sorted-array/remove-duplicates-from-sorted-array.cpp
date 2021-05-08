class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==0) return 0;
        int i=0,j=1;
        while(i<nums.size()-1)
        {
            
            if(nums[i]==nums[j]) 
            {nums.erase(nums.begin()+j); continue;}
            else
            {
                i++;j++;continue;
            }
            i++;
            if(j<nums.size()) j++;
            
        }
        
        
        return nums.size();
    }
};