#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string s, string t)
{
    char ss[26], tt[26];
    for(int i =0;i<26;i++)
    {
        ss[i] = tt[i] = 0;
    }

    for(auto x : s)
    {
        ss[x-'a']++;
    }

    for(auto x : t)
    {
        tt[x-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(ss[i]!=tt[i])
            return false;
    }

    return true;
}

int main()
{
     string s("cat"), t("rat");
     cout << isAnagram(s,t) << endl;

     return 0;
}
