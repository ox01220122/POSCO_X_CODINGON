using namespace std;
#include <stdlib.h>
#include <iostream>
#include <string> 
class Character {
private:
	string name;
	int level;
	int item_num;
public:
	Character(string name) {
		this->name = name;
		level = 0;
		item_num = 0;
	}

	void name_chage(string name) {
		this->name = name;
		cout << "�ٲ� �̸��� : " << this->name << endl;}

	void level_up() { 
		level++;
		cout << endl<<"������ :" << level;}

	void add_item() {
		item_num++;
		cout << endl << "������ �ִ� ������ ���� :" << item_num<<endl;}

	void use_item() {
		if (this->item_num <=0){cout << "������ ���� 0 �Դϴ�";}
		else {
			item_num--;
			cout << endl << "������ �ִ� ������ ���� :" << item_num << endl;}
		}

	string get_name() { return name; }
	void set_name(string name) { this->name = name; }
};

int main() {
	string name_in;
	int number;

	cout << "ĳ������ �̸��� �Է��ϼ��� : ";
	cin >> name_in;
	Character g(name_in); 
	string name = g.get_name();
	g.set_name(name);
	
	cout << endl << "ĳ���͸� ��� �����Ͻðڽ��ϱ�?" << endl;
	cout << "0: ����" << endl;
	cout << "1�� �Է��ϸ�, �̸� �����ϵ���" << endl;
	cout << "2�� �Է��ϸ�, level up" << endl;
	cout << "3�� �Է��ϸ�, item ����" << endl;
	cout << "4�� �Է��ϸ�, item ���" << endl;

	while (true)
	{
		cout << endl << "ĳ���͸� ��� �����Ͻðڽ��ϱ�?" << endl;
		cin >> number;
		switch (number){
		case 0:
			exit(1);
		
		case 1: 
			cout << "�ٲ� �̸��� �Է��ϼ��� : ";
			cin >> name;
			g.name_chage(name);	
			break;

		case 2:
			cout << "������ �մϴ�" << endl;
			g.level_up();		
			break;

		case 3:
			cout << "�������� �ֿ����ϴ�" << endl;
			g.add_item();			
			break;

		case 4:
			cout << "�������� ����մϴ� " << endl;
			g.use_item();
			break;

		default:
			cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�" << endl << "�ٽ� �Է��ϼ��� " << endl;
			break;
		}
	}
	return 0;
}
