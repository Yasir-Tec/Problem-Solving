Example 1:

Input: s = "12"
Output: 2
Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).
Example 2:

Input: s = "226"
Output: 3
Explanation: "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
Example 3:

Input: s = "06"
Output: 0
Explanation: "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06").




class Solution {
public:
    int numDecodings(string s) 
    {
        if(s[0] == '0')
            return 0;

        if(s.length() == 1)
            return 1;

        if(s.length() < 1)
            return 1;

        int val1=1;
        int val2=1;

        for(int i=1;i< s.length();i++)
        {
            int d1 = s[i] - '0';
            int d2 = (s[i-1] - '0')*10 + d1;
            int val = 0;

            if(d1 >= 1)
                val += val2;   /// val2 bcz val2 = (i) and val1=(i-1)

            if(d2>=10 && d2<=26)
            {
                val += val1;
            }

            val1 = val2;
            val2 = val;

        }

        return val2;  // bcz val2 is the latest calculation
    }
};