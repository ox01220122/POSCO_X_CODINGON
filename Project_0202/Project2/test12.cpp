//�ǽ�. �� ���� ���� �Ű������� �޾Ƽ� ���� ���� ū ���� ��ȯ�ϴ� �Լ� �ۼ�.

using namespace std;
#include <iostream>
#include <string>


int large_num(int a, int b, int c) {

	if (a > b && a > c)  //   c>a>b
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
	
}




int main() {

	int a, b, c;
	cout << "���� ������ �Է��ϼ���";
	cin >> a >> b >> c;

	cout << "���� ū �� :" << large_num(a, b, c) << endl;



	return 0;
}