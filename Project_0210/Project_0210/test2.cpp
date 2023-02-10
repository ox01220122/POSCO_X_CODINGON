#include <iostream>
using namespace std;
class Snack {
protected:
	string price ; //����
	string product_name ; //��ǰ�̸�
	string company; //����ȸ��
	Snack(string price, string product_name, string company) {
		this->price = price;
		this->product_name = product_name;
		this->company = company;
	}

public:
	string get_product_name() { return product_name; } 

};
class Cnady :public Snack {
	string taste; //��
public:
	Cnady(string taste, string price, string product_name, string company) : Snack(price, product_name, company) {
		this->taste = taste;
	}	
};
class Chocolate :public Snack {
	string shape;//���
public:
	Chocolate(string taste, string price, string product_name, string company) : Snack(price, product_name, company) {
		this->shape = shape;
	}
};
int main() {

	string price; //����
	string product_name; //��ǰ�̸�
	string company;
	for (int i = 0; i < 4; i++)
	{
		cout << "����: ";
		cin >> price;
		cout << "��ǰ�̸�: ";
		cin >> product_name;
		cout << "����ȸ��: ";
		cin >> company;
		Snack s[4] = { Cnady("����",price,product_name,company), Cnady("���",price,product_name,company),Chocolate("�׸�",price,product_name,company) ,Chocolate("����",price,product_name,company) };
		cout << s[i].get_product_name()<<endl;
	}

	return 0;
}