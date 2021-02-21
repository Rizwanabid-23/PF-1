#include<iostream>
using namespace std;
int main(){
	int num[5]={300,292,350,240,310};
	int newArray[5];
	int newArrayIDX=0;	
	for(int newidx=0;newidx<=4;newidx++){
		int largest=num[0];
		int largestIDX=0;
		for(int idx=0;idx<=4;idx++){
			
			if(num[idx]>largest){
				largest=num[idx];
				largestIDX=idx;
			}
		}
		num[largestIDX]=-1;
		newArray[newidx]=largest;
	}	
	for(int idx=0;idx<=4;idx++){
	 cout<<newArray[idx]<<endl;
	}
	return 0;	
}
