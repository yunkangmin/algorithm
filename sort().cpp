#include <iostream> //cout�� ����ϰ� ����. 
#include <algorithm>

using namespace std;

void show(int sort[]){
	for(int i = 0; i < 10; i++){
		cout << sort[i] << ' ';
	}
}

int main(void){
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	        //10�� ���� ������ ������ 2�� ���Ѵ�.(���� ���ϸ� ������ ������ +���ָ�ȴ�.) 
			//��ǻ�ʹ� �����Ͱ� 9 ~ 2���� �ִٴ� ���� �� �� �ִ�. 
	sort(a, a + 10);
	show(a); 
	
	
} 
