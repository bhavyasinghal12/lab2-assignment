#include <iostream>
#include <math.h>
using namespace std;
int main()
{ float a,b,c,d,e,t,av,p;
cout<<"enter marks out of 50"<<endl<<"physics--";
cin>>a;
cout<<"maths--";
cin>>b;
cout<<"chem--";
cin>>c;
cout<<"biology--";
cin>>d;
cout<<"CS--";
cin>>e;
t=a+b+c+d+e;
av=t/5;
p=t/2.5;
cout<<"your total is="<<t<<endl<<"average="<<av<<endl<<"percentage="<<p<<"%";
return 0;
}

