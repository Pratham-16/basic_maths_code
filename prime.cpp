// to check whether number is prime or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not a prime";
    }
    
}