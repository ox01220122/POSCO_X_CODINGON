using namespace std;
#include <iostream>
#include <string>

int main() {

	/*
	int age;
	cout << "���̸� �Է��ϼ���";
	cin >> age;

	if (age >= 1 && age <= 7)
		cout << "����";
	else if (age >= 8 && age <= 13)
		cout << "���л�";
	else if (age >= 17 && age <= 19)
		cout << "����л�";
	else if (age >= 20 && age <= 200)
		cout << "����";
	else
		cout << "���̰� �ʹ� �����ϴ�..!";
		*/



	int age;
	cout << "���̸� �Է��ϼ���";
	cin >> age;
	if (age <= 0)
		cout << "������ ������ϴ�" << endl;
	else
		if (age >= 1 && age <= 7)
			cout << "����";
		else if (age >= 8 && age <= 13)
			cout << "���л�";
		else if (age >= 17 && age <= 19)
			cout << "����л�";
		else if (age >= 20 && age <= 200)
			cout << "����";
		else
			cout << "���̰� �ʹ� �����ϴ�..!";













}