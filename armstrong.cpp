// it is to check whether it is Armstrong or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int duplicate,sum=0,n,rem;
    cout<<"enter the value"<<endl;
    cin>>n;
    duplicate=n;
    while(n>0)
    {
        rem=n%10;
       sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(duplicate==sum)
    {
        cout<<"it is Armstrong number"<<endl;
    }
    else
    {
        cout<<"it is not a Armstrong number"<<endl;
    }
    return 0;
}
