#include"game.h"
#include<string.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************************\n");
	printf("******** 1. play  0.exit************\n");
	printf("************************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	Displarboard(board, ROW, COL);
	while (true)
	{
		Playmove(board, ROW, COL);
		Displarboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	  	Computermove(board, ROW, COL);
		Displarboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '$')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input != 0);
	return 0;
}