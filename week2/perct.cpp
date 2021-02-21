#include<iostream>
using namespace std;
main(){
cout<<"enter number of classes to attend"<<endl;
float classes;
cin>>classes;
cout<<"enter classes attended"<<endl;
float attend;
cin>>attend;
float perct;
perct=(attend/classes)*100;
cout<<"the percentage is "<<perct<<endl;
if(perct<75){cout<<"the status is not eligible"<<endl;}
if(perct>=75){cout<<"the status is eligible"<<endl;}
}
