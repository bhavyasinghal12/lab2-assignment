#include <iostream>
#include <math.h>
using namespace std;
int main()
{ float p,r,t,n,a,b,c,ci;
cout<<"enter principal--";
cin>>p;
cout<<"enter rate--";
cin>>r;
cout<<"enter time--";
cin>>t;
cout<<"enter number of coumpounding periods--";
cin>>n;
a=(1+(r/n));
c=n*t;
b=pow(a,c);
ci=p*b;
cout<<"compound interest ="<<ci;
return 0;
}
