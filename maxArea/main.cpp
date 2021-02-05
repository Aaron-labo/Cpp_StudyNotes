#include<iostream>
using namespace std;

int main()
{
	//输入数组
	int n;
	cout << "请输入数组的长度：";
	cin >> n;
	int* lon = new int[n];
	cout << "请输入一串非零数组：";
	for (int i = 0; i < n; i++) {
		cin >> lon[i];
	}

	//根据高度统计对应长度
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

	cout << "面积最大的是：" << maxArea << endl;

	delete []lon;

	return 0;
}