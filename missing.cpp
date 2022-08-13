#include<iostream>
using namespace std;
int main()
{
    int n,i,c,div=0,sum=0,ans=0;
    cin>>n;
    div=n*(n+1)/2;
    for(i=1; i<n; i++)
    {
        cin>>c;
        sum+=c;
    }
    ans = div-sum;
    cout<<ans;
    return 0;
}
