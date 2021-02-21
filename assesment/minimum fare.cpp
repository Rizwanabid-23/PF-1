#include<iostream>
using namespace std;
int main(){
	
	float startFare=0.7;
	float taxiFare;
	float total1;
	float total2;
	float total3;
	float total4;
	float basic1;
	float basic2;
	float busFare;
	float trainFare;
	float km;
	
	string time;
	string day;
	string night;
	
	
	cout<<"**Minimum fare**"<<endl;
	cout<<endl;
	cout<<"Enter number of kilometers...";
	cin>>km;
	cout<<"Enter time...";
	cin>>time;
	
	if(km>0 && time=="day"){
		taxiFare=0.79;
		basic1=taxiFare*km;
		total1=basic1+startFare;
		cout<<total1<<endl;
		total2=0;
	}
	if(km>0 && time=="night"){
		taxiFare=0.90;
		basic2=taxiFare*km;
		total2=basic2+startFare;
		cout<<total2<<endl;
		total1=0;
	}
		
	
	if(km>=20){
			    //using bus
		busFare=0.09;	
		total3=km*busFare;
		cout<<total3<<endl;
	}
	
	if(km>=100){
				//using train
		trainFare=0.06;		
		total4=km*trainFare;
		cout<<total4<<endl;
	}
	
	//conditions
	
	if(total1<total2){
		
		if(total1<total3){
			cout<<total1<<endl;
		}
		if(total1<total4){
			cout<<total1<<endl;
		}
		if(total3<total1){
			cout<<total3<<endl;
		}
		if(total4<total1){
			cout<<total4<<endl;
		}
	
	
	}	
	
	if(total2<total1){
		
		if(total2<total3){
			cout<<total1<<endl;
		}
		if(total2<total4){
			cout<<total1<<endl;
		}
		if(total3<total2){
			cout<<total3<<endl;
		}
		if(total4<total2){
			cout<<total4<<endl;
		}
		
		
	}
	
	if(total3<total4){
		cout<<total3;
	}
	if(total4<total3){
		cout<<total4<<endl;
	}






}












