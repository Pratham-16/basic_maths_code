//The function print(i, n) first recursively calls itself (print(i+1, n)) before printing i.
//This means all recursive calls are made first, reaching the base condition (i > n).
//Once the base condition is met, the function starts returning from the deepest call.
//At this point, the values of i are printed in reverse order (last call first).
//This is a classic backtracking approach, as it moves forward first (recursion) and then performs an action while backtracking.

#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n)
    {
        return;
    }
   print(i+1,n);
   cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(1,n);
    return 0;
}