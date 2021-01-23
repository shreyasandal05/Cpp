#include <bits/stdc++.h>

using namespace std;

int simplearraysum(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = ans + a[i];
    }
    return ans;
} 
int main()
{
    int n,ar[n],sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
        sum = simplearraysum(ar,n);
    cout<<sum;
    return 0;
}

