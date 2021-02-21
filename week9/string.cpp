#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream File;
File.open("textFile.txt", ios::out);
File<<"Hello file writing";
File.close();
}
