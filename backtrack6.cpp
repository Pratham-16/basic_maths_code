// it is use to print the element by using backtrack method 
#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i<1)
    {
        return;
    }
   print(i-1,n);
   cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(n,n);
    return 0;
}