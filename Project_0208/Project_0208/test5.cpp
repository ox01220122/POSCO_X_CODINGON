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

	void name_chage(string name) { //�̸� �ٲ��ֱ� 
		this->name = name;
	}
	void level_up() { //������
		level++;
		//this->level = level+1;
		cout << endl<<"������ :" << level;
	}
	void add_item() { //������ +1  (���� ������ �� �޾ƿ���)
		item_num++;
		//this->item_num = item_num+1;
		cout << endl << "������ �ִ� ������ ���� :" << item_num<<endl;
	}
	void use_item() { //������ -1
		if (this->item_num <=0)
		{
			cout << "������ ���� 0 �Դϴ�";
		}
		else {
			item_num--;
			//this->item_num = item_num - 1;
			cout << endl << "������ �ִ� ������ ���� :" << item_num << endl;
		}

	}



	//getter
	int get_level() { return level; }
	int get_item_num() { return item_num;}
	string get_name() { return name; }

	//setter
	void set_level(int level) { this->level = level; } //���� ����
	void set_item_num(int item_num) { this->item_num = item_num; } //������ �� ����
	void set_name(string name) { this->name = name;}

	


};
int main() {
	string name_in;
	int number;

	cout << "ĳ������ �̸��� �Է��ϼ��� : ";
	cin >> name_in;
	Character g(name_in); //�����ڿ��� �̸�, ����, �����ۼ� �־����� 


	string name = g.get_name();
	int level = g.get_level();
	int item_num = g.get_item_num();

	g.set_name(name);
	g.set_level(level);
	g.set_item_num(item_num);
	
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

		switch (number)
		{
		case 0:
			exit(1); //����
		case 1://�̸� ���� 
			name = g.get_name();
			cout << "�ٲ� �̸��� �Է��ϼ��� : ";
			cin >> name;
			g.name_chage(name);
			cout << "�ٲ� �̸��� " << g.get_name() << "�Դϴ�" << endl;
			break;
		case 2://���� ��
			//level = g.get_level();
			cout << "������ �մϴ�" << endl;
			g.level_up();		
			break;
		case 3:
			//item_num = g.get_item_num();
			cout << "�������� �ֿ����ϴ�" << endl;
			g.add_item();			
			break;
		case 4:
			//item_num = g.get_item_num();
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
