
/*
Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 */

class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        bool flag=false;
       
            int count=1;
            count+=nums[1];
            if((nums.size()-1)==count)
            {
                flag = true;
            }
            else 
            {
                count += nums[count];
                if((nums.size()-1) == count )
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
        
        if(flag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};