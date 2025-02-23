// it is basically used to added all the number using function and recursion
// sum(3) is a function and it  will give 3 
// like in return(3+sum(3-1)); 
// then the function sum(2) will work and give 2
// the function sum(1) is will give 1
// the function of sum(0) will give 0
//then all will get add and give output as 6 
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
{
    return 0;
}
else
{
    return (n+sum(n-1));
}
}
int main()
{
    int n=3;
    cout<<sum(n);
    return 0;
}