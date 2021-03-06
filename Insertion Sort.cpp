# include <stdio.h>

//삽입정렬 
//시간복잡도는 선택정렬, 버블정렬과 같이 O(N^2)이다. 하지만 가장 효율적임.
//특정 요소에서 비교를 할 때 이미 앞에 있는 것들은 정렬이 되어있기 때문에 앞쪽에 있는 
//수와 특정요소를 비교해서 더 특정요소가 클때만 변경하는 방법이다.
// ([1], 10), 5, 8, 7, 6, 4, 3, 2, 9
// (1, [10], 5), 8, 7, 6, 4, 3, 2, 9
// (1, 5, [10], 8), 7, 6, 4, 3, 2, 9
// (1, 5, 8, [10], 7), 6, 4, 3, 2, 9
// (1, 5, 7, 8, [10], 6), 4, 3, 2, 9
//0~1 -> 0~2 -> 0~3 ...
// 2 3 4 5 6 7 8 9 10 1 옆에 숫자들과 같이 거의 정렬된 상태에서는 삽입정렬이 가장 효율적이다. 
int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	//int array[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
	for(i = 0; i < 9; i++){
		//j변수는 아래 while 문에서 j--때문에 필요하다. 
		j = i;
		//기준값이 바로 옆에 값보다 크다면 -> 필요 시에만 값을 바꿈. 
		while(array[j] > array[j + 1]){
			printf("%d \n", j);
			for(i = 0; i < 10; i++){
				printf("%d ", array[i]);
			
			} 
				printf("\n\n");
			//스와핑 
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp; 
			//기준값과 바로 옆에 값보다 작을 때까지 반복 
			//i = 0
			//1 10 5 8 7 ...
			//i = 1
			//1 5 10 8 7 ...
			//i = 2
			//1 5 8 10 7 ...
			//i = 3
			//1 5 8 7 10 ...
			//i = 3
			//1 5 7 8 10 ...
			//...
		
			j--;
			
		}
	}
	//정렬된 배열(array)을 출력한다. 
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	
	} 
		printf("\n");
    int d = 0;
	d--;
	printf("%d ", d);
	printf("\n");
	printf("%d ", array[d]); //0이 나옴. 
	printf("\n");
	return 0;
} 
