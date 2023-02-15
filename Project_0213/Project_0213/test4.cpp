#include <iostream>
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
	virtual void print_Snack() {}
};
class Candy :public Snack {
	string taste; //��
public:
	Candy(string taste, string price, string product_name, string company) : Snack(price, product_name, company) {
		this->taste = taste;
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
	}
	void print_Snack() {
		cout << this->product_name << "��" << shape << "��� ���ݸ� �Դϴ�"<<endl;
	}
};
int main() {
	string price[4]; //����
	string product_name[4]; //��ǰ�̸�
	string company[4]; //���� ȸ�� 
	//Snack* snackBasket[4];
	for (int i = 0; i < 4; i++){
		cout << "����: ";
		cin >> price[i];
		cout << "��ǰ �̸�: ";
		cin >> product_name[i];
		cout << "���� ȸ��: ";
		cin >> company[i];

	}
	Snack*  snackBasket[4] = { new Candy("����",price[0],product_name[0],company[0]),new Candy("���",price[1],product_name[1],company[1]),new Chocolate("�׸�",price[2],product_name[2],company[2]) ,new Chocolate("����",price[3],product_name[3],company[3])};
	
	for (int i = 0; i < 4; i++){
		snackBasket[i]->print_Snack();
	}


	//���⼭ for�� ����ؼ� �ݳ��ϸ� ��Ÿ�� �������� 
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}


	return 0;
}