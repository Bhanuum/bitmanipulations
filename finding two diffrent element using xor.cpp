#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=8;
    int a[8]={1,1,3,2,3,4,5,5};
    int p=a[0];
    for(int i=1;i<n;i++)
    {
        p=p^a[i];
        
    }
    int c=0;
    while(p)
    {
        if(p&1)
        {
            break;
        }
        c++;
        p>>=1;
    }
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++){
    if(a[i]&(1<<c))
    {
        xor1=xor1^a[i];
    }
    else
    {
        xor2=xor2^a[i];
    }
    }
    cout<<xor1<<" "<<xor2<<p;
}
