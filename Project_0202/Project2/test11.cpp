//�ǽ�. �ϳ��� ������ �Ű������� �޾Ƽ� �� ���� ¦���̸� "¦��", Ȧ���̸� "Ȧ��" ��� ����ϴ� �Լ� �ۼ�
using namespace std;
#include <iostream>
#include <string>

std::string even_odd_numbers(int num) {
	return (num % 2 == 0) ? "¦��" : "Ȧ��";
}

int main() {
	int num;
	cout << "���ڸ� �Է��ϼ���";
	cin >> num;
	string a = even_odd_numbers(num);
	cout << a << endl;

	return 0;
}