#include <iostream>
#include <string>

int main() {
	/*

	int score;
	std::cout << "������ �Է��ϼ���";
	std::cin >> score;
	char grade;

	switch (score/10)
	{
	case 9:
		std::cout << "���� : A";
		grade = 'A';
		break;
	case 8:
		std::cout << "���� : B";
		grade = 'B';
		break;
	case 7:
		std::cout << "���� : C";
		grade = 'C';
		break;
	case 6:
		std::cout << "���� : D";
		grade = 'D';
		break;
	case 5:case 4:case 3:case 2:case 1:case 0:
		std::cout << "���� F";
		grade = 'F';
		break;
	default:
		std::cout << "�߸� �Է�";
		break;
	}


	grade == 'F' ? std::cout << "\n�����" : std::cout << "\n�����߾��";


	//���� ���׿����ڿ� ����
	if (grade == 'F')
		std::cout << "�����";
	else
		std::cout << "�����߾��";
		*/



	//Ȧ���� ¦�� ���ϱ� 
	int num;
	std::cout << "���ڸ� �Է��ϼ���";
	std::cin >> num;
	if (num%2==0)
		std::cout << "¦���Դϴ�";
	else
		std::cout << "Ȧ���Դϴ�";


	(num % 2 == 0) ? std::cout << "¦���Դϴ�" : std::cout << "Ȧ���Դϴ�";






}