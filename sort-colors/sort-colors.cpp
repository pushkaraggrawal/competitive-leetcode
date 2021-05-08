class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int low = 0;    int high = nums.size()-1;   int middle=0;
        
        while(middle<=high)
        {   
            switch(nums[middle])
            {
                case(0):
                    swap(nums[low],nums[middle]); middle++; low++; break;
                case(1):
                    middle++; break;
                case(2):
                    swap(nums[middle],nums[high]);  high--; break;
            }
                
        }
        
        
    }
};