#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//필요했던 함수들 선언 
void STATUS(int x, int y, int arr[6][6]) ;

//보드판 초기화  
int gameboard[N][N]={0};
	
//2차원 보드값  출력  함수의 이름: board,,,,어레이형태의 이름: gameboard 
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
	
	if (game == 0)    //이거 왜하는 거야???? 
	{
		int [6][6] = { 0 };
		int copy_board[6][6] = { 0 };
		int Done = 0;   //아직 제대로 정리 x 
		int row = 8;  int column = 8;  //아직 제대로 정리 x 
		int stone_x, stone_y;  //아직 제대로 정리 x 

		board[2][2] = 1;	board[3][3] = 1;
		board[2][3] = 2; 	board[3][2] = 2;

		STATUS(x, y, arr);   //
		
		Stone(arr);  //게임판 ox로 시각화 하기  
		
		while(1){
		white:
			Can_I_Put_There_B_to_W(arr); /////흰색 차례일때 사용되며 흰돌을 둘 수 있는 곳을 찾아준다
			Stone(arr); ///////둘 수 있는 곳 찾아서  0,1,2,3 시각화 하고 

			if (is_that_finish(arr) == 1)     //더둘 곳이 없으면 1 반환, 있으면 0반환
			{
				Done++;

				if (Done >= 2)   
				{
					Finish(arr);
					gotoxy(2, 18);
					printf("서로 둘곳이 없어 게임을 끝냅니다.");
					while (1);  //이게 왜 있는 거야  sibal@@@@
				}

				else
				{
					pass_turn(); turn교체!!
					Eliminate_Three(arr);
					goto black;  //black turn 으로 가야지~
				}
			}			->더 둘 곳이 있으면 if문 건너 뛰고 아래로 와야지!!!

			White_turn();    ////printf(“white turn!”)적는 코드

			Start_Point();  //이건 나한테 무쓸모 
			x = 2; y = 2;

			while (1)
			{
				stone_y = (x - 2) / 4;   //백색 돌 어디에 둘지 입력 받는다.
				stone_x = (y - 2) / 2;

				if (key == SPACEBAR)   //입력 받았을때 scanf로 
				{

					if ((arr[stone_x][stone_y] == 1) || (arr[stone_x][stone_y] == 2)) 이미 돌이 있는 곳..
					{
						gotoxy(2, 18);
						printf("그곳에는 둘 수 없습니다.");
						goto back1;  //back1이 도대체 어디일까..
					}
					White_to_arr(x, y, arr);  //가능한 자리 중에서 내가 원하는 자리 지정하고 백색돌 놓기 
					arr_cpy(m_arr_cpy, arr); //복사본 만들어서 원본에 넣어주기 

					Reverse_B_to_W_for_effect(arr, x, y);  //돌 뒤집는 함수를 총 묶음체,,,사실상 제일 중요한 부분..

					if (arr_comparator(arr, m_arr_cpy) == 1) //둘 수 있는곳 판별 알려줄 떄 복사본과 원본 변화가 없으면 
					{
						arr[stone_x][stone_y] = 0; //두었던 곳을 다시 0으로 만들어줘야지
						gotoxy(2, 18);
						printf("상대방을 포위하는 위치에 두셔야 합니다.");
						goto back1;
					}
					else if (arr_comparator(arr, m_arr_cpy) == 0) //복사본 원본의 변화가 있으면 (+뒤집 혔으면)
						;
					Eliminate_Three(arr);
					system("cls");  //나에게 필요없는 코드
					Show_feature(x, y, arr);   //백.흑돌 몇개 씩인지 변화 보여주기 

					arr_cpy(m_arr_cpy, arr); //??????????????????뭘 의미할까 
					Can_I_Put_There_W_to_B(arr); //둘 수 있는 곳 바뀐 변화 적용해주기 
					Stone(arr); //변화들 시각화해주기 


					if (board_checker(arr) == 1)
					{
						Finish(arr);
						while (1);  //????????????왠 뜬금없는 while(1)
						return 0;
					}

					key = 0;
					break;  // while문 탈출~~~
				}
				else
				{
				back1:
					key = getch();

					Can_I_Put_There_B_to_W(arr); //가능한 자리들 3으로 표시 해주기 
					Stone(arr); //가능한 자리 시각화해주기
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
	
	printf("STATUS- WHITE : %d개, BLACK : %d개 \n", White, Black);
	
}





