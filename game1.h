#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROWS][COLS], int rows, int cols,char set);
void displayboard(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);
int get_mine_count(char mine[ROWS][COLS], int  x, int  y);


