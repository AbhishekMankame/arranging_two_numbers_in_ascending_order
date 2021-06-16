// C++ program to print two numbers in ascending order

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two integers"<< endl;
    cin>>a>>b;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    cout<<a<<"<="<<b<<endl;
}