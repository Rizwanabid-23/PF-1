#include<iostream>
using namespace std;
int main(){
cout<<"decision making";
cout<<endl;
string W;
cout<<"is it rainy, cooldry or hotdry?";
cout<<endl;cout<<endl;
string R="rainy";
string C="cooldry";
string H="hotdry";
cin>>W;
if(W==R){cout<<"take bus";}
cout<<endl;
cout<<endl;
if(W==C){cout<<"how much time left?";}
float time1;
cin>>time1;
if(time1<20){cout<<"take bus";}
if(time1>=20){cout<<"how many books I have?";}
float B;
cin>>B;
if(B<=4){cout<<"walk";}
if(B>4){cout<<"take bus";}
else{
if(W==H){cout<<"how much time left?";}
float time2;
cin>>time2;
if(time2<30){cout<<"take bus";}
if(time2>=30){cout<<"how many books i have?";}
float BO;
cin>>BO;
if(BO<=2){cout<<"walk";}
if(BO>2){cout<<"take bus";}
}
}
