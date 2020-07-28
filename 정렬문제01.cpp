#include <stdio.h>

//선택정렬 
//데이터 개수가 1000개므로 1001개까지 배열을 만든다.
//이유는 배열의 인덱스가 0부터 시작하기 때문이다. 
//즉, 인덱스를 0 ~ 1000까지 갖도록하게 하기 위함이다.  
int array[1001];

void show(int number){
	int i;
	for(i = 0; i < number; i++){
		printf("%d\n", array[i]);
	}
}

int main(void){
	int number, i, j, min, index, temp;
	//데이터의 개수를 입력받는다. 
	//&주소값에 데이터 저장. 
	scanf("%d", &number);
	//5번 반복해서 데이터를 입력받는다. 
	for(i = 0; i < number; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < number; i++){
		//절대값이 1000보다 작거나 같기때문에 1001로 설정한다. 
		//항상 들어오는 숫자보다 더 커야한다.  최소값으로 선택이 되기 위함이다. 
		min = 1001;
		for(j = i; j < number; j++){
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
	
	show(number);
}
