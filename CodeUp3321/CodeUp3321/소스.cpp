#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//�������� ���� 
bool compare(int a, int b) {
	return a > b;
}
int main() {
	int topingNum;//������ ����
	int doughKcal;//���� ����
	int topingMoney, doughMoney; //���� ����, ���� ����
	int num;//������ �ޱ� ���� �ӽ� ����
	double maxKcal; //�ְ� ���� ����

	//�� �ޱ�
	cin >> topingNum;
	cin >> doughMoney;
	cin >> topingMoney;
	cin >> doughKcal;

	int total = doughKcal; //���� Į�θ� ����
	double tempKcal;//�񱳸� ���� ����

	vector<int> toping; //���� ����

	for (int i = 0; i < topingNum; i++) {
		cin >> num;
		toping.push_back(num);
	}

	sort(toping.begin(), toping.end(), compare);//������������ ����

	maxKcal = (double)doughKcal / doughMoney; //�⺻ �ְ� ����, ���츸


	for (int i = 0; i < toping.size(); i++) {
		total += toping[i];//i��°�� ū �� total �� ���ϱ�
		tempKcal = (double)total / (doughMoney + topingMoney * (i + 1));//���� ���
		//printf("%lf\n",tempKcal);
		if (maxKcal < tempKcal) {//�̶������� �ְ������� ũ�� �ٲ�
			maxKcal = tempKcal;
		}
	}
	printf("%d", (int)maxKcal); //�Ҽ��� ���ϴ� ������ ���
}