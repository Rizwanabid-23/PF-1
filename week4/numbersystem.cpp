#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	
	int O;
	int F;
	int A;
	int num[5];
	int i;
	int R, RF;
	int x;
	float y;
	int n;
	float k=0;
	float count=0;
	int newcount;
	float average;
	int idx=0;
	bool repeat=true;
	while(O!=8){
    cout<<"**Number System**"<<endl;
	 cout<<endl;
	 cout<<" 1:Enter new number "<<endl;
	 cout<<" 2:Print all numbers "<<endl;
	 cout<<" 3:Find frequency of a number "<<endl;
	 cout<<" 4:Find and replace number "<<endl;
	 cout<<" 5:Print average of all numbers "<<endl;
	 cout<<" 6:Print largest of numbers "<<endl;
	 cout<<" 7:Print sum of all odd numbers "<<endl;
	 cout<<" 8:Exit "<<endl;
	 cout<<"Enter your option  "<<endl; cin>>O;
	
	 if(O==1){   system("CLS");   
	           cout<<"Add a new number "<<endl; cin>>num[idx];idx=idx+1;    
                                count=count+1;
	          }		          
	 if(O==2){ 	 system("CLS");
	             cout<<"The numbers enrolled are "<<endl;
	              for( i=0; i<idx; i++){  
	           			cout<<num[i]<<endl; 
			    	}   
             }
	 if(O==3){ cout<<"Frequency "<<endl;
	           cout<<endl;
	           cout<<"Enter number to find "<<endl; cin>>F;  
			     int count2=0;
			  		      for( i=0; i<idx; i++){ if(F==num[i]) {  count2=count2+1; } } cout<<" The number is repeating "<<count2<<" times "<<endl;			                             
			}
	 if(O==4){ cout<<"Replacing a number "<<endl;              
	           cout<<"Enter a number to replace"<<endl; cin>>R;
	           cout<<"Enter a new number  "<<endl; cin>>num[idx];
	           for( i=0; i<idx; i++){ if(R==num[i]) { num[i]= num[idx];   }  }                                   
			  }		
	if(O==5){ cout<<"Average of all numbers "<<endl;
	       for( i=0; i<idx; i++) { k=num[i]+num[i];
	            average= k/count;  }
	          cout<<"The average of all numbers is "<< average<<endl;                
			}                                                                               
	if(O==6){ cout<<"print largest number";
                                                                      //to be completed;	
			}
}
}
