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
	if (start >= end){ //���Ұ� 1���� ��� �����Ű�� 
		return;
	}
	
	int key = start;   //Ű�� ù��° ���� => 1
	int i = start + 1; //���ʺ��� ū���� ã�� �� �ε���(Ű���� ����) => 10
	int j = end; //�����ʿ��� ���� �ε��� => 9
	int temp;
	
	while(i <= j){//�������� ������ ����  �ݺ�. 
	          //�迭�� ������ �Ѿ���ʵ��� �ϴ� ����. 
		while(i <= end && data[i] <= data[key]){ //Ű ������ ū ���� ���������� �ݺ�. 
			i++; 
		}  
		      // ������ �Ѿ�� �ʵ��� �ϴ� ����. 
		while(j > start && data[j] >= data[key] ){ //Ű ������ ���� ���� ���������� �ݺ�.  
			j--;
		}
		
		if(i > j){// ���� ������ ���¸� Ű ���� ��ü 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{ // �������� �ʾҴٸ� i�� j�� ��ü 
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	//�������� �� �����
	//j �ε������� ���� Ű���� ��ġ�Ѵ�. 
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void){
	quickSort(data, 0, number - 1);
	show();
	return 0;
	
} 
