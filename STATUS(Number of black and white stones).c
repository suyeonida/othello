#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ʿ��ߴ� �Լ��� ���� 
void STATUS(int x, int y, int arr[6][6]) ;

//������ �ʱ�ȭ  
int gameboard[N][N]={0};
	
//2���� ���尪  ���  �Լ��� �̸�: board,,,,��������� �̸�: gameboard 
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


///////main �Լ� �Դϴ�~~~////// 
int main(int argc, char *argv[]) {
	
	int board(int gameboard[N][N]);   //gameboard������ ������� �� ���Բ� ���� �� ��!! 
	
	if (game == 0)    //�̰� ���ϴ� �ž�???? 
	{
		int [6][6] = { 0 };
		int copy_board[6][6] = { 0 };
		int Done = 0;   //���� ����� ���� x 
		int row = 8;  int column = 8;  //���� ����� ���� x 
		int stone_x, stone_y;  //���� ����� ���� x 

		board[2][2] = 1;	board[3][3] = 1;
		board[2][3] = 2; 	board[3][2] = 2;

		STATUS(x, y, arr);   //
		
		Stone(arr);  //������ ox�� �ð�ȭ �ϱ�  
		
		while(1){
		white:
			Can_I_Put_There_B_to_W(arr); /////��� �����϶� ���Ǹ� ���� �� �� �ִ� ���� ã���ش�
			Stone(arr); ///////�� �� �ִ� �� ã�Ƽ�  0,1,2,3 �ð�ȭ �ϰ� 

			if (is_that_finish(arr) == 1)     //���� ���� ������ 1 ��ȯ, ������ 0��ȯ
			{
				Done++;

				if (Done >= 2)   
				{
					Finish(arr);
					gotoxy(2, 18);
					printf("���� �Ѱ��� ���� ������ �����ϴ�.");
					while (1);  //�̰� �� �ִ� �ž�  sibal@@@@
				}

				else
				{
					pass_turn(); turn��ü!!
					Eliminate_Three(arr);
					goto black;  //black turn ���� ������~
				}
			}			->�� �� ���� ������ if�� �ǳ� �ٰ� �Ʒ��� �;���!!!

			White_turn();    ////printf(��white turn!��)���� �ڵ�

			Start_Point();  //�̰� ������ ������ 
			x = 2; y = 2;

			while (1)
			{
				stone_y = (x - 2) / 4;   //��� �� ��� ���� �Է� �޴´�.
				stone_x = (y - 2) / 2;

				if (key == SPACEBAR)   //�Է� �޾����� scanf�� 
				{

					if ((arr[stone_x][stone_y] == 1) || (arr[stone_x][stone_y] == 2)) �̹� ���� �ִ� ��..
					{
						gotoxy(2, 18);
						printf("�װ����� �� �� �����ϴ�.");
						goto back1;  //back1�� ����ü ����ϱ�..
					}
					White_to_arr(x, y, arr);  //������ �ڸ� �߿��� ���� ���ϴ� �ڸ� �����ϰ� ����� ���� 
					arr_cpy(m_arr_cpy, arr); //���纻 ���� ������ �־��ֱ� 

					Reverse_B_to_W_for_effect(arr, x, y);  //�� ������ �Լ��� �� ����ü,,,��ǻ� ���� �߿��� �κ�..

					if (arr_comparator(arr, m_arr_cpy) == 1) //�� �� �ִ°� �Ǻ� �˷��� �� ���纻�� ���� ��ȭ�� ������ 
					{
						arr[stone_x][stone_y] = 0; //�ξ��� ���� �ٽ� 0���� ����������
						gotoxy(2, 18);
						printf("������ �����ϴ� ��ġ�� �μž� �մϴ�.");
						goto back1;
					}
					else if (arr_comparator(arr, m_arr_cpy) == 0) //���纻 ������ ��ȭ�� ������ (+���� ������)
						;
					Eliminate_Three(arr);
					system("cls");  //������ �ʿ���� �ڵ�
					Show_feature(x, y, arr);   //��.�浹 � ������ ��ȭ �����ֱ� 

					arr_cpy(m_arr_cpy, arr); //??????????????????�� �ǹ��ұ� 
					Can_I_Put_There_W_to_B(arr); //�� �� �ִ� �� �ٲ� ��ȭ �������ֱ� 
					Stone(arr); //��ȭ�� �ð�ȭ���ֱ� 


					if (board_checker(arr) == 1)
					{
						Finish(arr);
						while (1);  //????????????�� ��ݾ��� while(1)
						return 0;
					}

					key = 0;
					break;  // while�� Ż��~~~
				}
				else
				{
				back1:
					key = getch();

					Can_I_Put_There_B_to_W(arr); //������ �ڸ��� 3���� ǥ�� ���ֱ� 
					Stone(arr); //������ �ڸ� �ð�ȭ���ֱ�
					Move_Choice(key, arr);
				}
			}
			Eliminate_Three(arr);
			Can_I_Put_There_W_to_B(arr);

	
	}
	return 0;
} 
 
void STATUS(int x, int y, int arr[6][6])   //Numbers of white and black stone

{
	int White = 0; 
	int Black = 0;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 7; y++)
		{
			if (arr[x][y] == 0)
				;
			else if (arr[x][y] == 1)
			{
				White++;
			}
			else if (arr[x][y] == 2)
			{
				Black++;
			}
			else if (arr[x][y] == 3)
				;
		}
	}
	
	printf("STATUS- WHITE : %d��, BLACK : %d�� \n", White, Black);
	
}





