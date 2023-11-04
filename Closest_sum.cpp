class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n= nums.size();
        sort(nums.begin(),nums.end());

        int sum = 0, min_diff= INT_MAX;
        for(int i=0;i<n;i++)//or i<n-2
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int curSum = nums[i] + nums[left] + nums[right];
  
                int diff = abs(target - curSum);
                if(diff < min_diff)
                {
                    min_diff = diff;
                    sum = curSum;
                }
                if(target > curSum)
                {
                    left++;
              
                }
                else
                {
                    right--;
                
                }
                
            }
        }
        return sum;
    }
};



Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).