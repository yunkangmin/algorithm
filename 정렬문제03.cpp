#include <stdio.h>
#include <algorithm>
 
int number, data[1000001];

void show(){
	for(int i = 0; i < number; i++){
		printf("%d\n", data[i]);
	}
}

void quickSort(int * data, int start, int end){
	if (start >= end){
		return;
	}
	
	int key = start;
	int i = start + 1, j = end, temp;
	while(i <= j){ //엇갈리지 않을 떄까지 반복
		while(i <= end && data[i] <= data[key]){
			i++;
		} 
		
		while(j > start && data[j] >= data[key]){
			j--;
		}
		
		if(i > j){
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void){
	scanf("%d\n", &number);
	for(int i = 0; i < number; i++){
		scanf("%d", &data[i]);
	}
	//퀵정렬은 최악의 경우 시간복잡도가 N * N이 나온다.
	//그래서 C++ 알고리즘 STL 라이브러리를 사용한다. N * logN을 보장한다.
	std::sort(data, data + number); 
	//quickSort(data, 0, number - 1);
	show();
	return 0;
}
