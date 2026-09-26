class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> key(2);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    key[0]=i;
                    key[1]=j;
                    return key;
                }
            }
        }
    }
};
