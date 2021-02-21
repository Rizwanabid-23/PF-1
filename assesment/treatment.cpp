#include<iostream>
using namespace std;
int main(){
	
	int i;
	int n;
	int d;
	float counter=0;
	int capacity=7;
	int treated;
	int untreated;
	
	cout<<"**Patient Treatment**"<<endl;
	cout<<endl;
	
	cout<<"Enter number of days...";
	cin>>d;
	
	for(i=1;i<=d;i++){

		float treatCount;
		float untreatCount;
		cout<<"Enter number of patients at a day...";
		cin>>n;
		counter=counter+1;

	if(n<=capacity){
		//treated
		treated=n;
	}
	else if(n>capacity){
		//untreated
		treated=capacity;
		untreated=n-capacity;
	}




	treatCount=treatCount+treated;
	untreatCount=untreatCount+untreated;

		
	cout<<treatCount<<endl;
	cout<<untreatCount<<endl;	
	
			
	if(counter==2){
	
		//check if treated and unequal patients are equal or not
			
		if(treatCount!=untreatCount){
			capacity=capacity+1;
			}
		counter=0;	
	}
	treated=0;
	untreated=0;
	n=0;
	}


	
	
	
	
	
}















































