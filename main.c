#include <stdio.h>
#include <stdlib.h>
#include<Windows.h> 
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�ʱ� ������ 
int gameboard[N][N]={
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	{0,0,1,2,0,0}
	{0,0,2,1,0,0}
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	};
//�����ǿ� �� ���� 
int board_function(int gameboard[N][N]){  //������ ������ �ʱ� 4�� �� ��ġ 
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

//��� �� ���� �Լ� 
int number_of_white(int gameboard[N][N]) 
 	int x,y;
 	int sum_of_white=0;
 	for(x=0;x<6;x++){
		
		for(y=0;y<6;y++){
			if(gameboard[x][y]==1)
				sum_of_white += 1;
			} 
		}
	return sum_of_white;
		
			
//��� �� ���� �Լ�  
int number_of_black(int gameboard[N][N]) 
 	int x,y;
 	int sum_of_black=0;
 	for(x=0;x<6;x++){
		
		for(y=0;y<6;y++){
			if(gameboard[x][y]==2)
				sum_of_black += 1;
			} 
		}
	return sum_of_black;

//��� ���α� �Լ�  �� ���� �� ��  
int white_turn(){
	printf("STATUS-White :%d, Black:%d\n",int number_of_black,int number)
	return 0;	
}
	
//��� �� �α� �Լ�  
int black_turn


int main(int argc, char *argv[]) {
	int board_function(int gameboard[6][6]); 
	return 0;
}


