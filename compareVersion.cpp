#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int compareVersion(string version1, string version2)
{
    int main1=0, main2=0, sub1=0, sub2=0;
    stringstream ss;
    int dot = 0;
    dot = version1.find('.');
    ss << version1.substr(0,dot);
    ss >> main1;
    if(dot!=string::npos)
    {
        ss.clear();
        ss << version1.substr(dot+1);
        ss >> sub1;
    }
    cout << main1 << '.' << sub1 << endl;

    dot = version2.find('.');
    ss.clear();
    ss << version2.substr(0,dot);
    ss >> main2;
    if(dot!=string::npos)
    {
        ss.clear();
        ss << version2.substr(dot+1);
        ss >> sub2;
    }
    cout<< main2 << "." << sub2 << endl;

    if(main1>main2)
        return 1;
    else if(main1 < main2)
        return -1;
    else{
         if(sub1 > sub2)
             return 1;
         else if(sub1 < sub2)
             return -1;
         else
            return 0;
    }
}

int main()
{
     cout << compareVersion("0","1") << endl;

     return 0;
}
