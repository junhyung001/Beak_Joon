/*
	1��и� -> ��� ���
	2��и� -> ���� ���
	3��и� -> ���� ����
	4��и� -> ��� ����
*/
#include<iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	
	if (a > 0 && b > 0) {
		cout << "1";
	}
	else if (a < 0 && b > 0) {
		cout << "2";
	}
	else if (a < 0 && b < 0) {
		cout << "3";
	}
	else if (a > 0 && b < 0) {
		cout << "4";
	}
}