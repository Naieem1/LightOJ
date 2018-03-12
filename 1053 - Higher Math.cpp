#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[3];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+3);
        long long int a=arr[0]*arr[0];
        long long int b=arr[1]*arr[1];
        long long int c=arr[2]*arr[2];
        if(a+b==c)
        {
            cout<<"Case "<<i<<": yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": no"<<endl;
        }
    }
    return 0;
}
