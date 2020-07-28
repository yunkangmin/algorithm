#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7 , 6, 4, 3, 2, 9};

void show(){
	int i;
	for(i = 0; i < number; i++){
		printf("%d ", data[i]);
	}
}

void quickSort(int *data, int start, int end){
	if (start >= end){ //원소가 1개인 경우 종료시키기 
		return;
	}
	
	int key = start;   //키는 첫번째 원소 => 1
	int i = start + 1; //왼쪽부터 큰값을 찾을 때 인덱스(키값의 왼쪽) => 10
	int j = end; //오른쪽에서 부터 인덱스 => 9
	int temp;
	
	while(i <= j){//엇갈리지 않을때 까지  반복. 
	          //배열의 범위를 넘어가지않도록 하는 조건. 
		while(i <= end && data[i] <= data[key]){ //키 값보다 큰 값을 만날때까지 반복. 
			i++; 
		}  
		      // 범위를 넘어가지 않도록 하는 조건. 
		while(j > start && data[j] >= data[key] ){ //키 값보다 작은 값을 만날때까지 반복.  
			j--;
		}
		
		if(i > j){// 현재 엇갈린 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{ // 엇갈리지 않았다면 i와 j를 교체 
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	//엇갈렸을 시 실행됨
	//j 인덱스에는 원래 키값이 위치한다. 
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void){
	quickSort(data, 0, number - 1);
	show();
	return 0;
	
} 
