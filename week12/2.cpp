#include<iostream>
using namespace std;
int main(){	
	float A=10;
	float B=20;
	float C=30;	
	float* alpha;
	float* beta;
	float* gamma;	
	alpha=&A;
	beta=&B;
	gamma=&C;
	
	cout<<*alpha<<endl;
	cout<<*beta<<endl;
	cout<<*gamma<<endl;	
}
