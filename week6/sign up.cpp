#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
fstream file2;
string username;
string pass;

file.open("username.txt",ios::app);
cout<<"Enter username"<<endl;
cin>>username;
file<<username<<endl;
file.close();
file2.open("password.txt",ios::app);
cout<<"Enter password"<<endl;
cin>>pass;
file2<<pass<<endl;
file2.close();
}
