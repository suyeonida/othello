#include <stdio.h>
#include <stdlib.h>
#include<Windows.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int gameboard[6][6]={
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	{0,0,1,2,0,0}
	{0,0,2,1,0,0}
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	};
	
int main(int argc, char *argv[]) {
int board_function(int gameboard[6][6]){  //게임판 나오고 초기 4개 돌 배치 
	int i,j;
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			if(arr[i][j]==0)
				printf(" ");
			else if (arr[i][j]==1)
				printf("o");
			else if(arr[i][j]==2)
				printf("x");
		}
	
	printf("\n"); }
	return gameboard[6][6];	
}


int main(int argc, char *argv[]) {
	int board_function(int gameboard[6][6]); 
	return 0;
}
