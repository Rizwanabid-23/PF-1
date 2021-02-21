#include<iostream>
using namespace std;
int main(){
	int A;
	int B;
	int* alpha;
	int* beta;
	int gamma;
	cout<<"Enter first number ..";
	cin>>A;
	cout<<"Enter second number ..";
	cin>>B;
	alpha=&A;
	beta=&B;
	gamma=*alpha+*beta;
	cout<<gamma<<endl;
}
