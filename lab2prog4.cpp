#include <iostream>
using namespace std;
int main()
{ int a,b,c,d,e;
cout<<" enter no. of days---";
cin>>a;
b=a/365;
c=a%365;
d=c/7;
e=c%7;
cout<<a<<" days have "<<b<<" years,"<<d<<" weeks and "<<e<<" days";
return 0;
}

