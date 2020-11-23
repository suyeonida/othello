int Stone(int arr[6][6]){
	
	int i, j;
	for (i = 0; i < 8; i++){
		
		for (j = 0; j < 8; j++){
			if (arr[i][j] == 0)  //돌이 없으면 공백으로  
				printf(" |");
			else if (arr[i][j] == 1)  //흰돌을 나타내는 1은 O로  
				printf("O|");
			else if (arr[i][j] == 2) //흑돌을 나타내는 2는 X로  
				printf("X|");
		}
		printf("\n--------------\n"); //이거 대신 -써보자!!
	}
	return arr[N][N];
	
	 
