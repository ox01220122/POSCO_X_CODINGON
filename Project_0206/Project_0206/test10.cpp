using namespace std;
#include <iostream>
#include <string>
#include <vector>
int main() {

	int number=1;
	int add_ = 0;
	vector <int> add_num;

	while (number!=0)
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> number;
		add_num.push_back(number);
	}

	for (int i = 0; i < add_num.size(); i++)
		add_ += add_num.at(i);

	cout << "����ڰ� �Է��� ���� ���� : " << add_ << endl;
}