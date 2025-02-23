// it will print all number which is divisble 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,div,i,rem;
    cout<<"enter the value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        rem=n%i;
        div=n/i;
        if(rem==0)
        { 
            cout<<"the div ="<<div<<endl;
        }
    }
}