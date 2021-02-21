#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
void gotoxy(short x, short y);
void store_maze();
/*
!!!!!!!!!!!!!!!!!!!!!!
<CONFIGURING THE MAZE>
!!!!!!!!!!!!!!!!!!!!!!
*/
string maze = " ##################################################################### \n"
              "||..  .....................................................  ......  ||\n"
              "||..  %%%%%%%%%%%%%%%%        ...    %%%%%%%%%%%%%%  |%| ..  %%%%    ||\n"
              "||..         |     |%|     |%|...    |          |%|  |%| ..   |%|    ||\n"
              "||..         |     |%|     |%|...    |          |%|  |%| ..   |%|    ||\n"
              "||..         %%%%%%%%  . . |%|...    %%%%%%%%%%%%%%      ..   %%  .  ||\n"
              "||..         |%|       . . |%|...    ............... |%| ..       .  ||\n"
              "||..         %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||\n"
              "||..                |%|.             |%|......       |%| ..    |%|.  ||\n"
              "||..      ......... |%|.             |%|......|%|        ..    |%|.  ||\n"
              "||..|%|  |%|%%%|%|. |%|. |%|            ......|%|        ..|%| |%|.  ||\n"
              "||..|%|  |%|   |%|..     %%%%%%%%%%%%%  ......|%|         .|%|.      ||\n"
              "||..|%|  |%|   |%|..            ...|%|     %%%%%%        . |%|.      ||\n"
              "||..|%|            .            ...|%|               |%| ..|%|.      ||\n"
              "||..|%|  %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||\n"
              "||................................................   |%| ..........  ||\n"
              "||   .............................................          .......  ||\n"
              "||..|%|  |%|   |%|..     %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||\n"
              "||..|%|  |%|   |%|..            ...|%|     %%%%%%    |%| ..|%|.      ||\n"
              "||..|%|            .            ...|%|               |%| ..|%|.      ||\n"
              "||..|%|  %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||\n"
              "||................................................   |%| ..........  ||\n"
              "||   .............................................          .......  ||\n"
              " ##################################################################### \n:";
const int x_size_max = 100; //leave room for later adjustment of maze,
const int y_size_max = 30;
int x_size = 0;
int y_size = 0;
char maze_arr[y_size_max][x_size_max] = {};

/*
!!!!!!!!!!!!!!!!!!!!!!
</CONFIGURING THE MAZE>
!!!!!!!!!!!!!!!!!!!!!!
*/

void movePacmanLeft(char maze_element);
void movePacmanRight(char maze_element);
void movePacmanUP(char maze_element);
void movePacmanDown(char maze_element);

void moveGhost1(char ghost);
void moveGhost2(char ghost);
void moveGhost3(char ghost);
string get_ghost_direction(int gx, int gy);
void update_ghost_surrounding(char ghost_surr[5], int ghostx, int ghosty);
string random_direction(char up, char down, char left, char right);
bool check(char ch);
int ghost1x = 47;
int ghost1y = 3;
char ghost1_surr[5] = {};
string gdir1 = "Left";
int ghost2x = 18;
int ghost2y = 4;
char ghost2_surr[5] = {};
string gdir2 = "Left";
int ghost3x = 44;
int ghost3y = 10;
char ghost3_surr[5] = {};
string gdir3 = "Left";
int moved = 0;

int pmanx = 13;
int pmany = 12;
int score = 0;
int timee = 0;
int r_counter = 0;
string ghostDirection = "Right";
bool stuck = true;
int stuck_for = 0;

int main(void)
{
  store_maze();
  system("cls");
  int x = 2;
  int key = 4000;
  bool gameRunning = true;
  //showing maze
  cout << maze;
  //showing pacman
  gotoxy(pmanx, pmany);
  cout << "P";

  while (gameRunning)
  { //ascii code for escape
    if (GetAsyncKeyState(VK_LEFT))
    { //ascii LEFT arrow
      movePacmanLeft(maze_arr[pmany][pmanx - 1]);
    }
    if (GetAsyncKeyState(VK_RIGHT))
    { //ascii right arrow
      movePacmanRight(maze_arr[pmany][pmanx + 1]);
    }

    if (GetAsyncKeyState(VK_UP))
    { // up arrow key
      movePacmanUP(maze_arr[pmany - 1][pmanx]);
    }
    if (GetAsyncKeyState(VK_DOWN))
    { //down arrow key
      movePacmanDown(maze_arr[pmany + 1][pmanx]);
    }
    if (GetAsyncKeyState(VK_ESCAPE) || (pmanx == ghost1x && pmany == ghost1y) || (pmanx == ghost2x && pmany == ghost2y) || (pmanx == ghost3x && pmany == ghost3y))
    {
      gotoxy(16, 25);
      cout << "                      ";
      gotoxy(16, 25);
      cout << "Your final score was: " << score;
      gameRunning = false;
    }
    if (gameRunning)
    {
      gotoxy(16, 25);
      cout << "Current Score: " << score;
    }

    if (stuck_for >= 5)
    {
      stuck_for = 0;
    }
    moveGhost1('G'); //move the first ghost
    moveGhost2('G'); //move the second ghost
    moveGhost3('G'); //move the third ghost
    Sleep(90);
    timee += 90;
    if (timee >= 3000 && timee <= 3100)
    {
      maze_arr[3][37] = ' ';
      maze_arr[4][37] = ' ';
      gotoxy(37, 3);
      cout << " ";
      gotoxy(37, 4);
      cout << " ";
    }
    if (timee >= 5000 && timee <= 5100)
    {
      maze_arr[3][13] = ' ';
      maze_arr[4][13] = ' ';
      gotoxy(13, 3);
      cout << " ";
      gotoxy(13, 4);
      cout << " ";
    }
    stuck_for++;
  }
}
void movePacmanUP(char maze_element)
{
  gotoxy(pmanx, pmany);
  cout << " ";

  if (maze_element == ' ' || maze_element == '.')
  { //move only if empty space or dot
    pmany--;
  }

  gotoxy(pmanx, pmany);
  cout << "P";
  if (maze_element == '.')
  {
    score++;
  }
}
void movePacmanDown(char maze_element)
{
  gotoxy(pmanx, pmany);
  cout << " ";
  if (maze_element == ' ' || maze_element == '.')
  { //move only if empty space or dot
    pmany++;
  }
  gotoxy(pmanx, pmany);
  cout << "P";
  if (maze_element == '.')
  {
    score++;
  }
}

void movePacmanRight(char maze_element)
{
  gotoxy(pmanx, pmany);
  cout << " ";
  if (maze_element == ' ' || maze_element == '.')
  { //move only if empty space or dot
    pmanx++;
  }
  gotoxy(pmanx, pmany);
  cout << "P";
  if (maze_element == '.')
  {
    score++;
  }
}
void movePacmanLeft(char maze_element)
{
  gotoxy(pmanx, pmany);
  cout << " ";
  if (maze_element == ' ' || maze_element == '.')
  { //move only if empty space or dot
    pmanx--;
  }
  gotoxy(pmanx, pmany);
  cout << "P";
  if (maze_element == '.')
  {
    score++;
  }
}

void store_maze()
{
  for (int i = 0; maze[i] != '\n'; i++)
  {
    x_size++;
  }
  for (int i = 0; maze[i] != ':'; i++)
  {
    if (maze[i] == '\n')
    {
      y_size++;
    }
  }
  int counter = 0;
  for (int i = 0; i < y_size; i++)
  {
    for (int j = 0; j < x_size; j++)
    {
      maze_arr[i][j] = maze[counter];
      counter++;
    }
    counter++;
  }
}

void moveGhost1(char ghost)
{
  /*Anti clockwise Ghost*/
  ghostDirection = get_ghost_direction(ghost1x, ghost1y);

  update_ghost_surrounding(ghost1_surr, ghost1x, ghost1y);

  gotoxy(ghost1x, ghost1y);
  cout << ghost1_surr[0];

  if (ghostDirection == "Up")
  {
    if (check(ghost1_surr[1]))
    {
      ghost1y--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost1x--;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost1y++;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost1x++;
    }
  }
  else if (ghostDirection == "Down")
  {
    if (check(ghost1_surr[2]))
    {
      ghost1y++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost1x++;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost1y--;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost1x--;
    }
  }
  else if (ghostDirection == "Left")
  {
    if (check(ghost1_surr[3]))
    {
      ghost1x--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost1y++;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost1x++;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost1y--;
    }
  }
  else if (ghostDirection == "Right")
  {
    if (check(ghost1_surr[4]))
    {
      ghost1x++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost1y--;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost1x--;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost1y++;
    }
  }
  else
  {
    gotoxy(ghost1x, ghost1y);
    cout << " ";
  }
  gotoxy(ghost1x, ghost1y);
  cout << ghost;
}

void moveGhost2(char ghost)
{
  /*Clockwise Ghost*/
  ghostDirection = get_ghost_direction(ghost2x, ghost2y);

  update_ghost_surrounding(ghost1_surr, ghost2x, ghost2y);

  gotoxy(ghost2x, ghost2y);
  cout << ghost1_surr[0];

  if (ghostDirection == "Up")
  {
    if (check(ghost1_surr[1]))//up
    {
      ghost2y--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[4]))//right
    {
      ghost2x++;
    }
    else if (check(ghost1_surr[2]))//down
    {
      ghost2y++;
    }
    else if (check(ghost1_surr[3]))//left
    {
      ghost2x--;
    }
  }
  else if (ghostDirection == "Down")
  {
    if (check(ghost1_surr[2]))//down
    {
      ghost2y++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[3]))//left
    {
      ghost2x--;
    }
    else if (check(ghost1_surr[1]))//up
    {
      ghost2y--;
    }
    else if (check(ghost1_surr[4]))//right
    {
      ghost2x++;
    }
  }
  else if (ghostDirection == "Left")
  {
    if (check(ghost1_surr[3]))//left
    {
      ghost2x--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[1]))//up
    {
      ghost2y--;
    }
    else if (check(ghost1_surr[4]))//right
    {
      ghost2x++;
    }
    else if (check(ghost1_surr[2]))//down
    {
      ghost2y++;
    }
  }
  else if (ghostDirection == "Right")
  {
    if (check(ghost1_surr[4]))//right
    {
      ghost2x++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[2]))//down
    {
      ghost2y++;
    }
    else if (check(ghost1_surr[3]))//left
    {
      ghost2x--;
    }
    else if (check(ghost1_surr[1]))//up
    {
      ghost2y++;
    }
  }
  else
  {
    gotoxy(ghost2x, ghost2y);
    cout << " ";
  }
  gotoxy(ghost2x, ghost2y);
  cout << ghost;
}

void moveGhost3(char ghost)
{
  /*Anti-clockwise ghost but slightly differnt*/
  
  srand((unsigned)time(0));
  int rr = rand() % 3;
  
  
  if(moved >= rr){//moves 5 turns in same direction
    moved = 0;
    ghostDirection = get_ghost_direction(ghost3x, ghost3y);
  }
  update_ghost_surrounding(ghost1_surr, ghost3x, ghost3y);

  gotoxy(ghost3x, ghost3y);
  cout << ghost1_surr[0];

  if (ghostDirection == "Up")
  {
    if (check(ghost1_surr[1]))
    {
      ghost3y--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost3x--;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost3y++;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost3x++;
    }
  }
  else if (ghostDirection == "Down")
  {
    if (check(ghost1_surr[2]))
    {
      ghost3y++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost3x++;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost3y--;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost3x--;
    }
  }
  else if (ghostDirection == "Left")
  {
    if (check(ghost1_surr[3]))
    {
      ghost3x--;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost3y++;
    }
    else if (check(ghost1_surr[4]))
    {
      ghost3x++;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost3y--;
    }
  }
  else if (ghostDirection == "Right")
  {
    if (check(ghost1_surr[4]))
    {
      ghost3x++;
      stuck = false;
      stuck_for = 5;
    }
    else if (check(ghost1_surr[1]))
    {
      ghost3y--;
    }
    else if (check(ghost1_surr[3]))
    {
      ghost3x--;
    }
    else if (check(ghost1_surr[2]))
    {
      ghost3y++;
    }
  }
  else
  {
    gotoxy(ghost3x, ghost3y);
    cout << " ";
  }
  gotoxy(ghost3x, ghost3y);
  cout << ghost;
  moved++;
}
void gotoxy(short x, short y)
{
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD position = {x, y};
  SetConsoleCursorPosition(hStdout, position);
}

string get_ghost_direction(int ghostx, int ghosty)
{
  int diffx = ghostx - pmanx;
  int diffy = ghosty - pmany;
  int abs_diffx = diffx;
  int abs_diffy = diffy;
  int abs_diff = diffx - diffy;
  string u = "Up", d = "Down", l = "Left", r = "Right";
  string directions[4] = {u, d, l, r};
  abs_diffy *= 2; //scaling since y-axis is a few times smaller
  string direction = u;
  if (diffx < 0)
  {
    abs_diffx *= -1;
  }
  if (diffy < 0)
  {
    abs_diffy *= -1;
  }
  if (abs_diff < 0)
  {
    abs_diff *= -1;
  }
  //Now to decide it's direction

  if (abs_diff != 0)
  {
    if (abs_diffx > abs_diffy)
    { //the pacman is more far away on x-axis
      if (diffx > 0)
      { //pacman is on the left
        direction = l;
      }
      else
      { //pacman is on the right
        direction = r;
      }
    }
    else
    { //the pacman is more far away on y-axis
      if (diffy > 0)
      { //pacman is Above
        direction = u;
      }
      else
      { //pacman is Below
        direction = d;
      }
    }
  }
  else
  {
    srand((unsigned)time(0));
    int rr = rand() % 3;
    direction = directions[rr];
  }

  return direction;
}

bool check(char ch)
{
  if (ch == ' ' || ch == '.')
  {
    return true;
  }
  return false;
}

void update_ghost_surrounding(char ghost_surr[5], int ghostx, int ghosty)
{
  ghost_surr[0] = maze_arr[ghosty][ghostx];
  ghost_surr[1] = maze_arr[ghosty - 1][ghostx];
  ghost_surr[2] = maze_arr[ghosty + 1][ghostx];
  ghost_surr[3] = maze_arr[ghosty][ghostx - 1];
  ghost_surr[4] = maze_arr[ghosty][ghostx + 1];
}