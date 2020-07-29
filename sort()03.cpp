#include <iostream> //cout�� ����ϰ� ����. 
#include <algorithm>

using namespace std;

class Student {
	public:
		string name; ��   
		int score;
		Student(string name, int score){
			this -> name = name;
			this -> score = score;
		}
		//���ı����� '������ ���� ����'.
		//������ �����ε�. �⺻�� �����ϰ� �ִ� �����ڸ� �������Ͽ� ����� ���� Ŭ������ ��� 
		//sort() �Լ��� ���������� ��ü���� ��, student01 < student02 ������ �ϱ� ���ؼ�. 
		//�Լ����� operator�� �ؾ� �����Ϸ��� ������ �����ε� �Լ��� ���� �νĽ�Ų��. 
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
		Student("������", 90),
		Student("�̻��", 93),
		Student("���ѿ�", 97),
		Student("������", 87),
		Student("������", 92)
	};
	
	//�̹� Student Ŭ�������� operator �Լ��� �����߱� ������ compare�� �ȳ־ �ȴ�. 
	sort(students, students + 5);
	show(students);
	
} 
