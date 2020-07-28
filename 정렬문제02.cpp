#include <stdio.h>

//문제 =>  https://www.acmicpc.net/problem/2752

//선택정렬 
int array[3];

void show(int number){
	int i;
	for(i = 0; i < number; i++){
		printf("%d ", array[i]);
	}
}

int main(void){
	int  i, j, min, index, temp;
	for(i = 0; i < 3; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < 3; i++){
		//절대값이 1000보다 작거나 같기때문에 1000001로 설정한다. 
		//항상 들어오는 숫자보다 더 커야한다.  최소값으로 선택이 되기 위함이다. 
		min = 1000001;
		for(j = i; j < 3; j++){
			//현재 요소가 최소값이라면 
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		} 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	} 
	
	show(3);
}
