#include <stdio.h>

//계수정렬은 정렬할 데이터가 100000이 있다고 하면
// count 배열도 count[10000]으로 설정해줘야 하기 때문에  
//정렬할 데이터 크기에 의존이 심하다. 
//데이터의 크기가 한정되어 있을 때만 사용이 가능하다. 
int main(void){
	int temp;
	int count[5];
	
	int array[30] = {
		1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
		3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
		3, 1, 4, 3, 5, 1, 2, 1, 1, 1
	};
	for(int i = 0; i < 5; i++){
		count[i] = 0;
	}
	for(int i = 0; i < 30; i++){
		count[array[i] - 1]++;
	}
	for(int i = 0; i < 5; i++){
		if(count[i] != 0){
			for(int j = 0; j < count[i]; j++){
				printf("%d ", i + 1);
			}	
		}	
	}
	return 0;
} 
