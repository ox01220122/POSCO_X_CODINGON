using namespace std;
#include <iostream>
struct Rectangle  //����ü�� Ŭ������ �Ѱ��� �ٸ� ���� �ִ� 
{
	float weight;
	float height;
};

int main() {
	Rectangle r;
	float a = 0.;
	cout << "����, ���� ���̸� �Է��ϼ���"<<endl;
	cout << "���� : ";
	cin >> r.weight;
	cout << "���� : ";
	cin >> r.height;
	a = r.weight * r.height;
	cout << "���� : " << a << endl;
	return 0;
}