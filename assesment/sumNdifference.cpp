#include<iostream>
using namespace std;
int main(){
	
	int n;
	int t;
	int i;
	int j;
	int value1;
	int value2;
	int counter1=0;
	int counter2=0;
	int value;
	int diff;
	

	
	cout<<"**Sum and Difference**"<<endl;
	cout<<endl;
	cout<<"Enter number of groups...";
	cin>>n;
	
//total inputs to take
	t=2*n;
	
	for(i=1;i<=n;i++){
		cout<<"Enter your value...";
		cin>>value1;
		counter1=counter1+value1;	

	}
	
	for(j=1;j<=n;j++){
		cout<<"Enter your value...";
		cin>>value2;
		counter2=counter2+value2;

	}
	
	if(counter1==counter2){
		cout<<"Yes! The sum is "<<counter1<<endl;
	}
	else{
		diff=counter1-counter2;
		
		if(diff<0){
			diff=diff*-1;
		}
	
		
		cout<<"NO! The difference is: "<<diff<<endl;
		
	
	}
	
	
}























