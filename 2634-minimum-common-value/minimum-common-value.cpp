class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int i=0;i<nums2.size();i++)
        {
            st.insert(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(st.find(nums1[i])!=st.end())
            {
                return nums1[i];
            }
        }
        return -1;
    }
};