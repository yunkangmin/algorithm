#include <iostream> //cout을 사용하게 해줌. 
#include <algorithm>

using namespace std;

class Student {
	public:
		string name; ㅜ   
		int score;
		Student(string name, int score){
			this -> name = name;
			this -> score = score;
		}
		//정렬기준은 '점수가 작은 순서'.
		//연산자 오버로딩. 기본에 제공하고 있는 연산자를 재정의하여 사용자 정의 클래스로 사용 
		//sort() 함수가 내부적으로 객체연산 즉, student01 < student02 연산을 하기 위해서. 
		//함수명을 operator로 해야 컴파일러가 연산자 오버로드 함수인 것을 인식시킨다. 
		bool operator < (Student &student){
			return this->score < student.score;
		} 
};

void show(Student students[]){
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
}

int main(void){
	Student students[]= {
		Student("윤강민", 90),
		Student("이상욱", 93),
		Student("박한울", 97),
		Student("강종구", 87),
		Student("이태일", 92)
	};
	
	//이미 Student 클래스에서 operator 함수를 구현했기 때문에 compare는 안넣어도 된다. 
	sort(students, students + 5);
	show(students);
	
} 
