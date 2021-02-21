#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;
string animal[8]={"elephant","lion","tiger","deer","monkey","horse","fox","kangaroo"};
int line_no=0;
bool global_condition=false;
void read_file();
void check_validitity(string animal_1,string behavior,string animal_2);
int main()
{
read_file();
if(global_condition==true)
{cout<<"VALID FILE";}
}

void read_file()
{
fstream file;
file.open("task1.txt",ios::in);
string data;
while(getline(file,data))
{
line_no=line_no+1;    
int length=data.length();
int counter=0;
char c; 
string animal_1;
 
 while(data[counter]!=' ')
 {
 c=data[counter];
 animal_1=animal_1+c;
 counter=counter+1;
 }
 counter=counter+1;
 //cout<<animal_1<<endl;
 
 
 char d; 
 string behavior; 
 
 
 while(data[counter]!=' ')
 {
 d=data[counter];
 behavior=behavior+d;
 counter=counter+1;
 }
 //cout<<behavior<<endl;
  counter=counter+1;
 
 
 char e; 
 string animal_2; 
 
 while(counter<length)
 {
 e=data[counter];
 animal_2=animal_2+e;
 counter=counter+1;
 }
 //cout<<animal_2<<endl;
 getch();
  check_validitity(animal_1,behavior,animal_2);
}

}

void check_validitity(string animal_1,string behavior,string animal_2)
{
bool condition_animal1=false;
bool condition_animal2=false;
for(int x=0;x<=9;x++)
{
if(animal[x]==animal_1)
{condition_animal1=true;}
if(animal[x]==animal_2)
{condition_animal2=true;}
}
if(condition_animal1==false || condition_animal2==false)
{cout<<"IN-VALID ENTRY ON LINE NUMBER=";
cout<<line_no<<endl;}
else if(condition_animal1==true && condition_animal2==true)
{global_condition=true;}
}
