#include <iostream>
#include <cmath>
using namespace std;
main(){
char ope;
float a,b;
int ans = 1;
    
cout<<"(+,-,*,/,^,%)"<<endl;  
cout<<"Enter a Arithmetic Operators:"<<endl;
cin>>ope;


switch(ope){
case '+':
cout<<"Enter First Number: "<<endl;
cin>>a;

cout<<"Enter Second Number: "<<endl;
cin>>b;
cout<<"Sum:"<<a+b<<endl<<endl;
break;

case '-':
cout<<"Enter First Number: "<<endl;
cin>>a;

cout<<"Enter Second Number: "<<endl;
cin>>b;
cout<<"Diff:"<<a-b<<endl<<endl;
break;

case '*':
cout<<"Enter First Number: "<<endl;
cin>>a;

cout<<"Enter Second Number: "<<endl;
cin>>b;
cout<<"Product:"<<a*b<<endl<<endl;
break;

case '/':
cout<<"Enter First Number: "<<endl;
cin>>a;

cout<<"Enter Second Number: "<<endl;
cin>>b;
cout<<"Divide:"<<a/b<<endl<<endl;
break;
        
case '^':
cout<<"Enter First Number: "<<endl;
cin>>a;

cout<<"Enter Second Number: "<<endl;
cin>>b; 
for(int i=0; i<b; i++)
 ans *= a;
cout<<"Power:"<<ans<<endl<<endl;      
break;  
        
case '%':
int a,b,remainder;

cout << "Enter First Number: ";
cin >> a;
cout << "Enter Second Number: ";
cin >>b;
remainder = a % b;
cout <<"Remainder:"<<remainder<<endl<<endl;
        
break;    
    
}

return main();

return 0;
}