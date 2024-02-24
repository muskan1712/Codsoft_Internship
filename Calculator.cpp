#include<bits/stdc++.h>
using namespace std;
int main(){    
cout<<"     ***** Calaulator *****"<<endl;    cout<<endl;
long long x,y,a;
cout<<"Enter the 1st operand:\n ";
cin>>x;
cout<<"Enter the 2nd operand:\n ";
cin>>y;
char operatr;
cout<<"Enter the operator'+','-','*','/’”;
cin>>operatr;
switch(operatr)
{
case '+’:
a=x+y; 
cout<<a<<endl;
break;
case'-’:
a=x-y; 
cout<<a<<endl;
break;
case'/’:
a=x/y;
 cout<<a<<endl;
break;
case'*’:
a=x*y;
 cout<<a<<endl;
break;
default: cout<<"kindly enter valid information.\n";
}
return 0;}
