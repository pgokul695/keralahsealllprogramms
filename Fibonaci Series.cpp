#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"Enter the Limit \n";
    cin>>n;
    if (n==1)
    {
        cout<<a;
    }
    else
        cout<<a<<"\t"<<b;
        for ( i = 3; i < n; i++)
        {
            c=a+b;
            cout<<"\t"<<c;
            a=b;
            b=c;
        }
    return 0;
}