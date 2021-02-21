#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
string S[10]; float M[10]; float F[10]; float E[10]; float agg[10];
int O;
int idx=0;
int i;float j;float l;
float largest=0;
float lowest=1000;
string name1;
string name2;
while(O!=5){

system("CLS");
cout<<"University management system"<<endl;
cout<<"1: Add new student  "<<endl;
cout<<"2: View all students  "<<endl;
cout<<"3: Name & merit of top student  "<<endl;
cout<<"4: Name and merit of bottom student  "<<endl;
cout<<"5: Exit "<<endl;
cout<<"Enter your option  "<<endl;cin>>O;
 if(O==1){ cout<<"Enter name of student  "; cin>>S[idx];
           cout<<"Enter marks obtained in matric "; cin>>M[idx];  
           cout<<"Enter marks obtained in fsc  ";cin>>F[idx];                             
           cout<<"Enter marks obtained in ECAT  "; cin>>E[idx]; 
           agg[idx]=(M[idx]/1100)*25+(F[idx]/1100)*45+(E[idx]/400)*30; 
            idx=idx+1;
       	}
 if(O==2){ cout<<"Following students are enrolled  "<<endl; 
              for(i=0;i<idx;i++){
			  	cout<<S[i]<<"\t"<<agg[i]<<endl;cout<<endl;
			    				 } 
		cout<<"press any key to continue";             
		getch();   }                                                    
 if(O==3){ cout<<"The top student is "<<endl;
           for(i=0;i<idx;i++) {
			if(agg[i]>largest){  largest=agg[i]; j=largest;
		        name1=S[i]; } 
		 }
    cout<<name1<<"\t"<<j<<endl;   
	cout<<"press any key to continue";                                    
	getch();    }
if(O==4){ cout<<"The last student is  "<<endl;
           for(i=0;i<idx;i++) {
		   	if(agg[i]<lowest){ lowest=agg[i]; l=lowest; 
		       name2=S[i];
		 } }
    cout<<name2<<"\t"<<l<<endl;
    cout<<"press any key to continue";                                         
	getch();                                                                                                                       }
	}
}
