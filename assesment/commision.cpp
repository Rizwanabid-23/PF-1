#include<iostream>
using namespace std;
int main(){
	
	float vol;
	float result;
	float commision;
	
	string city;
	string lahore;
	string multan;
	string fsd;
	
	
	
	cout<<"**Commision Checker**"<<endl;
	cout<<endl;
	cout<<"Enter name of city...";
	cin>>city;
	cout<<"Enter volume of sales...";
	cin>>vol;	

	if(city=="lahore"){	
		
		if(vol>=0 && vol<=500){
			commision=0.05;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>500 && vol<=1000){
			commision=0.07;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>1000 && vol<=10000){
			commision=0.08;
			result=commision*vol;
			cout<<result<<endl;			
		}
		if(vol>10000){
			commision=0.12;
			result=commision*vol;
			cout<<result<<endl;
			
		}
	}
	
	
	if(city=="multan"){
		if(vol>=0 && vol<=500){
			commision=0.045;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>500 && vol<=1000){
			commision=0.075;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>1000 && vol<=10000){
			commision=0.10;
			result=commision*vol;
			cout<<result<<endl;			
		}
		if(vol>10000){
			commision=0.13;
			result=commision*vol;
			cout<<result<<endl;
			
		}	
	
	
	}
	
	
	if(city=="fsd"){
		if(vol>=0 && vol<=500){
			commision=0.055;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>500 && vol<=1000){
			commision=0.08;
			result=commision*vol;
			cout<<result<<endl;
		}
		if(vol>1000 && vol<=10000){
			commision=0.12;
			result=commision*vol;
			cout<<result<<endl;			
		}
		if(vol>10000){
			commision=0.145;
			result=commision*vol;
			cout<<result<<endl;
			
		}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
