#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
				pair<string, pair<int, int> > b){
	//점수가 같다면 
	if(a.second.first == b.second.first){
		//생년월일이 많아야 나이가 적은 것 
		return a.second.second > b.second.second;
	}else{//점수가 높은 사람이 앞쪽에 정렬된다. 
		return a.second.first > b.second.first;
	}
}

int main(void){
	//2중 페어. 데이터가 3개 이상이면 상황에 따라서 클래스를 사용하는 것이 더 나을 수 있다. 
	//2개이하인 경우 vector와 pair를 사용하면 좋다. 
	vector<pair<string, pair<int, int> > >  v;
	v.push_back(pair<string, pair<int, int> >("나동빈", pair<int, int>(90, 19961222)));
	v.push_back(pair<string, pair<int, int> >("이태일", pair<int, int>(97, 19930518)));
	v.push_back(pair<string, pair<int, int> >("박한울", pair<int, int>(95, 19930203)));
	v.push_back(pair<string, pair<int, int> >("이상욱", pair<int, int>(90, 19921207)));
	v.push_back(pair<string, pair<int, int> >("강종구", pair<int, int>(88, 19900302)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << ' ';
	} 
	
	return 0;
} 
