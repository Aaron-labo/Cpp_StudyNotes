#include<iostream>
using namespace std;

int main()
{
	//��������
	int n;
	cout << "����������ĳ��ȣ�";
	cin >> n;
	int* lon = new int[n];
	cout << "������һ���������飺";
	for (int i = 0; i < n; i++) {
		cin >> lon[i];
	}

	//���ݸ߶�ͳ�ƶ�Ӧ����
	int maxArea = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		int j = i;
		while (++j < n && lon[j] > lon[i]) {
			cnt++;
		}
		j = i;
		while (--j >= 0 && lon[j] > lon[i]) {
			cnt++;
		}
		maxArea = (cnt * lon[i]) > maxArea ? (cnt * lon[i]) : maxArea;
	}

	cout << "��������ǣ�" << maxArea << endl;

	delete []lon;

	return 0;
}