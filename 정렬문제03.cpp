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
	while(i <= j){ //�������� ���� ������ �ݺ�
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
	//�������� �־��� ��� �ð����⵵�� N * N�� ���´�.
	//�׷��� C++ �˰��� STL ���̺귯���� ����Ѵ�. N * logN�� �����Ѵ�.
	std::sort(data, data + number); 
	//quickSort(data, 0, number - 1);
	show();
	return 0;
}
