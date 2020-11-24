#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
//º¸µåÆÇ ÃÊ±âÈ­ »óÅÂ  

int main(int argc, char *argv[]) {
	int gameboard[6][6]={0};
	
	board();
	
	return 0;
}

int board(int gameboard[6][6]) {
	int i,j;
	printf("  0 1 2 3 4 5\n--------------\n");
	for(i=0;i<6;i++){
			printf("%d|",i);
		for(j=0;j<6;j++){
			printf("%d|",gameboard);  
		}
	printf("\n--------------\n");
	}
	return gameboard[6][6];
}

