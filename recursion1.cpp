// it is basic code of recursion without any condition 
// it is going to print the output till infinite
// basically here stack overflow take place it is called segmentation
#include<bits/stdc++.h>
using namespace std;
void print()
{
    cout<<1<<endl;
    print();
}
int main()
{
    print();
    return 0;
}