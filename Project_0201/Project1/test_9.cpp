using namespace std;
#include <iostream>
#include <string>
int main() {


	int num1, num2;
	char a;
	std::cout << "�ΰ��� ���ڸ� �Է��ϼ���";
	std::cin >> num1 >> num2;
	std::cout << "�����ڸ� �Է��ϼ���";
	std::cin >> a;

	switch (a)
	{
	case 43:
		std::cout << num1 + num2;
		break;
	case 45:
		std::cout << num1 - num2;
		break;
	case 42:
		std::cout << num1 * num2;
		break;
	case 47:
		std::cout << "�� : " << num1 / num2 << "������ : " << num1 % num2;
		break;



	default:
		std::cout << "�����ڸ� �߸� �Է��߽��ϴ� : ";
		break;
	}



}
