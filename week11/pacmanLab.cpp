#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int px; int py;
int ghostx; int ghosty;
int ghost2x; int ghost2y;
int score=0;
bool gameRunning=true;
void showMap();
void gotoxy( short x, short y );
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
void moveGhost();
void moveGhost2();
char map[18][50] = {
	"+_______________________________________________+",
	"|      | .............##      ..####.....|..... |",
	"| ..........|...............   ..........|......|",
	"|## ###########.  ####  ####..####.......|......|",
	"|   |.............. ...  .    ...........|..... |",
	"| | |###    ....# . ...|. ...............####.. |",
	"| |     ....    ###. |   |.|   ............|....|",
	"| | #####| .. |   .  ## |. |  .....##......|... |",
	"| |............#### |..... |   ............|....|",
	"| |##### ###  .....  ##  .    .............|... |",
	"|  ............... ####### ####............|....|",
	"|.......................................####....|",
	"|# ### #  # .    ###  # .######.................|",
	"| .............|............   ####......##.....|",
	"| ............... .#### ....   .................|",
	"|####.......... |  |     ....   ........####....|",
	"|   ....  |.......|.........   ####.............|",
	"+-----------------------------------------------+"
	};	
int main(void){
	system("cls");	
	showMap();
  	px=3;py=2;				//px is column , py is row
	ghostx=48; ghosty=16;
	ghost2x=40; ghost2y=5;
	gotoxy(px,py);
	map[px][py]='P';
	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='G';
	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='G';		
while(gameRunning){
	gotoxy(50,6);
	cout<<"Score :";
	cout<<score<<endl;	
	Sleep(50);
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
	if(GetAsyncKeyState( VK_ESCAPE) ){
		gameRunning=false;
      }	
	moveGhost();
   	moveGhost2();
}	
}

void showMap(){
 	for(int i=0;i<18;i++)
	 {
  		for(int j=0;j<50;j++)
		{
	    cout<<map[i][j];
  		 
		  }
  	 cout<<endl;	
	 }
}

void movePacmanLeft(){
	if(map[py][px-1] ==' ' || map[py][px-1] =='.' )
	{
		if(map[py][px-1]=='.'){
			score++;
		}		
	gotoxy(px,py);
	map[px][py]=' ';
	cout<<" ";
	px=px-1;
	gotoxy(px,py);
	cout<<"P";
	map[px][py]='P';
	}
}

void movePacmanRight(){	
  if(map[py] [px+1] ==' ' || map[py] [px+1] =='.' ){			
	if(map[py][px+1]=='.'){
			score++;
		} 		
	gotoxy(px,py);
	map[px][py]=' ';
	cout<<" ";
	px=px+1;
	gotoxy(px,py);
	cout<<"P";
	map[px][py]='P';
	}
}

void movePacmanDown(){  
  	if(map[py+1] [px] ==' ' || map[py+1] [px] =='.' ){
  		if(map[py+1][px]=='.'){
			score++;
			} 		
  gotoxy(px,py);
  cout<<" ";
  map[px][py]=' ';
  py=py+1;
  gotoxy(px,py);
  cout<<"P";
	}  
}
void movePacmanUp(){	
  if(map[py-1] [px] ==' ' || map[py-1] [px] =='.' ){
  
  	if(map[py-1][px]=='.'){
		score++;
		} 
	gotoxy(px,py);	
	map[px][py]=' ';
	cout<<" ";
	py=py-1;
	gotoxy(px,py);
	cout<<"P";
	}		
}

void gotoxy( short x, short y )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD position = { x, y } ;
    SetConsoleCursorPosition( hStdout, position ) ;
}

void moveGhost(){
  gotoxy(ghostx,ghosty);
  cout<<" ";
  map[ghostx][ghosty]=' ';
  
  if(px>ghostx){
  	if(map[ghosty][ghostx+1]!='#' && map[ghosty][ghostx+1]!='-' && map[ghosty][ghostx+1]!='_' && map[ghosty][ghostx+1]!='|'){
	  
  	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='.';
	cout<<".";
	ghostx++;
  		}
	}	
  if(py>ghosty){
  	if(map[ghosty+1][ghostx]!='#' && map[ghosty+1][ghostx]!='-' && map[ghosty+1][ghostx]!='_' && map[ghosty+1][ghostx]!='|'){
  	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='.';
	cout<<".";
	ghosty++;
  		}
	}  
  if(px<ghostx){
  	if(map[ghosty][ghostx-1]!='#' && map[ghosty][ghostx-1]!='-' && map[ghosty][ghostx-1]!='_' && map[ghosty][ghostx-1]!='|'){
  	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='.';
	cout<<".";
	ghostx--;
  		}
	}
  if(py<ghosty){
   	if(map[ghosty-1][ghostx]!='#' && map[ghosty-1][ghostx]!='-' && map[ghosty-1][ghostx]!='_' && map[ghosty-1][ghostx]!='|'){
  	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='.';
	cout<<".";
	ghosty--;
  		}
	}
	gotoxy(ghostx,ghosty);
	map[ghostx][ghosty]='G';
	cout<<"G"<<endl;

	if(px==ghostx && py==ghosty){
		system("cls");
		gotoxy(40,4);
		cout<<"Game Over!"<<endl;
		cout<<endl;
		cout<<"The score was: ";
		cout<<score<<endl;
	
		gameRunning=false;
		getch();
	}
}

void moveGhost2(){
  Sleep(110);
  gotoxy(ghost2x,ghost2y);
  cout<<" ";
  map[ghost2x][ghost2y]=' ';
  
  if(px>ghost2x){
  	if(map[ghost2y][ghost2x+1]!='#' && map[ghost2y][ghost2x+1]!='-' && map[ghost2y][ghost2x+1]!='_' && map[ghost2y][ghost2x+1]!='|'){	  
  	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='.';
	cout<<".";
	ghost2x++;
  		}
	}	
  if(py>ghost2y){
  	if(map[ghost2y+1][ghost2x]!='#' && map[ghost2y+1][ghost2x]!='-' && map[ghost2y+1][ghost2x]!='_' && map[ghost2y+1][ghost2x]!='|'){
  	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='.';
	cout<<".";
	ghost2y++;
  		}
	}
  if(px<ghost2x){
  	if(map[ghost2y][ghost2x-1]!='#' && map[ghost2y][ghost2x-1]!='-' && map[ghost2y][ghost2x-1]!='_'  && map[ghost2y][ghost2x-1]!='|'){
  	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='.';
	cout<<".";
	ghost2x--;
  		}
	}	
  if(py<ghost2y){
   	if(map[ghost2y-1][ghost2x]!='#' && map[ghost2y-1][ghost2x]!='-' && map[ghost2y-1][ghost2x]!='_' && map[ghost2y-1][ghost2x]!='|'){
  	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='.';
	cout<<".";
	ghost2y--;
  		}
	}
	gotoxy(ghost2x,ghost2y);
	map[ghost2x][ghost2y]='G';
	cout<<"G"<<endl;
	if(px==ghost2x && py==ghost2y){
		system("cls");
		gotoxy(40,4);
		cout<<"Game Over!"<<endl;
		cout<<endl;
		cout<<"The score was: ";
		cout<<score<<endl;		
		gameRunning=false;
		getch();
	}
}
