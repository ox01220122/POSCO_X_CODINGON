#include "Person.h"

int Person::count = 0;

int Person::get_count() {
	return count;
}
void Person::static_method() {
	cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
}
Person::Person() {
	this->name = "�ƹ���";
}
Person::~Person() {
	cout << "����� �Ҹ��� �Դϴ�" << endl;
}
void Person::info() {
	cout << "����Դϴ�" << endl;
}
void Person::test() {
	cout << "����Դϴ��׽�Ʈ" << endl;
}
void Person::set_name(string name) {
	this->name = name;
}
string Person::get_name() {
	return name;
}