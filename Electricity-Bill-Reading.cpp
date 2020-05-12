//Program to print Electricity bill (taking 1 unit = Rs. 9)
#include<iostream>
using namespace std;
int main()
{
int old_read, new_read, unit_consume, bill, rate = 9;
cout<<"Enter your old reading : "<<endl;
cin>>old_read;
cout<<"Enter your new reading : "<<endl;
cin>>new_read;
unit_consume = new_read - old_read;
cout<<"Your units consumed are: "<<unit_consume<<endl;
bill = unit_consume * rate;
cout<<"Your Total bill is : "<<bill<<endl;
return 0;
}