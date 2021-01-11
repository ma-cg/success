#include"game1.h"
void menu()
{
	printf("************************************\n");
	printf("******** 1. play  0.exit************\n");
	printf("************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//displayboard(mine, ROW, COL);
	//displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	displayboard(mine, ROW, COL);
	findmine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input != 0);
	return 0;
}