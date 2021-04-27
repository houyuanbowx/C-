#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
///////////1.创建棋盘
#define MAX_ROW 3
#define MAX_COL 3

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chess[row][col] = ' ';

		}
	}
	//设置随机种子
	srand((unsigned int) time(0));

}
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}

}
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("玩家落子....\n");
	while (1) {
		printf("请输入一组坐标[rol][col]: ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		/// 进行合法性校验，判断用户输入的内容是否合法
		/// 不合法重新输入
		/// 
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您的输入不合法，请重新输入\n");
			//这样就是不合法
			continue;
		}
		//假设用户输入的位置已经有子了，就提醒用户重新输入
		if (chessBoard[row][col] != ' ') {
			printf("您输入的位置有子了，请重新输入\n");
			continue;
		}
		//进行落子
		chessBoard[row][col] ='x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	//产生随机数
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}

}
//1.表示棋盘满了， 0 表示没满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
 ////返回x,表示玩家获胜
////返回o,表示电脑获胜
///返回‘ ’，表示胜负未分
//返回q,平局
char isGameover(char chessBoard[MAX_ROW][MAX_COL]) {
	//扫描所有行，所有列以及对角线
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}

	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];

	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	//判断是否和棋
	if (isFull(chessBoard)) {
		return 'q';
	}
	//胜负未分
	return ' ';
}

int main() {
	char chessBoard[MAX_ROW][MAX_COL];  //不建议使用全局变量
	 //1.对棋盘进行初始化
	init(chessBoard);
	char winner = ' ';
	while (1) {
		//打印之前先清屏，清除上一轮的打印
		system("cls");
		//2.打印棋盘
		print(chessBoard);
		//3.玩家落子
		playerMove(chessBoard);
		//4.判断胜利
		 winner = isGameover(chessBoard);
		if (winner != ' ') {
			break;
		}

		//5.电脑落子
		computerMove(chessBoard);
		//6.判断胜负
		winner = isGameover(chessBoard);
		if (winner != ' ') {
			break;

		}
	}
	print(chessBoard);
	if (winner == 'x') {
		printf("恭喜你赢啦\n");

	}
	else if (winner == 'o') {
		printf("很遗憾，输啦\n");

	}
	else {
		printf("平局\n");
	}
	
	system("pause");
	return 0;

}