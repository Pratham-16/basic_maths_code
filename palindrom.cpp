#include<bits/stdc++.h>
using namespace std;
int main()
{
    int duplicate,reverse=0,n,rem;
    cout<<"enter the palindrom"<<endl;
    cin>>n;
    duplicate=n;
    while(n>10)
    {
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
        
    }
    if(duplicate==reverse)
    {
        cout<<"it is palindrom"<<endl;
    }
    else
    {
        cout<<"it is not a palindrom"<<endl;
    }
    return 0;
}
