#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter threee numbers";
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<"The Biggest is"<<a;
    else if (b>c)
    {
        cout<<"The biggest is"<<b;
    }
    else
        cout<<"The biggest is"<<c;
    return 0;

    
}