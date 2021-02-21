#include<iostream>
#include<fstream>
using namespace std;
string Aname;
string first;
string second;
string third;
int value=0;
int value1=0;
int elephantcount1=0;
int tigercount1=0;
int foxcount1=0;
int kangaroocount1=0;
int deercount1=0;
int lioncount1=0;
string firstAnimal(string name);
string secondAnimal(string name);
string thirdAnimal(string name);
void firstFunction(string name,string behav);

int main(){	
	fstream task2;
	task2.open("task1.txt",ios::in);
	while( getline(task2,Aname) ){
	first=firstAnimal(Aname);
	second=secondAnimal(Aname);
	third=thirdAnimal(Aname);
//	cout<<first<<endl;
//	cout<<second<<endl;
//	cout<<third<<endl;
	firstFunction(first,second);	
	}
	int a=elephantcount1;
	int b=foxcount1;
	int c=deercount1;
	int d=lioncount1;
	int e=kangaroocount1;
	int f=tigercount1;
	if(a>b && a>c && a>d && a>e && a> f){
		cout<<"Elephant"<<endl;
	} 
	else if(b>a && b>c && b>d && b>e && b>f){
		cout<<"Fox"<<endl;
	}
	else if(c>a && c>b && c>d && c>e && c>f){
		cout<<"Deer"<<endl;
	}
	else if(d>a && d>b && d>c && d>e && d>f){
		cout<<"Lion"<<endl;
	}
	else if(e>a && e>b && e>c && e>d && e>f){
		cout<<"Kangaroo"<<endl;
	}
	else if(f>a && f>b && f>c && f>d && f>e){
		cout<<"Tiger"<<endl;
	}
}

string firstAnimal(string name){
string firstName="";
int space=0;
int idx=0;
value=0;
	while(space<1){
		if(name[idx]==' '){
			space++;
		}
		else{
			firstName=firstName+name[idx];
		}		
		idx++;
	}
	value=idx;
return firstName;
}

string secondAnimal(string name){
    string secondName;
    int idx=value;
    int space=1;
    while(space<2){
		if(name[idx]==' '){
			space++;
		}
		else if(space==1){
			secondName=secondName+name[idx];
		}
        idx++;
    }
    value1=idx;
return secondName;
}

string thirdAnimal(string name){

    string thirdName;
    int idx=value1;
    int space=2;
    while(space<3 && idx<=name.length()){
		if(name[idx]==' '){
			space++;
		}
		else if(space==2){
			thirdName=thirdName+name[idx];
		}
        idx++;
    }
return thirdName;
}

void firstFunction(string name,string behav){
	if(behav=="plays"){
		if(name=="elephant"){
			elephantcount1++;
		}
		else if(name=="fox"){
			foxcount1++;
		}
		else if(name=="deer"){
			deercount1++;
		}
		else if(name=="lion"){
			lioncount1++;
		}
		else if(name=="kangaroo"){
			kangaroocount1++;
		}
		else if(name=="tiger"){
			tigercount1++;
		}	
}
}
