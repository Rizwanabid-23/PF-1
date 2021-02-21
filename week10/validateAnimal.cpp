#include<iostream>
#include<fstream>
using namespace std;
string animals[7]={"lion","tiger","elephant","deer","fox","horse","kangaroo"};
string Aname;
bool Sexists;
bool Fexists;
string firstAnimal(string name);
string secondAnimal(string name);
bool animalExists(string animal);
bool compare(bool F,bool S);

int main(){
fstream task1;
string first;
string second;
task1.open("task1.txt",ios::in);
while( getline(task1,Aname) ){
 first=firstAnimal(Aname);
 second=secondAnimal(Aname);
//cout<<first<<endl;
//cout<<second<<endl;
 Fexists=animalExists(first);
 Sexists=animalExists(second);
  
 //cout<<Fexists<<endl;
 //cout<<Sexists<<endl;
 bool A=compare(Fexists,Sexists);
 	cout<<A<<endl;
	if(A){
		cout<<"Valid"<<endl;
	}
}
task1.close();
}

string firstAnimal(string name){
    string firstName;
	int space=0;
	int idx=0;
	while(space<1){
		if(name[idx]==' '){
			space++;
		}
		else{
			firstName=firstName+name[idx];
		}		
		idx++;
	}
return firstName;
}

string secondAnimal(string name){
    string secondName;
    int idx=0;
    int space=0;
    while( space<3 && idx<=name.length() ){
		if(name[idx]==' '){
			space++;
		}
		else if(space==2){
			secondName=secondName+name[idx];
		}
        idx++;
    }
return secondName;
}

bool animalExists(string animal){
	for(int i=0;i<7;i++){
		cout<<animals[i]<<endl;
		if(animals[i]==animal){
			return true;
		}
	}
	return false;
}

bool compare(bool F,bool S){
	if(F && S){
    	return true;
	}
	return false;
}
