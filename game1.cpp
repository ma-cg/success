#include"game1.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{	
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count !=0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win=0;

	while (win < row*col- EASY_COUNT)
	{
		printf("ÇëÊäÈëÅÅ²éÀ×µÄ×ø±ê:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÀ²£¡£¡");
				printf("\n");
				displayboard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("ÊäÈë´íÎó,ÇëÖØÐÂÊäÈë×ø±ê");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("¹§Ï²ÄãÅÅÀ×³É¹¦\n");
	}
}
int get_mine_count(char mine[ROWS][COLS], int  x, int  y)
{
	return mine[x - 1][y + 1] + mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0';

}