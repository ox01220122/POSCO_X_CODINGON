using namespace std;
#include <iostream>
#include <string>
int main() {

	/*
	//1���� n������ �� ���ϱ�
	int a;
	int add_num = 0;
	cout << "����(���� ����)�� �Է��ϼ���" << endl;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		add_num += i;
	}
	cout << add_num;
	*/

	int a;
	int add_num = 0;
	cout << "����(���� ����)�� �Է��ϼ���" << endl;
	cin >> a;
	while (a!=0)
	{
		add_num += a;
		a--;
	}
	cout << add_num;





}