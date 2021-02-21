#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<windows.h>

using namespace std;

int px=10;
int py=10;

void showMap();
void gotoxy( short x, short y );
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();

 char map[18][32] = {
	"+#############################+",
	"|                             |",
	"|                             |",
	"|## ########### ##   #########|",
	"|   |                         |",
	"| | |### |  |           |     |",
	"| |      |  | |###  |   |  |  |",
	"| | #####|  | |      ## |     |",
	"| |           |###  |      |  |",
	"| |##### ###         ##       |",
	"|          ######  ####### ###|",
	"|                             |",
	"|# ### ####      ###   #######|",
	"|                             |",
	"|                             |",
	"|                             |",
	"|                             |",
	"+#############################+"
	};

int main(void){
	system("cls");
	map[px][py]='P';
	showMap();
	
while(true){

 if(map[px][py]=='#'){
 	
	gotoxy(px,py);
	cout<<" ";
	map[px][py]='P';
	}

else{


    if(GetAsyncKeyState( VK_LEFT )){ 
       movePacmanLeft();	
	}
	if(GetAsyncKeyState(VK_RIGHT)){
		movePacmanRight();
	}
	if(GetAsyncKeyState(VK_UP)){
		movePacmanUp();
	}
	if(GetAsyncKeyState(VK_DOWN)){
		movePacmanDown();
	}

	Sleep(500); //only added this line
	
}
		
}
	
}


void showMap(){
	
 	for(int i=0;i<18;i++){
  		for(int j=0;j<32;j++){
		  
	    cout<<map[i][j];
  		}
  		cout<<endl;
	}
	
}

void movePacmanLeft(){

	gotoxy(px,py);
	cout<<" ";
	map[px][py]=' ';
	px=px-1;
	gotoxy(px,py);
	map[px][py]='P';
	cout<<"P";

}


void movePacmanRight(){
	gotoxy(px,py);
	map[px][py]=' ';
	px=px+1;
	cout<<' ';
	gotoxy(px,py);
	map[px][py]='P';
	gotoxy(px,py);
	cout<<"P";
}

void movePacmanDown(){
	gotoxy(px,py);
	cout<<' ';
	map[px][py]=' ';
	
	py=py+1;

	map[px][py]='P';
	gotoxy(px,py);
	cout<<"P";
	
}

void movePacmanUp(){
	
	map[px][py]=' ';
	gotoxy(px,py);
	cout<<" ";
	
	py=py-1;
	
	map[px][py]='P';
	gotoxy(px,py);
	cout<<"P";
	
	
}

void gotoxy( short x, short y )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD position = { x, y } ;
    SetConsoleCursorPosition( hStdout, position ) ;
}
