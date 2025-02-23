// it is use to reverse the input
#include<bits/stdc++.h>
using namespace std;
int main()
{
int revno=0,n,rem;
cout<<"enter the value of n"<<endl;
cin>>n;
while(n>0)
{
    rem=n%10;
    revno=(revno*10)+rem;
    n=n/10;
}
    cout<<"rev no="<<revno;
return 0;    
}