#include <iostream>
using namespace std;
#define max 10
int s[max];
int main ()
{
    int n,m;
    cout<<"nhap n= ";
    cin>>n;
    int kt=0;
    while(kt!=1)
    {
        for(int i=1;i<n;i++)
        cout<<s[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++)
        if(s[i]==0) m=i;
        s[m]=1;
        for(int i=m+1;i<=n;i++)
        s[i]=0;
        int dem=0;
        for(int i=1;i<=n;i++)
        if(s[i]==1) dem++;
        if(dem==n) kt=1;
    }
    for(int i=1; i<=n;i++)
    cout<<s[i]<<" ";
    return 0;
}