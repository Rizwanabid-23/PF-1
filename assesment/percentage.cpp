#include<iostream>
using namespace std;
int main(){
	
	float i;
	float n;
	float value;
	float counter=0;
	float counter1=0;
	float counter2=0;
	float counter3=0;
	float counter4=0;
	float counter5=0;
	float G1;
	float G2;
	float G3;
	float G4;
	float G5;
	
	cout<<"**Percentage**"<<endl;
	cout<<endl;
	cout<<"Enter number of input values...";
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		cout<<"Enter value...";
		cin>>value;
		  counter=counter+1;
		
		if(value<200){
			counter1=counter1+1;
		}
		
		if(value>=200 && value<=399){
			counter2=counter2+1;
		}
		
		if(value>=400 && value<=599){
			counter3=counter3+1;
		}
		
		if(value>=600 && value<=799){
			counter4=counter4+1;
		}
		
		if(value>=800){
			counter5=counter5+1;
		}
	}                   
	
	G1=counter1/n *100;
	cout<<G1<<endl;
	
	G2=counter2/n *100;
	cout<<G2<<endl;
	
	G3=counter3/n *100;
	cout<<G3<<endl;
	
	G4=counter4/n *100;
	cout<<G4<<endl;
	
	G5=counter5/n *100;
	cout<<G5<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}




















































