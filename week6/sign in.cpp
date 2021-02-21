#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
fstream file1;
file.open("username.txt",ios::in);
file1.open("password.txt",ios::in);
string username;
string pass;
string alpha;
string beta;

cout<<"Enter username"<<endl;
cin>>alpha;
cout<<"Enter password"<<endl;
cin>>beta;
while(getline(file,username) && getline(file1,pass)){
	if(( alpha==username) && (beta==pass)){
		cout<<"welcome"<<endl;				
	} 
}
file.close();
}
