#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//내림차순 정렬 
bool compare(int a, int b) {
	return a > b;
}
int main() {
	int topingNum;//토핑의 개수
	int doughKcal;//도우 열량
	int topingMoney, doughMoney; //토핑 가격, 도우 가격
	int num;//토핑을 받기 위한 임시 변수
	double maxKcal; //최고 열량 변수

	//값 받기
	cin >> topingNum;
	cin >> doughMoney;
	cin >> topingMoney;
	cin >> doughKcal;

	int total = doughKcal; //도우 칼로리 포함
	double tempKcal;//비교를 위한 변수

	vector<int> toping; //토핑 벡터

	for (int i = 0; i < topingNum; i++) {
		cin >> num;
		toping.push_back(num);
	}

	sort(toping.begin(), toping.end(), compare);//내림차순으로 정렬

	maxKcal = (double)doughKcal / doughMoney; //기본 최고 열량, 도우만


	for (int i = 0; i < toping.size(); i++) {
		total += toping[i];//i번째로 큰 수 total 에 더하기
		tempKcal = (double)total / (doughMoney + topingMoney * (i + 1));//열량 계산
		//printf("%lf\n",tempKcal);
		if (maxKcal < tempKcal) {//이때까지의 최고열량보다 크면 바꿈
			maxKcal = tempKcal;
		}
	}
	printf("%d", (int)maxKcal); //소수점 이하는 버리고 출력
}