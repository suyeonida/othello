int Stone(int arr[6][6]){
	
	int i, j;
	for (i = 0; i < 8; i++){
		
		for (j = 0; j < 8; j++){
			if (arr[i][j] == 0)  //���� ������ ��������  
				printf(" |");
			else if (arr[i][j] == 1)  //���� ��Ÿ���� 1�� O��  
				printf("O|");
			else if (arr[i][j] == 2) //�浹�� ��Ÿ���� 2�� X��  
				printf("X|");
		}
		printf("\n--------------\n"); //�̰� ��� -�Ẹ��!!
	}
	return arr[N][N];
	
	 
