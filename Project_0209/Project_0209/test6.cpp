#include <iostream>
using namespace std;
class Student {
protected:
	string name;
	string univ;
	int age;
	string stu_id;

	void lunch() {
		cout << "������ �н�" << endl;
	}
};

class Kim :public Student {
public:
	Kim() {
		this->name = "�����1";
		this->univ = "�б�1";
		this->age = 20;
		this->stu_id = 1234;
	}
	void lunch() {
		cout << "������ �谡�� ���" << endl;
	}
};
class Baek :public Student {
public:
	Baek() {
		this->name = "�����2";
		this->univ = "�б�2";
		this->age = 21;
		this->stu_id = 4321;
	}
	void lunch() {
		cout << "������ ������ ����" << endl;
	}
};
int main() {

	Kim k;
	cout << "KIMŬ���� : ";
	k.lunch();

	Baek b;
	cout << "baekŬ���� : ";
	b.lunch();

	return 0;
}