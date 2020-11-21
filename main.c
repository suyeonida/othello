#include <stdio.h>
#include <stdlib.h>
#define N 6
#include<Windows.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N]={
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	{0,0,1,2,0,0}
	{0,0,2,1,0,0}
	{0,0,0,0,0,0}
	{0,0,0,0,0,0}
	}
	


int stone(int arr[6][6]){
	int i,j;
	for(i=0;i<8;i++){
		gotoxy(2,2+2*i)  //이해 안됌.꼭 필요한가? 
		
		for(j=0;j<8;j++){
			if(arr[i][j]=0)
				printf(" ");
			else if (arr[i][j]=1)
				printf("o");
			else if(arr[i][j]=2)
				printf("x")
			
		}
	
	printf("\n\n");
	gotoxy(35,9);
	printf("일시정지 [K]");
	}
	return arr[6][6];	
}


int main(int argc, char *argv[]) {
	return 0;
}
