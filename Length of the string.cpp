#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int count=0;
    cout<<"Enter the string \n";
    cin>>name;
    while (name[count]!=0)
        {
            count++;
        };
cout<<"The length of the string is"<<count;
return 0;
}