#include<iostream>

using namespace std;
int main(){
	
	const int size=3;
	char board[size][size]={
	{ 'X' , 'X' , 'O' },
	{ 'X' , 'X' , 'O' },
	{ 'O' , 'O' , 'X' },
	};
	
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




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

