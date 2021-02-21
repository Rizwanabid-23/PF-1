#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
//code generatring random number
srand((unsigned)time(0));
int x=rand()%100; //between 0-100
cout<<"enter 1st guess  ";
int a;
cin>>a;
if(x==a){cout<<"you guessed the number";}
if(x>a){cout<<"the number is higher";}
if(x<a){cout<<"the number is lower";}
if(x+a<2   && x+a>1){cout<<"the number is a little higher";}
if(x-a>2   && x-a<1){cout<<"the number is a little lower";}
cout<<endl;
cout<<"enter 2nd guess  ";
int b;
cin>>b;
if(x==b){cout<<"you guessed the number";}
if(x>b){cout<<"the number is higher";}
if(x<b){cout<<"the number is lower";}
if(x+b<2   && x+b>1){cout<<"the number is a little higher";}
if(x-b>2   && x-b<1){cout<<"the number is a little lower";}
cout<<endl;
cout<<"enter 3rd guess  ";
int c;
cin>>c;
if(x==c){cout<<"you guessed the number";}
if(x>c){cout<<"the number is higher";}
if(x<c){cout<<"the number is lower";}
if(x+c<2   && x+c>1){cout<<"the number is a little higher";}
if(x-c>2   && x-c<1){cout<<"the number is a little lower";}
cout<<endl;
cout<<"enter 4th guess  ";
int d;
cin>>d;
if(x==d){cout<<"you guessed the number";}
if(x>d){cout<<"the number is higher";}
if(x<d){cout<<"the number is lower";}
if(x+d<2   && x+d>1){cout<<"the number is a little higher";}
if(x-d>2   && x-d<1){cout<<"the number is a little lower";}
cout<<endl;
cout<<"enter 5th guess  ";
int e;
cin>>e;
if(x==e){cout<<"you guessed the number";}
if(x>e){cout<<"the number is higher";}
if(x<e){cout<<"the number is lower";}
if(x+e<2   && x+e>1){cout<<"the number is a little higher";}
if(x-e>2   && x-e<1){cout<<"the number is a little lower";}
cout<<endl;
}
