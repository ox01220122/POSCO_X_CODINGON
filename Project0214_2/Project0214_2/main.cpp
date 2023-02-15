#include <iostream>
#include <vector>
#include <string>
#include "Snack.h"
#include "Candy.h"
#include "Chocolate.h";
using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main() {
	string price; //����
	string product_name; //��ǰ�̸�
	string company; //���� ȸ�� 
	string taste;//��
	string shape;//���
	int number;
	int size;

	vector<Snack*> snacks = {};

	while (true) {
		cout << "���� �ٱ��Ͽ� �߰��� ������ ������(1: ����, 2: ���ݸ�, 0 : ����)" << endl;
		cin >> number;
		if (number >= 3 || number < 0) {
			cout << "0~2������ ���ڸ� �Է��ϼ��� : " << endl;
			continue;
		}
		else if (number == 0) {
			cout << "���� �ٱ��Ͽ� ��� ������ ������" << Snack::get_count() << "�� �Դϴ�" << endl;
			cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!" << endl;
			break;
		}
		cout << "����: ";
		cin >> price;
		cout << "��ǰ �̸�: ";
		cin >> product_name;
		cout << "���� ȸ��: ";
		cin >> company;
		if (number == 1) {
			cout << "��: ";
			cin >> taste;
			snacks.push_back(new Candy(taste, price, product_name, company));
		}
		else if (number == 2) {
			cout << "���: ";
			cin >> shape;
			snacks.push_back(new Chocolate(shape, price, product_name, company));
		}
	}
	size = Snack::get_count();
	for (Snack* s : snacks) { s->print_Snack(); }
	//for (int i = 0; i < size; i++) {snacks.at(i)->print_Snack();}

	for (Snack* s : snacks) { delete s; }
	//for (int i = 0; i < size; i++) {delete snacks.at(i);}
	for (int i = 0; i < size; i++) { snacks.pop_back(); }
	snacks.clear();



	return 0;
}