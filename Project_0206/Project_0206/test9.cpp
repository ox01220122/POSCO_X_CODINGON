using namespace std;
#include <iostream>
#include <string>
#include <vector>
int main() {

	int num;
	float avg = 0.;
	cout << "�л� ���� �Է��ϼ��� : ";
	cin >> num;

	vector <int> vec(num);
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "��° �л��� ������ �Է��ϼ��� : " << endl;
		cin >> vec[i];
		avg += vec[i];
	}

	avg = avg / (float)num;
	cout << "��� : " << avg << endl;

}