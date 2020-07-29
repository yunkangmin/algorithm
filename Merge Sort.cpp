#include <stdio.h>

//상수로 선언해야 한다. array 배열선언시 대괄호 안에 변수로 사용하기 위해. 
const int NUMBER = 8;
//정렬 배열은 반드시 전역 변수로 선언. 
//단계별 정렬 수행 시 추가적인 배열이 필요한데 이 것을 
//필요할 때마다 배열을 생성하면 비효율적이기 때문이다. 
int sorted[8];
int array[NUMBER] = {7, 6, 5, 8, 3, 5, 9, 1};

void show(){
	for(int i = 0; i < NUMBER; i++){
		printf("%d ", array[i]);
	}
}

//부분배열을 이용해 새롭게 정렬된 배열을 만드는 함수. 
void merge(int a[], int m, int middle, int n){
	int i = m;
	int j = middle + 1;
	int k = m;
	//작은 순서대로 배열에 삽입
	while(i <= middle && j <= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	 //남은 데이터 삽입 
	 if(i > middle){
	 	for(int t = j; t <= n; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 } else{
	 	for(int t = i; t <= middle; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 }
	 //정렬된 배열을 삽입 
	 for(int t = m; t <= n; t++){
	 	a[t] = sorted[t];
	 }
	
} 

//배열을 나누는 함수. 
void mergeSort(int a[], int m, int n){
	//크기가 1보다 큰 경우. 
	if(m < n){
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	} 
	
	//1. 
	//0 7
	//0 3
	//4 7
	//0 3 7
	
	//2.
	//0 3
	//0 1
	//2 3
	//0 1 3
	
	//3.
	//4 7
	//4 5
	//6 7
	//4 5 7
	
	//4.
	//0 1
	//0 0
	//1 1
	//0 0 1
	
	//5. 
	//2 3
	//2 2
	//3 3
	//2 2 3
	
	//6.
	//4 5
	//4 4
	//5 5
	//4 4 5
	
	//7.
	//6 7
	//6 6
	//7 7
	//6 6 7
}

int main(void){
	mergeSort(array, 0, NUMBER -1);
	show();
	return 0;
}

