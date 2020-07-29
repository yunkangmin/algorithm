#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
				pair<string, pair<int, int> > b){
	//������ ���ٸ� 
	if(a.second.first == b.second.first){
		//��������� ���ƾ� ���̰� ���� �� 
		return a.second.second > b.second.second;
	}else{//������ ���� ����� ���ʿ� ���ĵȴ�. 
		return a.second.first > b.second.first;
	}
}

int main(void){
	//2�� ���. �����Ͱ� 3�� �̻��̸� ��Ȳ�� ���� Ŭ������ ����ϴ� ���� �� ���� �� �ִ�. 
	//2�������� ��� vector�� pair�� ����ϸ� ����. 
	vector<pair<string, pair<int, int> > >  v;
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(90, 19961222)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(97, 19930518)));
	v.push_back(pair<string, pair<int, int> >("���ѿ�", pair<int, int>(95, 19930203)));
	v.push_back(pair<string, pair<int, int> >("�̻��", pair<int, int>(90, 19921207)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int, int>(88, 19900302)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << ' ';
	} 
	
	return 0;
} 
