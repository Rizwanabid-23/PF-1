#include<iostream>
#include<conio.h>
using namespace std;
	const int size=3;
	char board[size][size]={
	{ ' ' , ' ' , ' ' },
	{ ' ' , ' ' , ' ' },
	{ ' ' , ' ' , ' ' },
	
	};
string A;
string B;
int counter=0;
void players();
string takeInput1();
string takeInput2();
void putOption1(string p);
void putOption2(string q);
void result();
int main(){
	while(counter<5){
	int z=0;
	system("CLS");
	players();
	string x=takeInput1();
	string o=takeInput2();
	putOption1(x);
	putOption2(o);
	cout<<endl;
	for(int t=0;t<size;t++){
	cout<<board[z][t]<<"|";
	}
	cout<<endl;
	for(int t=0;t<size;t++){
	cout<<board[z+1][t]<<"|";
	}
	cout<<endl;
	for(int t=0;t<size;t++){
	cout<<board[z+2][t]<<"|";
	}
	cout<<endl;
	z++;
	cout<<endl;
	cout<<endl;
	cout<<"Prss any key to continue..."<<endl;
	getch();
	counter++;
	}
	if(counter==5){
		result();
	}	
}
void players(){
	
	cout<<" Player 1 has X"<<endl;
	cout<<" Player 2 has O"<<endl;
	cout<<endl;
	
	cout<<"  |a | b | c|"<<endl;
	cout<<"  |d | e | f|"<<endl;
	cout<<"  |g | h | i|"<<endl;
}	
string takeInput1(){
	cout<<"Player 1 enter your position"<<endl;
	cin>>A;
	return A;
}	

string takeInput2(){
	cout<<"Player 2 enter your postion"<<endl;
	cin>>B;
	return B;
}		
void putOption1(string p){
	if(p=="a"){
		board[0][0]='X';
	}
	if(p=="b"){
		board[0][1]='X';
	}	
	if(p=="c"){
		board[0][2]='X';
	}
	if(p=="d"){
		board[1][0]='X';
	}	
	if(p=="e"){
		board[1][1]='X';
	}
	if(p=="f"){
		board[1][2]='X';
	}
	if(p=="g"){
		board[2][0]='X';
	}
	if(p=="h"){
		board[2][1]='X';
	}
	if(p=="i"){
		board[2][2]='X';
	}
}
void putOption2(string q){
	if(q=="a"){
		board[0][0]='O';
	}
	if(q=="b"){
		board[0][1]='O';
	}
	if(q=="c"){
		board[0][2]='O';
	}	
	if(q=="d"){
		board[1][0]='O';
	}
	if(q=="e"){
		board[1][1]='O';
	}	
	if(q=="f"){
		board[1][2]='O';
	}	
	if(q=="g"){
		board[2][0]='O';
	}
	if(q=="h"){
		board[2][1]='O';
	}
	if(q=="i"){
		board[2][2]='O';
	}	
}
void result(){	
	for(int i=0;i<size;i++){
		if( board[i][0]==board[i][1] && board[i][1]==board[i][2] ){
			if(board[i][0]=='X'){
				cout<<" X is winner";
			}
			else if(board[i][0]=='O'){
				cout<<" O is winner";
			}
		}
	}
	for(int i=0;i<size;i++){
		if( board[0][i]==board[1][i] && board[1][i]==board[2][i] ){
			if(board[0][i]=='X'){
				cout<<" X is winner";
			}
			else if(board[0][i]=='O'){
				cout<<" O is winner";
			}
		}	
	}
		if( board[0][2]==board[1][1] && board[1][1]==board[2][0] ){
			if(board[0][2]=='X'){
				cout<<" X is winner";
			}
			else if(board[0][2]=='O'){
				cout<<" O is winner";
			}
		}		
		if( board[0][0]==board[1][1] && board[1][1]==board[2][2] ){
			if(board[1][1]=='X'){
				cout<<" X is winner";
			}
			else if(board[1][1]=='O'){
				cout<<" O is winner";
			}
		}	
}
