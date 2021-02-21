#include <iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
int main(){
float M1;
float M2;
float M3;
float M4;
float M5;
float M6;
float M7;
float M8;
float M9;
int O;
string N;string N2;string N3;
while(O!=4){
cout<<" 1:Add new record "<<endl;
cout<<endl;
cout<<" 2:View all entered records "<<endl;
cout<<endl;
cout<<" 3:Show all records in descending order "<<endl;
cout<<endl;
cout<<" 4:Exit "<<endl;
cout<<endl;
cout<<"Enter your option  ";
cin>>O;
if(O==1){ 
           cout<<"enter student name "<<endl; cin>>N; 
           cout<<"Enter marks in matric  "; cin>>M1;  
           cout<<"Enter marks in FSc  "; cin>>M2;
           cout<<"Enter marks in ECAT  "; cin>>M3;  getch();

           cout<<"enter student 2 name "<<endl; cin>>N2;
           cout<<"Enter marks in matric  "; cin>>M4;
           cout<<"Enter marks in FSc  "; cin>>M5;
           cout<<"Enter marks in ECAT  "; cin>>M6; getch();
		   
	       cout<<"enter student 3 name "<<endl; cin>>N3; 
           cout<<"Enter marks in matric  "; cin>>M7;  
           cout<<"Enter marks in FSc  "; cin>>M8;
           cout<<"Enter marks in ECAT  "; cin>>M9; getch();  } 
		   
		    
                             float agg1=(( M1/1100)*25)+(( M2/1100)*45)+(( M3/400)*30);
                             float agg2=(( M4/1100)*25)+(( M5/1100)*45)+(( M6/400)*30);
                             float agg3=(( M7/1100)*25)+(( M8/1100)*45)+(( M9/400)*30);   


if(O==2){ system("CLS");
                             
cout<<"Following students exist in system"<<endl;
           cout<<"Name";cout<<"     ";cout<<"Matric";cout<<"      ";cout<<"inter";cout<<"      ";cout<<"ecat";cout<<"     ";cout<<"Merit"<<endl;                         
           cout<<N;cout<<"     ";cout<<M1;cout<<"     ";cout<<M2;cout<<"     ";cout<<M3;cout<<"      ";cout<<agg1<<endl; 
           cout<<N2;cout<<"      ";cout<<M4;cout<<"     ";cout<<M5;cout<<"     ";cout<<M6;cout<<"     ";cout<<agg2<<endl;
           cout<<N3;cout<<"      ";cout<<M7;cout<<"     ";cout<<M8;cout<<"     ";cout<<M9;cout<<"     ";cout<<agg3<<endl; }


 if(O==3)  { if(agg1>agg2 && agg1>agg3 && agg2>agg3 ){ cout<<N;cout<<"                  ";cout<<agg1<<endl;
                                                       cout<<N2;cout<<"                 ";cout<<agg2<<endl;
													   cout<<N3;cout<<"                 ";cout<<agg3<<endl;  }
	         if(agg1>agg2 && agg1>agg3 && agg3>agg2 ){ cout<<N;cout<<"                  ";cout<<agg1<<endl;       
			                                           cout<<N3;cout<<"                 ";cout<<agg3<<endl;
			                                           cout<<N2;cout<<"                 ";cout<<agg2<<endl;  }
			                                           
			 if(agg2>agg1 && agg2>agg3 && agg1>agg3 ){ cout<<N2;cout<<"                 ";cout<<agg2<<endl;
			                                           cout<<N;cout<<"                  ";cout<<agg1<<endl;
													   cout<<N3;cout<<"                 ";cout<<agg3<<endl; }
             if(agg2>agg1 && agg2>agg3 && agg3>agg1 ){ cout<<N2;cout<<"                 ";cout<<agg2<<endl;
			                                           cout<<N3;cout<<"                 ";cout<<agg3<<endl;
													   cout<<N; cout<<"                 ";cout<<agg1<<endl; }
													   
			 if(agg3>agg1 && agg3>agg2 && agg1>agg2){  cout<<N3;cout<<"                 ";cout<<agg3<<endl;   										   			 
			                                           cout<<N;cout<<"                 ";cout<<agg1<<endl;
													   cout<<N2;cout<<"                 ";cout<<agg2<<endl; }
			 if(agg3>agg1 && agg3>agg2 && agg2>agg1){  cout<<N3;cout<<"                 ";cout<<agg3<<endl;
			                                           cout<<N2;cout<<"                 ";cout<<agg2<<endl;
													   cout<<N;cout<<"                 ";cout<<agg1<<endl; }										   
													   
													   	                                                                 }
}

