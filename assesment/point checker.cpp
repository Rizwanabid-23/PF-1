#include<iostream>
using namespace std;
int main(){
	
	int x1;
	int x2;
	int y1;
	int y2;
	int x;
	int y;
	
	cout<<"**Point checker**"<<endl;
	cout<<endl;
	cout<<"Enter first point x1: ";
	cin>>x1;
	cout<<"Enter first point y1: ";
	cin>>y1;
	
	cout<<"enter second point x2: ";
	cin>>x2;
	cout<<"Enter second point y2: ";
	cin>>y2;
	
	cout<<"Enter point x to find:  ";
	cin>>x;
	cout<<"Enter point y to find:  ";
	cin>>y;
	
	if((x<x1 && x>x2) && (y>y1 && y<y2)){
		cout<<"outside"<<endl;
	}
	else if(( x>x1 && x>x2) && (y>y1 && y<y2)){
		cout<<"outside"<<endl;
	}
	else if((x<x1 && x<x2) && (y>y1 && y<y2)){
		cout<<"outside"<<endl;
	}
	else if((x<x1 && x>x2) && (y<y1 && y<y2)){
		cout<<"outside"<<endl;
	}
	else if((x<x1 && x>x2) && (y>y1 && y>y2)){
		cout<<"outside"<<endl;
	}
	else if((x<x1 && x<x2) && (y>y1 && y>y2)){
		cout<<"outside"<<endl;
	}
	else if((x>x1 && x<x2) && (y>y1 && y>y2)){
		cout<<"outside"<<endl;
	}
	
	
	else if((x>x1 && x<x2) && (y>y1 && y<y2)){
		cout<<"inside"<<endl;
	}
	else if(x==x1 && (y>y1 && y<y2)){
		cout<<"border"<<endl;
	}
	else if(x==x2 && (y>y1 && y<y2)){
		cout<<"border"<<endl;
	}
	else if(y==y1 && (x>x1 && x<x2)){
		cout<<"border"<<endl;
	}
	else if(y==y2 && (x>x1 && x<x2)){
		cout<<"border"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}






































