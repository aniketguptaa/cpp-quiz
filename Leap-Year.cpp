#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the year to check: ";
cin>>year;
if (year%2 == 0)
{
    cout<<"This is a leap year"<<endl;
}
else
{
    cout<<"This is not a leap year"<<endl;
}
return 0;
}