#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;
void gotoxy( short x, short y );
void looad_board();
void display_board();
void starting_display();
int points=0;
const int size_x=106;
const int size_y=28;
char maze [size_x] [ size_y]={};
int ghostx=5;
int ghosty=10;
int ghostx2=100;
int ghosty2=10;
int ghostx3=60;
int ghosty3=20;
int ghostx4=35;
int ghosty4=10;
int pmanx=55;
int pmany=15;
int leftLimit=0;
int rightLimit=106;
int UPLIMIT=0;
int DOWNLIMIT=28;
bool condition=false;
string ghostDirection="Right";
void movePacmanLeft();
void movePacmanRight();
void movePacmanUP();
void movePacmanDown();
void moveGhost();
void points_calculator( );
int main(void) 
{
  system("cls");
  starting_display();
  system("cls");
  looad_board();
  display_board();
  
  int x=2;
  int key=4000;
  bool gameRunning=true;
  //showing pacman 
  gotoxy(pmanx,pmany);
  cout<<"P";
  gotoxy(10,30);
  cout<<"PRESS ANY KEY TO CONTINUE...........";
  getch();
  system("CLS");
  display_board();
  while(gameRunning){//ascii codee for escape
    if(condition==true)
    {
    system("CLS");
    gotoxy(10,5);
    cout<<"GAME OVER"<<endl;
    cout<<"YOUR POINTS ARE="<<points<<endl;
    cout<<"PRESS ANY KEY TO STRAT THE GAME..............";
    getch(); 
    break;
    }
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
      Sleep(96);
         
  }

  
}
void movePacmanUP(){
   if(maze [pmanx] [pmany-1]!='%' && maze [pmanx] [pmany-1]!='@'  && maze [pmanx] [pmany-1]!='|'   && maze [pmanx] [pmany-1]!='_'  && maze [pmanx] [pmany-1]!='#'  && maze [pmanx] [pmany-1]!='^')
  {
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmany>1){ // this condition stop pacman to cross the boundaries.
  if(maze [pmanx] [pmany-1]=='.')
  {points=points+1;points_calculator();}  
    pmany=pmany-1;
  }
  gotoxy(pmanx,pmany);
  cout<<"P";
  }
}
void movePacmanDown(){
   if(maze [pmanx] [pmany+1]!='%' && maze [pmanx] [pmany+1]!='@'  && maze [pmanx] [pmany+1]!='|'   && maze [pmanx] [pmany+1]!='_'    && maze [pmanx] [pmany+1]!='#' && maze [pmanx] [pmany+1]!='^')
  {
  if(maze [pmanx] [pmany+1]=='.')
  {points=points+1;}    
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmany=pmany+1;
  gotoxy(pmanx,pmany);
  cout<<"P";
  }
}

void movePacmanRight(){
  if(maze [pmanx+1] [pmany]!='%' && maze [pmanx+1] [pmany]!='@'  && maze [pmanx+1] [pmany]!='|'   && maze [pmanx+1] [pmany]!='_'  && maze [pmanx+1] [pmany]!='#'  && maze [pmanx+1] [pmany]!='^') 
  {
  if(maze [pmanx+1] [pmany]=='.')
  {points=points+1;points_calculator();}    
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmanx=pmanx+1;
  gotoxy(pmanx,pmany);
  cout<<"P";
  }   
  
}
void movePacmanLeft(){
   if(maze [pmanx-1] [pmany]!='%' && maze [pmanx-1] [pmany]!='@'  && maze [pmanx-1] [pmany]!='|'   && maze [pmanx-1] [pmany]!='_'     && maze [pmanx-1] [pmany]!='#'  && maze [pmanx-1] [pmany]!='^')
  {
  if(maze [pmanx-1] [pmany]=='.')
  {points=points+1;points_calculator();}    
  gotoxy(pmanx,pmany);
  cout<<" ";
  pmanx=pmanx-1;
  gotoxy(pmanx,pmany);
  cout<<"P";
  }
  

}

void moveGhost(){
  gotoxy(ghostx,ghosty);
  cout<<" ";
  if(ghostx<pmanx && maze [ghostx] [ghosty] !='@' && maze [ghostx] [ghosty] !='^' && maze [ghostx] [ghosty] !='%' && maze [ghostx] [ghosty] !='|' && maze [ghostx] [ghosty] !='_' && maze [ghostx] [ghosty] !='#')
  {
    if(maze [ghostx+1] [ghosty]  !='@' && maze [ghostx+1] [ghosty] !='^' && maze [ghostx+1] [ghosty] !='%' && maze [ghostx+1] [ghosty] !='|' && maze [ghostx+1] [ghosty] !='_' && maze [ghostx+1] [ghosty] !='#')
    {
    ghostx=ghostx+1;
    }
  }

  if(ghosty<pmany && maze [ghostx] [ghosty+1] !='@' && maze [ghostx] [ghosty+1] !='^' && maze [ghostx] [ghosty+1] !='%' && maze [ghostx] [ghosty+1] !='|' && maze [ghostx] [ghosty+1] !='_' && maze [ghostx] [ghosty+1] !='#')
  {ghosty=ghosty+1;}
  gotoxy(ghostx,ghosty);
  cout<<"G";
  gotoxy(ghostx,ghosty);
  cout<<" ";
  if(ghostx>pmanx && maze [ghostx-1] [ghosty] !='@' && maze [ghostx-1] [ghosty] !='^' && maze [ghostx-1] [ghosty] !='%' && maze [ghostx-1] [ghosty] !='|' && maze [ghostx-1] [ghosty] !='_' && maze [ghostx-1] [ghosty] !='#')
  {ghostx=ghostx-1;}
  if(ghosty>pmany && maze [ghostx] [ghosty-1] !='@' && maze [ghostx] [ghosty-1] !='^' && maze [ghostx] [ghosty-1] !='%' && maze [ghostx] [ghosty-1] !='|' && maze [ghostx] [ghosty-1] !='_' && maze [ghostx] [ghosty-1] !='#')
  {ghosty=ghosty-1;}
  if(maze [ghostx] [ghosty] !='@' && maze [ghostx] [ghosty] !='^' && maze [ghostx] [ghosty] !='%' && maze [ghostx] [ghosty] !='|' && maze [ghostx] [ghosty] !='_' && maze [ghostx] [ghosty] !='#')
  {
  gotoxy(ghostx,ghosty);
  cout<<"G";
  }   
  gotoxy(ghostx,ghosty);
  cout<<"G";
  if(ghostx==pmanx && ghosty==pmany)
  {condition=true;}
  
  
 
 
  gotoxy(ghostx2,ghosty2);
  cout<<" ";
  if(ghostx2<pmanx && maze [ghostx2] [ghosty2] !='@' && maze [ghostx2] [ghosty2] !='^' && maze [ghostx2] [ghosty2] !='%' && maze [ghostx2] [ghosty2] !='|' && maze [ghostx2] [ghosty2] !='_' && maze [ghostx2] [ghosty2] !='#')
  {
    if(maze [ghostx2+1] [ghosty2]  !='@' && maze [ghostx2+1] [ghosty2] !='^' && maze [ghostx2+1] [ghosty2] !='%' && maze [ghostx2+1] [ghosty2] !='|' && maze [ghostx2+1] [ghosty2] !='_' && maze [ghostx2+1] [ghosty2] !='#')
    {
    ghostx2=ghostx2+1;
    }
  }

  if(ghosty2<pmany && maze [ghostx2] [ghosty2+1] !='@' && maze [ghostx2] [ghosty2+1] !='^' && maze [ghostx2] [ghosty2+1] !='%' && maze [ghostx2] [ghosty2+1] !='|' && maze [ghostx2] [ghosty2+1] !='_' && maze [ghostx2] [ghosty2+1] !='#')
  {ghosty2=ghosty2+1;}
  gotoxy(ghostx2,ghosty2);
  cout<<"G";
  gotoxy(ghostx2,ghosty2);
  cout<<" ";
  if(ghostx2>pmanx && maze [ghostx2-1] [ghosty2] !='@' && maze [ghostx2-1] [ghosty2] !='^' && maze [ghostx2-1] [ghosty2] !='%' && maze [ghostx2-1] [ghosty2] !='|' && maze [ghostx2-1] [ghosty2] !='_' && maze [ghostx2-1] [ghosty2] !='#')
  {ghostx2=ghostx2-1;}
  if(ghosty2>pmany && maze [ghostx2] [ghosty2-1] !='@' && maze [ghostx2] [ghosty2-1] !='^' && maze [ghostx2] [ghosty2-1] !='%' && maze [ghostx2] [ghosty2-1] !='|' && maze [ghostx2] [ghosty2-1] !='_' && maze [ghostx2] [ghosty2-1] !='#')
  {ghosty2=ghosty2-1;}
  if(maze [ghostx2] [ghosty2] !='@' && maze [ghostx2] [ghosty2] !='^' && maze [ghostx2] [ghosty2] !='%' && maze [ghostx2] [ghosty2] !='|' && maze [ghostx2] [ghosty2] !='_' && maze [ghostx2] [ghosty2] !='#')
  {
  gotoxy(ghostx2,ghosty2);
  cout<<"G";
  }   
  gotoxy(ghostx2,ghosty2);
  cout<<"G";
  if(ghostx2==pmanx && ghosty2==pmany)
  {condition=true;}
  
 
     gotoxy(ghostx3,ghosty3);
  cout<<" ";
  if(ghostx3<pmanx && maze [ghostx3] [ghosty3] !='@' && maze [ghostx3] [ghosty3] !='^' && maze [ghostx3] [ghosty3] !='%' && maze [ghostx3] [ghosty3] !='|' && maze [ghostx3] [ghosty3] !='_' && maze [ghostx3] [ghosty3] !='#')
  {
    if(maze [ghostx3+1] [ghosty3]  !='@' && maze [ghostx3+1] [ghosty3] !='^' && maze [ghostx3+1] [ghosty3] !='%' && maze [ghostx3+1] [ghosty3] !='|' && maze [ghostx3+1] [ghosty3] !='_' && maze [ghostx3+1] [ghosty3] !='#')
    {
    ghostx3=ghostx3+1;
    }
  }

  if(ghosty3<pmany && maze [ghostx3] [ghosty3+1] !='@' && maze [ghostx3] [ghosty3+1] !='^' && maze [ghostx3] [ghosty3+1] !='%' && maze [ghostx3] [ghosty3+1] !='|' && maze [ghostx3] [ghosty3+1] !='_' && maze [ghostx3] [ghosty3+1] !='#')
  {ghosty3=ghosty3+1;}
  gotoxy(ghostx3,ghosty3);
  cout<<"G";
  gotoxy(ghostx3,ghosty3);
  cout<<" ";
  if(ghostx3>pmanx && maze [ghostx3-1] [ghosty3] !='@' && maze [ghostx3-1] [ghosty3] !='^' && maze [ghostx3-1] [ghosty3] !='%' && maze [ghostx3-1] [ghosty3] !='|' && maze [ghostx3-1] [ghosty3] !='_' && maze [ghostx3-1] [ghosty3] !='#')
  {ghostx3=ghostx3-1;}
  if(ghosty3>pmany && maze [ghostx3] [ghosty3-1] !='@' && maze [ghostx3] [ghosty3-1] !='^' && maze [ghostx3] [ghosty3-1] !='%' && maze [ghostx3] [ghosty3-1] !='|' && maze [ghostx3] [ghosty3-1] !='_' && maze [ghostx3] [ghosty3-1] !='#')
  {ghosty3=ghosty3-1;}
  if(maze [ghostx3] [ghosty3] !='@' && maze [ghostx3] [ghosty3] !='^' && maze [ghostx3] [ghosty3] !='%' && maze [ghostx3] [ghosty3] !='|' && maze [ghostx3] [ghosty3] !='_' && maze [ghostx3] [ghosty3] !='#')
  {
  gotoxy(ghostx3,ghosty3);
  cout<<"G";
  }   
  gotoxy(ghostx3,ghosty3);
  cout<<"G";
  if(ghostx3==pmanx && ghosty3==pmany)
  {condition=true;}
   












    gotoxy(ghostx4,ghosty4);
  cout<<" ";
  if(ghostx4<pmanx && maze [ghostx4] [ghosty4] !='@' && maze [ghostx4] [ghosty4] !='^' && maze [ghostx4] [ghosty4] !='%' && maze [ghostx4] [ghosty4] !='|' && maze [ghostx4] [ghosty4] !='_' && maze [ghostx4] [ghosty4] !='#')
  {
    if(maze [ghostx4+1] [ghosty4]  !='@' && maze [ghostx4+1] [ghosty4] !='^' && maze [ghostx4+1] [ghosty4] !='%' && maze [ghostx4+1] [ghosty4] !='|' && maze [ghostx4+1] [ghosty4] !='_' && maze [ghostx4+1] [ghosty4] !='#')
    {
    ghostx4=ghostx4+1;
    }
  }

 

  if(ghosty4<pmany && maze [ghostx4] [ghosty4+1] !='@' && maze [ghostx4] [ghosty4+1] !='^' && maze [ghostx4] [ghosty4+1] !='%' && maze [ghostx4] [ghosty4+1] !='|' && maze [ghostx4] [ghosty4+1] !='_' && maze [ghostx4] [ghosty4+1] !='#')
  {ghosty4=ghosty4+1;}
  gotoxy(ghostx4,ghosty4);
  cout<<"G";
  gotoxy(ghostx4,ghosty4);
  cout<<" ";
  if(ghostx4>pmanx && maze [ghostx4-1] [ghosty4] !='@' && maze [ghostx4-1] [ghosty4] !='^' && maze [ghostx4-1] [ghosty4] !='%' && maze [ghostx4-1] [ghosty4] !='|' && maze [ghostx4-1] [ghosty4] !='_' && maze [ghostx4-1] [ghosty4] !='#')
  {ghostx4=ghostx4-1;}
  if(ghosty4>pmany && maze [ghostx4] [ghosty4-1] !='@' && maze [ghostx4] [ghosty4-1] !='^' && maze [ghostx4] [ghosty4-1] !='%' && maze [ghostx4] [ghosty4-1] !='|' && maze [ghostx4] [ghosty4-1] !='_' && maze [ghostx4] [ghosty4-1] !='#')
  {ghosty4=ghosty4-1;}
  if(maze [ghostx4] [ghosty4] !='@' && maze [ghostx4] [ghosty4] !='^' && maze [ghostx4] [ghosty4] !='%' && maze [ghostx4] [ghosty4] !='|' && maze [ghostx4] [ghosty4] !='_' && maze [ghostx4] [ghosty4] !='#')
  {
  gotoxy(ghostx4,ghosty4);
  cout<<"G";
  }   
  gotoxy(ghostx4,ghosty4);
  cout<<"G";
  if(ghostx4==pmanx && ghosty4==pmany)
  {condition=true;}
  
  }



void gotoxy( short x, short y )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD position = { x, y } ;
    SetConsoleCursorPosition( hStdout, position ) ;
}


void looad_board()
{
int x=0;
int y=0;
fstream file;
file.open("maze.txt",ios::in);
string data;
while(getline(file,data))
{
int counter=0;  
for(int x=0;x<size_x;x++)
{
maze [x] [y]=data[counter];
counter=counter+1;
}
y=y+1;
}
file.close();
}


void display_board()
{
for(int y=0 ;y<size_y;y++)
{
for(int x=0;x<size_x;x++)
{cout<<maze [x] [y];}
cout<<endl;
}
}

void points_calculator()
{  
gotoxy(10,30);
cout<<"\t \t \t \t"<<"POINTS  ="<<points;
}


void starting_display()
{
gotoxy(15,10);
cout<<"                          *PAC-MAN*                      "<<endl;
cout<<endl<<endl<<endl;
cout<<"               \t\t\t    PRESS ANY KEY TO CONTINUE...............................";
getch();
system("CLS");
}