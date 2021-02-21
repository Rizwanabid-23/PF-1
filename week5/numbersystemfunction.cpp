#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
using namespace std;
int total=0;
int count=0;
int fre;
int largest;
int num[10];
float average;
int fnumber;
int addNumber(int newnumber); 
int replacefunction(int repl);
float avgfunction();
void print();
int freq(int inp);
int large();
int odd;
int j=0;
int oddfunction();
int k=-100;
float finalavg;
float sum=0;
float result;
int check;
int store;
int idx;
int newnum;
int newNumber;
int Menu();
int main(){
    int option=0;
    while(option!=8){
	option=Menu();
	if(option==1){
    count=count+1;
    addNumber(newnum);
	   }
	if(option==2){
		print();
        }
	if(option==3){
    int fnum;
	cout<<"Enter Number to find ";
    cin>>fnum;
    int result=freq(fnum);
    cout<<"Frequency of number is "<<result<<endl;
    getch();			   
	}		 
	if(option==4){
	cout<<"Find and replace number"<<endl;
   	cout<<endl;
   	cout<<"Enter a number to find "<<endl;
   	cin>>fnumber;
   	int result=replacefunction(fnumber);	
	}	   	   
	if(option==5){
	finalavg=0;
	cout<<"Average of all numbers "<<endl;
    result= avgfunction();
	cout<<result<<endl;		    
	getch();
		}
   if(option==6){		   	
		int result=large();
    	cout<<"The largest number is "<<result<<endl;
		getch();
		   }   
	if(option==7){
	   	cout<<"Sum of all odd numbers"<<endl;
		oddfunction();   	
		getch();   	
		}   
	}       
}
     
int Menu(){
     	int moption=100;	 
	 	system("CLS");
         cout<<"****************************************"<<endl;
         cout<<"             NUMBER SYSTEM              "<<endl;
         cout<<"________________________________________"<<endl;
         cout<<endl;
         cout<<"1-Add number.."<<endl;
         cout<<"2-Print all numbers.."<<endl;
         cout<<"3-Find Frequency of a Number.."<<endl;
         cout<<"4-Find and replace the Number"<<endl;
         cout<<"5-Print the average of all numbers.."<<endl;
         cout<<"6-Print the largest Number.."<<endl;
         cout<<"7-Print Sum of all odd Numbers.."<<endl;
         cout<<"8-Exit"<<endl;
         cout<<"Enter option..";
         cin>>moption;	
	    return moption;
	}

int addNumber(int newnumber){ 	
	cout<<"Enter number to add = "; 	
	cin>>newnumber;  	
	num[total]=newnumber; 	
	total= total + 1;
	}
	 	   	  
void print(){	    
	for(int i=0;i < total;i++){
	    cout<<num[i]<<"   "<<endl;
			}
	getch();	
	}
  int freq(int inp){
 	fre=0;               
	for(int i=0;i<total;i++){          	
		if(inp==num[i]){
    	fre=fre+1;	
		}
	  } 
	int result=fre;	
    return result;
} 
int replacefunction(int repl){
	for(int i=0;i < total;i++){
 		if(repl==num[i]){
 			cout<<"Enter a new number "<<endl;
 			cin>>newNumber;
 			num[i]=newNumber;	
 		}
 	}
 }
int large(){
  	int i;
    for(i=0; i<total ;i++){
  		largest=num[i];    
		if(k<largest){
		    k=num[i];
		}
	}
	return k;
}    
float avgfunction(){  	
	for(int i=0; i<total ;i++){
  		store=num[i];
  		sum=sum+store;
  		average=sum;
  	} 
  	finalavg=average/count;
  	return finalavg;
  }
int oddfunction(){
	for(int i=1; i<total ;i++){
  		check=num[i]%2;
		j=j+check;
	}
	return j;
  }	 
