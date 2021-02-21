#include<iostream>
using namespace std;
main(){
cout<<"enter years of service"<<endl;
float years;
cin>>years;
cout<<"enter salary"<<endl;
float salary;
cin>>salary;
if(years<=5){
	cout<<"the salary is "<<salary<<endl;}
if(years>5){
	cout<<"the salary is"<<(salary+(0.05*salary))<<endl;}
}
