using namespace std;
#include <iostream>
#include <string>
int main() {

	int num;
	float avg=0.;
	cout << "�л� ���� �Է��ϼ��� : ";
	cin >> num;

	int* num_arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "��° �л��� ������ �Է��ϼ��� : " << endl;
		cin >> num_arr[i];
		avg += num_arr[i];
	}

	avg = avg / (float)num;
	cout << "��� : " << avg << endl;

	delete[] num_arr;

}