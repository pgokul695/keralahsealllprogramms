#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    sum=0;
    cout<<"Enter the Limit";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+i*i;
    }
    cout<<"The sum is"<<sum;
    return 0;
    }