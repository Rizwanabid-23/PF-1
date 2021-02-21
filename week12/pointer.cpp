#include<iostream>
using namespace std;
int* example();
int main(){
	int* a=example();
	cout<<*a<<endl;
	cout<<*(a+1)<<endl;
	cout<<*(a+2)<<endl;
	cout<<*a+3<<endl;
	cout<<*a+4<<endl;
}
int* example(){
	static int array[]={1,2,3,4,5};
	return array;
}
