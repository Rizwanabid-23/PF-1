#include<iostream>
using namespace std;
int main(){
									// INCOMPLETE AND DONE WRONG
	int arr[5]={1,2,3,4,5};
	int arr2[5];
	int arr3[5];
		
	for(int i=0;i<5;i++){
		arr2[0]=arr[4];
		arr2[i+1]=arr[i];
		
		arr3[0]=arr2[4];
		arr3[i+1]=arr2[i];		
	}
	cout<<endl;

	
}
