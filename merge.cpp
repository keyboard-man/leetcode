/*************************************************************************
	> File Name: merge.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时21分00秒
 ************************************************************************/

/*
 * Definition for an interval.
 * struct Interval
 * {
 *      int start;
 *      int en;
 *      Interval() : start(0), end(0) { }
 *      Interval(int s, int e) : start(s), end(e) { }
 * };
 */
class Solution
{
public:
    bool inside(int i, vector<Interval>& intervals)
    {
        bool flag = false;
        vector<Interval>::iterator it = intervals.begin();
        for(;it!=itervals.end();++it)
        {
            if((it->start <= i) && (it->end >= i))
            {
                flag = true;
                return flag;
            }
        }

        return flag;
    }

    vector<Interval> merge(vector<Interval>& intervals)
    {
        if(intervals.empty())
            return vector<Interval> ();
        vector<Interval>::iterator iter = intervals.begin();
        vector<int> q(iter->end+1,0), single;
        if(iter->start == iter->end)
            single.push_back(iter->start);
        else
        {
            q[iter->start]++;
            q[iter->end]--;
        }
        iter++;

        for(;iter!=intervals.end();iter++)
        {
            if(iter->end >= (q.size()))
            {
                q.resize(iter->end+1,0);
            }
            if(iter->start == iter->end)
                single.push_back(iter->start);
            else
            {
                q[iter->start]++;
                q[iter->end]--;
            }
        }

        int count = 0, flag = 0, begin = 0;
        vector<Interval> result;
        for(int i=0;i<q.size();i++)
        {
            count +=q[i];
            if(count > 0 && flag == 0)
            {
                begin = i;
                flag = 1;
            }
            if(count == 0 && flag == 1)
            {
                result.push_back(Interval(begin,i));
                flag = 0;
            }
        }
        while(!single.empty())
        {
            int sin = single.back();
            vector<Interval>::iterator it = result.begin();
            if(!inside(sin,result))
            {
                result.push_back(Interval(sin,sin));
            }
            single.pop_back();
        }
        return result;
    }
};
