#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
file.open("write.txt",ios::in);
string data;
while(getline(file,data)){
    if(data[1]=='a' && data.length()==6){
        cout<<data<<endl;
    }
}
file.close();
}
