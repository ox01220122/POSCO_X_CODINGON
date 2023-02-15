#include <iostream>
#include <vector>
#include <string>
#include "Chocolate.h";
#include "Snack.h"
using std::string;
using std::cout;
using std::endl;

Chocolate::Chocolate(string shape, string price, string product_name, string company) : Chocolate::Snack(price, product_name, company) {
	this->shape = shape;
	count++;
}
void Chocolate::print_Snack() {
	cout << this->product_name << "��" << shape << "��� ���ݸ� �Դϴ�" << endl;
}