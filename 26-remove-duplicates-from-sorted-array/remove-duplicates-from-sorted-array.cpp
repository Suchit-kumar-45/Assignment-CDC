class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
        for(int i=j+1;i<n;i++)
        {
            nums.erase(nums.begin()+i);
        }
        return nums.size();
        
    }
};