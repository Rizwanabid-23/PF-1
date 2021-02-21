#include<iostream>
using namespace std;
int main(){
	int var_1; int* var1;
	int var_2; int* var2;
	float a;   float* A;
	float b;   float* B;
	char alpha; void* ALPHA;
	char beta;  void* BETA;
	char gamma; void* GAMMA;
	
	var1=&var_1;
	var2=&var_2;
	A=&a;
	B=&b;
	ALPHA=&alpha;
	BETA=&beta;
	GAMMA=&gamma;
	
	cout<<var1<<endl;
	cout<<var2<<endl;
	cout<<A<<endl;
	cout<<B<<endl;
	cout<<ALPHA<<endl;
	cout<<BETA<<endl;
	cout<<GAMMA<<endl;
}
