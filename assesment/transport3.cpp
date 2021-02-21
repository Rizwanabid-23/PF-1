#include<iostream>
using namespace std;
int main(){
	
	int km1;
	int km2;
	int km3;
	int total1;
	int total2;
	int total3;
	int fare1;
	int fare2;
	int fare3;
	int total;
	
	
	string vehicle1;
	string vehicle2;
	string vehicle3;
	
	
	
	cout<<"Transport fare 2"<<endl;
	cout<<endl;
	cout<<"Enter your first vehicle..."<<endl;
	cin>>vehicle1;
	cout<<"Enter your fare per km"<<endl;
	cin>>fare1;
	cout<<"Enter distance travelled"<<endl;
	cin>>km1;
	
	cout<<"Enter your second vehicle..."<<endl;
	cin>>vehicle2;
	cout<<"Enter your fare per km"<<endl;
	cin>>fare2;	
	cout<<"Enter distance travelled"<<endl;
	cin>>km2;
	
	cout<<"Enter your third vehicle..."<<endl;
	cin>>vehicle3;
	cout<<"Enter your fare per km"<<endl;
	cin>>fare3;	
	cout<<"Enter distance travelled"<<endl;
	cin>>km3;
		
	cout<<"The trip details are:"<<endl;
	cout<<vehicle1<<"\t"<<"Rs."<<fare1<<"\t"<<km1<<endl;
	cout<<vehicle2<<"\t"<<"Rs."<<fare2<<"\t"<<km2<<endl;
	cout<<vehicle3<<"\t"<<"Rs."<<fare3<<"\t"<<km3<<endl;

	total1=fare1*km1;
	total2=fare2*km2;
	total3=fare3*km3;
	total=total1+total2+total3;
	cout<<endl;
	
	if(total1>total2 && total1>total3){
		cout<<vehicle1<<endl;	
	}
	if(total2>total1 && total2>total3){
		cout<<vehicle2<<endl;
	}
	if(total3>total1 && total3>total2){
		cout<<vehicle3<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}









































