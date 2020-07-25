#include <stdio.h>

//버블정렬 
//선택 정렬과 같이 등차수열이기 때문에 시간복잡도는 선택정렬과 같이 
// O(N * N)이다. 
//하지만 선택정렬보다 더 느리다.
//계속 바로 옆에 값과 자리를 바꾸는 연산을 하기 때문이다. 
//선택 정렬은 가장 작은 요소를 골라서 마지막에 한 번 스와핑을 한다. 
//버블 정렬은 선택정렬보다 훨씬 더 비효율적이다. 
//시간복잡도는 선택정렬과 같지만 실제 수행시간은 선택정렬보다 더 걸린다. 
//알고리즘 중에서 가장 느리다. 
int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++){
		//0~9, 0~8, 0~7..이런 식으로 비교 
		// 9 - i 에서 9인 것은 요소 + 1을 해서비교하기 때문. 
		for(j = 0; j < 9 - i; j++){
			//바로 옆에 값과 비교 
			if(array[j] > array[j + 1]){ 
			    //바로 옆에 값과 스와핑. 
			    //큰 값이 뒤로 계속 밀려난다. 
				temp = array[j]; 
				array[j] = array[j + 1];
				array[j + 1] = temp;
			} 
			
		}
	}
	//정렬된 배열(array)을 출력한다. 
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	} 
	
	return 0;
} 
