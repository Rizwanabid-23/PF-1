#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<windows.h>

using namespace std;
void gotoxy( short x, short y );

int ghostx=5;
int ghosty=5;
int pmanx=10;
int pmany=10;
int leftLimit=0;
int rightLimit=20;
	int i=0;
	int j=0;
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
string ghostDirection="Right";
void movePacmanLeft();
void movePacmanRight();
void movePacmanUP();
void movePacmanDown();
void moveGhost();
void ShowMap();
int main(void) {
  system("cls");

	
  int x=2;
  bool gameRunning=true;
  //showing pacman 
  gotoxy(pmanx,pmany);
  cout<<"P";
	

 	for(i=0;i<=18;i++){
  		for(j=0;j<=32;j++){
		  
	    cout<<map[i][j];
  		}
  		cout<<endl;
	}
	

	
  while(gameRunning){			//ascii codee for escape
  	
    if(GetAsyncKeyState( VK_LEFT )){ //ascii LEFT arrow
       movePacmanLeft();
    }
    if(GetAsyncKeyState( VK_RIGHT )){ //ascii right arrow
       movePacmanRight();
    }

    if(GetAsyncKeyState( VK_UP )){ // up arrow key
       movePacmanUP();
    }
    if(GetAsyncKeyState( VK_DOWN)){ //down arrow key
       movePacmanDown();
    }
      if(GetAsyncKeyState( VK_ESCAPE) ){
        gameRunning=false;
      }

      moveGhost();
      Sleep(100);

  }
  
  
}
void movePacmanUP(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmany>1){ // this condition stop pacman to cross the boundaries.
    pmany=pmany-1;
  }
  
  gotoxy(pmanx,pmany);
  cout<<"P";
  
}
void movePacmanDown(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmany=pmany+1;
  gotoxy(pmanx,pmany);
  cout<<"P";

}

void movePacmanRight(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmanx=pmanx+1;
  gotoxy(pmanx,pmany);
  cout<<"P";


}
void movePacmanLeft(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmanx=pmanx-1;
  gotoxy(pmanx,pmany);
  cout<<"P";


}

void moveGhost(){
  
  gotoxy(ghostx,ghosty);
  cout<<" ";
  if(ghostDirection=="Right") {
     ghostx=ghostx+1;
     
  }
  if(ghostDirection=="Left"){
    ghostx=ghostx-1;
  }

  if(ghostx>=rightLimit) {
    ghostDirection="Left";
  }
  if(ghostx<=leftLimit){
    ghostDirection="Right";
  }
   gotoxy(ghostx,ghosty);
   cout<<"G";

}
void gotoxy( short x, short y )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD position = { x, y } ;
    SetConsoleCursorPosition( hStdout, position ) ;
}





