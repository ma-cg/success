#define ROW 3
#define COL 3
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL],int row,int col );
void Displarboard(char board[ROW][COL], int row, int col);
void Playmove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);
