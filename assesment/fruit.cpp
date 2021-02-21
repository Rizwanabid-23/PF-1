#include<iostream>
using namespace std;
int main(){
	
	string day;
	string fruit;
	string monday,tuesday,wednesday,thursday,friday,saturday,sunday;
	string banana,apple,orange,grapefruit,kiwi,pineapple,grapes;
	
	
	float qty;
	float total;
	
	
	
	
	
	
	
	
	
	cout<<"**Fruit shop**"<<endl;
	cout<<endl;
	cout<<"Enter day of week...";
	cin>>day;
	
	if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"){
		
		cout<<"Enter fruit name...";
		cin>>fruit;
		cout<<"Enter quantity...";
		cin>>qty;
		
		
		
		if(fruit=="banana"){
			total=2.50*qty;
			cout<<total;
		}
		if(fruit=="apple"){
			total=1.20*qty;
			cout<<total;
		}
		if(fruit=="orange"){
			total=0.85*qty;
			cout<<total;
		}
		if(fruit=="grapefruit"){
			total=1.45*qty;
			cout<<total;
		}
		if(fruit=="kiwi"){
			total=2.70*qty;
			cout<<total;
		}
		if(fruit=="pineapple"){
			total=5.50*qty;
			cout<<total;
		}
		if(fruit=="grapes"){
			total=3.85*qty;
			cout<<total;
		}
		
	}
	
	else if(day=="saturday" || day=="sunday"){
	
		cout<<"Enter fruit name...";
		cin>>fruit;
		cout<<"Enter quantity...";
		cin>>qty;
	
		if(fruit=="banana"){
			total=2.70*qty;
			cout<<total;
		}
		if(fruit=="apple"){
			total=1.25*qty;
			cout<<total;
		}
		if(fruit=="orange"){
			total=0.90*qty;
			cout<<total;
		}
		if(fruit=="grapefruit"){
			total=1.60*qty;
			cout<<total;
		}
		if(fruit=="kiwi"){
			total=3.00*qty;
			cout<<total;
		}
		if(fruit=="pineapple"){
			total=5.60*qty;
			cout<<total;
		}
		if(fruit=="grapes"){
			total=4.20*qty;
			cout<<total;
		}
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
