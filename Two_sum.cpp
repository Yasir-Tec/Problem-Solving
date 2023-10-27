
/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*vector<int> result;
        for(int i=0; i!=nums.size(); ++i)
        {
            for(int j=i+1;j!=nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;*/



        /*unordered_map<int,int> _map;
        for(int i=0;i<nums.size();i++)
        {
            int num = nums[i];
            int ans = target - num;
            auto j = _map.find(ans);
            if(j != _map.end()) // found
            {
                return {j->second , i};
            }
            _map[num] = i;

        }
        return {};*/


    /*vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        for(auto i=nums.begin(); i!=nums.end(); ++i)
        {
            auto j = find(i+1, nums.end(), target - *i);
            if(j != nums.end())
            {
                result.push_back(i - nums.begin());
                result.push_back(j - nums.begin());
                break;
            }
        }
        return result;
    }*/
};
