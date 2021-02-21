#include<iostream>
using namespace std;
main(){
cout<<"enter first number"<<endl;
float first;
cin>>first;
cout<<"enter second number"<<endl;
float second;
cin>>second;
cout<<"enter third number"<<endl;
float third;
cin>>third;
if(first>second){
	cout<<"the largest value is "<<first<<endl;
	}
else if(first>third){
	cout<<"the largest value is "<<first<<endl;
	}
else if(second>third){
	cout<<"the largest value is "<<second<<endl;
	}
else if(second>first){
	cout<<"the largest value is "<<second<<endl;
	}
else if(third>first){
	cout<<"the largest value is "<<third<<endl;
	}
else if(third>second){
	cout<<"the largest value is "<<third<<endl;
	}		
}
