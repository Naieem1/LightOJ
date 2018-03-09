#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int divisor_by_3(int n)
{
    int ans=(n/3)*2;
    if(n%3==2)
    {
        ans+=1;
    }
    return ans;
}
int main()
{
    int testcase,a,b;
    scanf("%d",&testcase);
    int case_no=1;
    while(testcase--)
    {
        scanf("%d %d",&a,&b);
        int result=divisor_by_3(b)-divisor_by_3(a-1);
        printf("Case %d: %d\n",case_no++,result);
    }
    return 0;
}
