#include<iostream>
using namespace std;
main(){
cout<<"enter percentage ";
float n;
cin>>n;
if(n>=0 && n<=25){cout<<"the grade is F ";}
if(n>=26 && n<=45){cout<<"the grade is E";}
if(n>=46 && n<=50){cout<<"the grade is D";}
if(n>=51 && n<=60){cout<<"the grade is C";}
if(n>=61 && n<=80){cout<<"the grade is B";}
if(n>=80 && n<=100){cout<<"the grade is A";}
}
