#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
file.open("write.txt",ios::in);

string info;
getline(file,info);
cout<<info<<endl;
getline(file,info);
cout<<info<<endl;
file.close(); 
}
