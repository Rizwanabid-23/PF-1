#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;
const int ruleSize=5;
const int historySize=5;
int counter=0;
int option;
int currentHistory=0;
string largerUnit[ruleSize];
string smallerUnit[ruleSize];
int currentRule[ruleSize];
string history[historySize];
int getUserOption();
void addConversionRule();
void convertValue();
bool isResultExist(string valueUnit,string convertingUnit);
float getMultiplier(float value, string valueUnit, string convertingUnit);
void addHistory(string message);
void viewAllRules();
void viewHistory();
void pressKey();
string getLogMessage(float value,string valueUnit,string conversionUnit,float newValue);
int main(){
	while(option!=5){
		system("CLS");
		option=getUserOption();
		if(option==1){
			addConversionRule();
			pressKey();	
		}
		if(option==2){
			viewAllRules();
			pressKey();	
		}
		if(option==3){
			convertValue();
			pressKey();	
		}
		if(option==4){
		    viewHistory();
			pressKey();	
		}
		if(option==5){
		return 0;
		}
	}	
}
int getUserOption(){
	cout<<"************************"<<endl;
	cout<<"    Unit Converter      "<<endl;
	cout<<"************************"<<endl;
	cout<<"1: Add conversion rule "<<endl;
	cout<<"2: Show all conversion rules "<<endl;
	cout<<"3: Convert the value "<<endl;
	cout<<"4: Show history "<<endl;
	cout<<"5: Exit"<<endl;
	cout<<"Enter your option "<<endl;
	cin>>option;
	return option;
}	
void addConversionRule(){
	cout<<"Add conversion rule "<<endl;
	cout<<"Enter a converting rule(value)  ";
	cin>>currentRule[counter];
	cout<<"Enter larger value  ";
	cin>>largerUnit[counter];
	cout<<"Enter smaller value  ";
	cin>>smallerUnit[counter];	
	counter=counter+1;
}
void viewAllRules(){
	cout<<"Following rules are entered: "<<endl;
	cout<<"Smaller"<<"\t"<<"Larger"<<"\t"<<"Multiplier"<<endl;
	for(int i=0; i<counter; i++){	
	cout<<smallerUnit[i]<<"\t"<<largerUnit[i]<<"\t"<<currentRule[i]<<endl;
    }
}
void convertValue(){
	cout<<"Converting the value"<<endl;
	int value;
	string valueUnit;
	string conversionUnit;
	cout<<"Enter a value to convert  ";
	cin>>value;
	cout<<"Enter given unit  ";
	cin>>valueUnit;
	cout<<"Enter required unit  ";
	cin>>conversionUnit;
	if(isResultExist(valueUnit,conversionUnit)){
		float multiplier=getMultiplier(value,valueUnit,conversionUnit);
		    cout<<multiplier<<endl;		    
		} else{
		 cout<<"The rule does not exist."<<endl;
	}
}
bool isResultExist(string valueUnit,string conversionUnit){
	for(int i=0; i<counter; i++){		
		 if( (valueUnit==smallerUnit[i] && conversionUnit==largerUnit[i]) || ( valueUnit==largerUnit[i] && conversionUnit==smallerUnit[i]) ){
				return true;
		}
	}
	return false;
}
float getMultiplier(float value,string valueUnit, string conversionUnit){
		float newValue;
		for(int i=0; i<counter;i++){
			if(valueUnit==smallerUnit[i] && conversionUnit==largerUnit[i]){
				newValue=value/currentRule[i];}
		else if(valueUnit==largerUnit[i] && conversionUnit==smallerUnit[i]){			
			newValue=value*currentRule[i];
		}
	}
	string message=getLogMessage(value,valueUnit,conversionUnit,newValue);
	addHistory( message);
return newValue;
}
void addHistory(string message){
	history[counter]=message;
	counter=counter+1;	
}
void viewHistory(){
	for(int index=0;index<=historySize;index++){
	cout<<history[index]<<endl;	
}	
}
string getLogMessage(float value,string valueUnit,string conversionUnit,float newValue){	
	string message=to_string(value)+" "+valueUnit+" "+"is converted into"+" "+to_string(newValue)+" "+conversionUnit;
	return message;
}
void pressKey(){
	cout<<"Press any key to continue...";
	getch();
}
