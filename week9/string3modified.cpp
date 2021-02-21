#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string word; string ans;
	int idx=0;
	int length=0;
	bool isPalindrome=false;
	cout<<"Enter a palindrome word"<<endl;
	cin>>word;
	while(word[idx]!='\0'){
		idx++;
		length++;	
	}
string answer;string output;
 for(int i=0;i<=length; i++){
 	output[i]=word[(length)-i];
 	answer=output[i];
	ans=word[i-1];
}
if(answer==ans){
	isPalindrome=true;
	}
for(int k=0;k<1;k++){
	if(isPalindrome==true){
		cout<<"palindrome word"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}	
 }
}
