#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//보드판 초기화  
int gameboard[N][N]={0};
	
//2차원 보드값  출력  
int board(int gameboard[N][N]) {
	int i,j;
	printf("  0 1 2 3 4 5\n--------------\n");
	for(i=0;i<6;i++){
			printf("%d|",i);
		for(j=0;j<6;j++){
			printf("%d|",board[i][j]);
		}
	printf("\n--------------\n");
	}
	return 0;
}
///////main 함수 입니다~~~////// 
int main(int argc, char *argv[]) {
	
	int board(int gameboard[N][N]);   //gameboard위에서 끌어오는 거 굣님께 질문 할 것!! 
	
	if (game == 0)
	{
		int [6][6] = { 0 };
		int m_arr_cpy[6][6] = { 0 };
		int Done = 0;
		int row = 8;  int column = 8;
		int stone_x, stone_y;

		arr[3][3] = 1; 	arr[4][4] = 1;
		arr[4][3] = 2; 	arr[3][4] = 2;


		x = 2; y = 2;

		removeCursor();
		Show_feature(x, y, arr);
		Can_I_Put_There_B_to_W(arr)
	
	return g;
} 
		





