#include <stdio.h>

//����� �����ؾ� �Ѵ�. array �迭����� ���ȣ �ȿ� ������ ����ϱ� ����. 
const int NUMBER = 8;
//���� �迭�� �ݵ�� ���� ������ ����. 
//�ܰ躰 ���� ���� �� �߰����� �迭�� �ʿ��ѵ� �� ���� 
//�ʿ��� ������ �迭�� �����ϸ� ��ȿ�����̱� �����̴�. 
int sorted[8];
int array[NUMBER] = {7, 6, 5, 8, 3, 5, 9, 1};

void show(){
	for(int i = 0; i < NUMBER; i++){
		printf("%d ", array[i]);
	}
}

//�κй迭�� �̿��� ���Ӱ� ���ĵ� �迭�� ����� �Լ�. 
void merge(int a[], int m, int middle, int n){
	int i = m;
	int j = middle + 1;
	int k = m;
	//���� ������� �迭�� ����
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
	 //���� ������ ���� 
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
	 //���ĵ� �迭�� ���� 
	 for(int t = m; t <= n; t++){
	 	a[t] = sorted[t];
	 }
	
} 

//�迭�� ������ �Լ�. 
void mergeSort(int a[], int m, int n){
	//ũ�Ⱑ 1���� ū ���. 
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

