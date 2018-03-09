#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    string s1,s2;
    bool truth;
    int testcase,len_s1,len_s2;
    scanf("%d",&testcase);
    int c=0;
    getline(cin,s1);
    while(testcase--)
    {
        truth=false;
        getline(cin,s1);
        getline(cin,s2);
        len_s1=sizeof(s1);
        len_s2=sizeof(s2);
        for(int i=0;i<len_s1;i++)
        {
            if(s1[i]==' ')
            {
                s1.erase(i,1);
            }
        }
        len_s1=s1.size();
        for(int i=0;i<len_s2;i++)
        {
            if(s2[i]==' ')
            {
                s2.erase(i,1);
            }
        }
        len_s2=s2.size();
        for(int i=0;i<len_s1;i++)
        {
            s1[i]=tolower(s1[i]);
        }
        for(int i=0;i<len_s2;i++)
        {
            s2[i]=tolower(s2[i]);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        cout<<"Case "<<++c<<": ";
        if(s2.find(s1) != string::npos)
        {
            cout << "Yes"<<endl;
            truth = true;
        }
        if(truth == false && s1.find(s2)!= string::npos)
        {
            cout << "Yes" << endl;
            truth = true;
        }
        if(truth == false)
            cout << "No" << endl;
    }
    return 0;
}
