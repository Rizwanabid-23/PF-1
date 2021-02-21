#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
cout<<"University management system"<<endl;
int O;
string N, N2, N3;
float M1=0, M2=0 ,M3=0;
float F1, F2, F3;
float E1, E2, E3;
int total=0;
float merit1, merit2, merit3;
while(O!=4){ 
system("CLS");
cout<<" 1:Enter new record "<<endl;
cout<<" 2:View previous record"<<endl;
cout<<" 3:View result in ascending order"<<endl;
cout<<" 4:Exit "<<endl;
cout<<endl;
cout<<"Enter your option"<<endl;
cin>>O;
if(O==1){  
         if(total==0){
           cout<<"Enter name"<<endl; cin>>N;
           cout<<"Enter matric marks"<<endl; cin>>M1;
           cout<<"Enter fsc marks"<<endl; cin>>F1;
           cout<<"Enter Ecat marks"<<endl; cin>>E1;  total=total+1; system("CLS");   
                           merit1=((M1/1100)*25)+((F1/1100)*45)+((E1/400)*30);}
         else if(total==1){
           cout<<"Enter name"<<endl; cin>>N2;
           cout<<"Enter matric marks"<<endl; cin>>M2;
           cout<<"Enter fsc marks"<<endl; cin>>F2;
           cout<<"Enter Ecat marks"<<endl; cin>>E2; total=(total+1); system("CLS");
                         merit2=((M2/1100)*25)+((F2/1100)*45)+((E2/400)*30); }
        else if(total==2){
           cout<<"Enter name"<<endl; cin>>N3;
           cout<<"Enter matric marks"<<endl; cin>>M3;
           cout<<"Enter fsc marks"<<endl; cin>>F3;
           cout<<"Enter Ecat marks"<<endl; cin>>E3; total=total+1;  system("CLS");
                       merit3=((M3/1100)*25)+((F3/1100)*45)+((E3/400)*30);}
         if(total==3){total==0;}
                     }
if(O==2){ cout<<"NAME\t"<<"MATRIC\t"<<"FSC\t"<<"ECAT\t"<<"MERIT"<<"\t"<<endl;
         if(M1>0){ cout<<N <<"\t"<<M1<<"\t"<<F1<<"\t"<<E1<<"\t"<<merit1<<"\t"<<endl;}
         if(M2>0){ cout<<N2<<"\t"<<M2<<"\t"<<F2<<"\t"<<E2<<"\t"<<merit2<<"\t"<<endl;}        
         if(M3>0){ cout<<N3<<"\t"<<M3<<"\t"<<F3<<"\t"<<E3<<"\t"<<merit3<<"\t"<<endl;}
          cout<<"press any key to continue..."<<endl; getch();
        }
if(O==3){ 
           if(merit1>merit2 && merit1>merit3 && merit2>merit3){cout<<N <<"\t"<<merit1<<endl;
                                                               cout<<N2<<"\t"<<merit2<<endl;
                                                               cout<<N3<<"\t"<<merit3<<endl; }
          if(merit1>merit2 && merit1>merit3 && merit3>merit2){cout<<N <<"\t"<<merit1<<endl;
                                                              cout<<N3<<"\t"<<merit3<<endl;
                                                              cout<<N2<<"\t"<<merit2<<endl; } 
          if(merit2>merit3 && merit2>merit1 && merit1>merit3){cout<<N2<<"\t"<<merit2<<endl;
                                                              cout<<N <<"\t"<<merit1<<endl;
                                                              cout<<N3<<"\t"<<merit3<<endl; }
          if(merit2>merit3 && merit2>merit1 && merit3>merit1){cout<<N2<<"\t"<<merit2<<endl;
                                                              cout<<N3<<"\t"<<merit3<<endl;
                                                              cout<<N <<"\t"<<merit1<<endl; }
          if(merit3>merit1 && merit3>merit2 && merit1>merit2){cout<<N3<<"\t"<<merit3<<endl;
                                                              cout<<N <<"\t"<<merit1<<endl;
                                                              cout<<N2<<"\t"<<merit2<<endl; }
          if(merit3>merit1 && merit3>merit2 && merit2>merit1){cout<<N3<<"\t"<<merit3<<endl;
                                                              cout<<N2<<"\t"<<merit2<<endl;
                                                              cout<<N <<"\t"<<merit1<<endl; }  
               getch();   }
                   }
}
