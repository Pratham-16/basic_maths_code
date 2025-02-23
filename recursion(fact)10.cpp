// it is use to calculate the factorial of number using number and recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
{
    return 1;
}
else
{
    return (n*fact(n-1));
}
}
int main()
{
    int n=4;
    cout<<fact(n);
    return 0;
}