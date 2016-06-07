/*************************************************************************
	> File Name: lengthOfLongestSubstring.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 21时00分00秒
 ************************************************************************/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size() <= 0)
            return 0;
        int curlen = 1, mlen = 1, lastsub = 0;
        vector<int> hash(128,-1);
        hash[s[0]] = 0;
        for(int i=1;i<s.size();i++)
        {
            if(hash[s[i]] == -1)
            {
                curlen ++;
                hash[s[i]] = i;
            }
            else if(lastsub <= hash[s[i]])
            {
                curlen = i - hash[s[i]];
                lastsub = hash[s[i]] + 1;
                hash[s[i]] = i;
            }
            else
            {
                curlen ++;
                hash[s[i]] = i;
            }
            if(curlen > mlen)
            {
                mlen = curlen;
            }
        }
        return mlen;
    }
};
