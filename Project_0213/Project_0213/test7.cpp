#include <iostream>
#include <vector>
using namespace std;
class Snack {
protected:
	string price; //����
	string product_name; //��ǰ�̸�
	string company; //����ȸ��
	Snack(string price, string product_name, string company) {
		this->price = price;
		this->product_name = product_name;
		this->company = company;
	}
public:
	static int count;
	virtual void print_Snack() {}
	static int get_count() {
		return count;
	}
};
class Candy :public Snack {
	string taste; //��
public:
	Candy(string taste, string price, string product_name, string company) : Snack(price, product_name, company) {
		this->taste = taste;
		count++;
	}
	void print_Snack() {
		cout << this->product_name << "��" << taste << "�� �����Դϴ�" << endl;
	}
};
class Chocolate :public Snack {
	string shape;//���
public:
	Chocolate(string shape, string price, string product_name, string company) : Snack(price, product_name, company) {
		this->shape = shape;
		count++;
	}
	void print_Snack() {
		cout << this->product_name << "��" << shape << "��� ���ݸ� �Դϴ�" << endl;
	}
};

int Snack::count = 0;

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
	for (Snack* s : snacks) {s->print_Snack();}			
	//for (int i = 0; i < size; i++) {snacks.at(i)->print_Snack();}
		
	for (Snack* s : snacks) { delete s; }
	//for (int i = 0; i < size; i++) {delete snacks.at(i);}
	for (int i = 0; i < size; i++) {snacks.pop_back();}
	snacks.clear();
	


	return 0;
}