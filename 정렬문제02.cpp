#include <stdio.h>

//���� =>  https://www.acmicpc.net/problem/2752

//�������� 
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
		//���밪�� 1000���� �۰ų� ���⶧���� 1000001�� �����Ѵ�. 
		//�׻� ������ ���ں��� �� Ŀ���Ѵ�.  �ּҰ����� ������ �Ǳ� �����̴�. 
		min = 1000001;
		for(j = i; j < 3; j++){
			//���� ��Ұ� �ּҰ��̶�� 
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
