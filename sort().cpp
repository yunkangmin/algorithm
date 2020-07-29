#include <iostream> //cout을 사용하게 해줌. 
#include <algorithm>

using namespace std;

void show(int sort[]){
	for(int i = 0; i < 10; i++){
		cout << sort[i] << ' ';
	}
}

int main(void){
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	        //10은 가장 마지막 원소인 2를 말한다.(쉽게 말하면 데이터 개수를 +해주면된다.) 
			//컴퓨터는 데이터가 9 ~ 2까지 있다는 것을 알 수 있다. 
	sort(a, a + 10);
	show(a); 
	
	
} 
