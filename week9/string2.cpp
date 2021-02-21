#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string word;
	cout<<"Enter a word without any number "<<endl;
	cin>>word;
	int length;
	length=word.length();	
	bool isNumberExist=false;
	for(int i=0;i<length ;i++){
		if(word[i]>=48 && word[i]<=57){
			isNumberExist=true;
		}
	}
if(isNumberExist){
	cout<<"Invalid word. contains numbers"<<endl;
}
else{
	cout<<"ok"<<endl;
}
}
