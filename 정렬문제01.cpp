#include <stdio.h>

//�������� 
//������ ������ 1000���Ƿ� 1001������ �迭�� �����.
//������ �迭�� �ε����� 0���� �����ϱ� �����̴�. 
//��, �ε����� 0 ~ 1000���� �������ϰ� �ϱ� �����̴�.  
int array[1001];

void show(int number){
	int i;
	for(i = 0; i < number; i++){
		printf("%d\n", array[i]);
	}
}

int main(void){
	int number, i, j, min, index, temp;
	//�������� ������ �Է¹޴´�. 
	//&�ּҰ��� ������ ����. 
	scanf("%d", &number);
	//5�� �ݺ��ؼ� �����͸� �Է¹޴´�. 
	for(i = 0; i < number; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < number; i++){
		//���밪�� 1000���� �۰ų� ���⶧���� 1001�� �����Ѵ�. 
		//�׻� ������ ���ں��� �� Ŀ���Ѵ�.  �ּҰ����� ������ �Ǳ� �����̴�. 
		min = 1001;
		for(j = i; j < number; j++){
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
	
	show(number);
}
