using namespace std;
#include <iostream>
#include <string>
int main() {



	int num;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}



}