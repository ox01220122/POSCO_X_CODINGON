using namespace std;
#include <iostream>
#include <string>
namespace seoul {
	string number;
	string landmark;
}
namespace busan {
	string number;
	string landmark;
}
using namespace busan;
int main() {

	seoul::number = "02";
	seoul::landmark = "�溹��";
	number = "051";
	landmark = "���ȴ뱳";

	cout << "���� ������ȣ : " << seoul::number<<endl;
	cout << "���� ���帶ũ : " << seoul::landmark << endl;
	cout << "�λ� ������ȣ : " << number << endl;
	cout << "�λ� ���帶ũ : " << landmark << endl;



	return 0;
}