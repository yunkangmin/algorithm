# include <stdio.h>

//�������� 
//�ð����⵵�� ��������, �������İ� ���� O(N^2)�̴�. ������ ���� ȿ������.
//Ư�� ��ҿ��� �񱳸� �� �� �̹� �տ� �ִ� �͵��� ������ �Ǿ��ֱ� ������ ���ʿ� �ִ� 
//���� Ư����Ҹ� ���ؼ� �� Ư����Ұ� Ŭ���� �����ϴ� ����̴�.
// ([1], 10), 5, 8, 7, 6, 4, 3, 2, 9
// (1, [10], 5), 8, 7, 6, 4, 3, 2, 9
// (1, 5, [10], 8), 7, 6, 4, 3, 2, 9
// (1, 5, 8, [10], 7), 6, 4, 3, 2, 9
// (1, 5, 7, 8, [10], 6), 4, 3, 2, 9
//0~1 -> 0~2 -> 0~3 ...
// 2 3 4 5 6 7 8 9 10 1 ���� ���ڵ�� ���� ���� ���ĵ� ���¿����� ���������� ���� ȿ�����̴�. 
int main(void){
	int i, j, temp;
	//int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int array[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
	for(i = 0; i < 9; i++){
		//j������ �Ʒ� while ������ j--������ �ʿ��ϴ�. 
		j = i;
		//���ذ��� �ٷ� ���� ������ ũ�ٸ� -> �ʿ� �ÿ��� ���� �ٲ�. 
		while(array[j] > array[j + 1]){
			printf("%d \n", j);
			for(i = 0; i < 10; i++){
				printf("%d ", array[i]);
			
			} 
				printf("\n\n");
			//������ 
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp; 
			//���ذ��� �ٷ� ���� ������ ���� ������ �ݺ� 
			//i = 0
			//1 10 5 8 7 ...
			//i = 1
			//1 5 10 8 7 ...
			//i = 2
			//1 5 8 10 7 ...
			//i = 3
			//1 5 8 7 10 ...
			//i = 3
			//1 5 7 8 10 ...
			//...
		
			j--;
			
		}
	}
	//���ĵ� �迭(array)�� ����Ѵ�. 
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	
	} 
		printf("\n");
    int d = 0;
	d--;
	printf("%d ", d);
	printf("\n");
	printf("%d ", array[d]); //0�� ����. 
	printf("\n");
	return 0;
} 