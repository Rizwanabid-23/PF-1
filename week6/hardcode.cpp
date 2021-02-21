#include<iostream>
#include<fstream>
using namespace std;

int main(){
fstream file;
file.open("data.txt",ios::out);
file<<"rizwan\n";
file<<"1234"<<endl;
file.close();
    
}
