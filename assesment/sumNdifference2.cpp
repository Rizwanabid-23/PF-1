#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	
	int n;
	int t;
	int i;
	int x;
	int j;
	int value1;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	int value7;
	int counter1=0;
	int counter2=0;
	int counter3=0;
	int counter4=0;
	int counter5=0;
	int counter6=0;
	int counter7=0;
	int value;
	int diff;
	
		
	cout<<"**Sum and Difference**"<<endl;
	cout<<endl;
	cout<<"Enter number of groups...";
	cin>>n;
	while(x!=0){
		
								
	
	if(n==1){
		
	
		for(i=1;i<=2;i++){
		
		cout<<"Enter your value...";
		cin>>value1;
		counter1=counter1+value1;	
		cout<<counter1<<endl;
		}
	n=n-1;	
	x=0;
	}
	
	else if(n==2){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value2;
	counter2=counter2+value2;	
	cout<<counter2<<endl;
		}
	n=n-1;
	}
	
	else if(n==3){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value3;
	counter3=counter3+value3;	
	cout<<counter3<<endl;
		}
	n=n-1;	
	}
	
	else if(n==4){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value4;
	counter4=counter4+value4;	
	cout<<counter4<<endl;
		}
	n=n-1;	
	}
	
	else if(n==5){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value5;
	counter5=counter5+value5;	
	cout<<counter5<<endl;
		}
	n=n-1;	
	}
	
	else if(n==6){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value6;
	counter6=counter6+value6;	
	cout<<counter6<<endl;
		}
	n=n-1;	
	}
	
	else if(n==7){
	
	
	for(i=1;i<=2;i++){
		
	cout<<"Enter your value...";
	cin>>value7;
	counter7=counter7+value7;	
	cout<<counter7
	<<endl;
		}
	n=n-1;	
	}
}
		if(counter1==counter2 && counter2==counter3 ){

			
		cout<<"Yes! The value is "<<counter1<<endl;
		
	}
	
			else if(counter1==counter2){
				
				cout<<"Yes! The value is "<<counter1<<endl;
			}
			
			else if(counter1==counter2 && counter2==counter3 && counter3==counter4){

		
		cout<<"Yes! The value is "<<counter1<<endl;
	}
			else if(counter1==counter2 && counter2==counter3 && counter3==counter4 && counter4==counter5){

			
		cout<<"Yes! The value is "<<counter1<<endl;
	}
	
	    	else if(counter1==counter2 && counter2==counter3 && counter3==counter4 && counter4==counter5 && counter5==counter6){

			
		cout<<"Yes! The value is "<<counter1<<endl;
	}
	
		   	else if(counter1==counter2 && counter2==counter3 && counter3==counter4 && counter4==counter5 && counter5==counter6 && counter6==counter7){

			
		cout<<"Yes! The value is "<<counter1<<endl;
	}
		else{
			cout<<"NO! The difference is "<<endl;
		}
	
	
	
	
	
	
		
	
	
	
	
	
}
