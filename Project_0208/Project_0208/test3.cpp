using namespace std;
#include <stdlib.h>
#include <iostream>
#include <string> 
struct Pos{//����Ʈ�� public�̰� calss�� ����Ʈ�� private�̴� (����ü�� ���� ������ �⺻������ ���� �ʴ´�)
	int x;
	int y;
};


class Cat{   //�繰�� ���� ������ ǥ���� �� �ִ� (�ǻ�Ȱ�� �����ϴ°��� ���α׷��������� �����Ѵ� )
private: //���� ����(����)  -> Ŭ���� �������� ����� �� �ִ� 
	string name;
	string breed;
	int age = 0;


public:
	//Ŭ������ ������ ������ �� �����Ǵ� �Լ��� ������  (�������� ������ �����ϸ� public�ȿ� �־�� �Ѵ� )
	//�����ڴ� ������ �־ �ȴ� 
	Cat() {
		name = "��";
		breed = "��";
		age = 1;
	}; 

	//�����ڵ� �Լ��� ������ ������ �� ����. ��, �Ű������� ���� �ϸ� �ȵȴ� (������� �ҷ����� ��)
	Cat(string name, string breed) { //�̰� ����� �������ʹ� �ڵ����� �ȸ�������� 
		this->name = name;   //this����ϸ� �� Ŭ���� ��ü�� �ǹ��Ѵ� (Ŭ���� �ٷ� ������ �ִ� name�� �ǹ��Ѵ� )
		this->breed = breed;
		age = 1;
		//cout << name << endl;
	};

	void mew() { //�޼ҵ�
		cout << "�߿�" << endl;
	}
	void eat() {
		cout << "������ �Դ´�" << endl;
	}

	/*
	~Cat() {
		cout << "Cat�� �ν��Ͻ� �Ҹ�" << endl;
	}; //Ŭ������ ������ �Ҹ��� �� �����Ǵ� �Լ��� �Ҹ��� 
	*/

	//�� �Լ��� ȣ���Ѵٴ� ���� �ܺο��� ������ �����´� 
	//���� name�� class�ȿ��� ������ ���� name�̰� ����ϱ� ���� return �����


	//getter
	string get_name() {return name;}
	string get_breed() { return breed;}
	int get_age() { return age;}
	auto get_age_arddress() { return &age; }


	//setter
	void set_name(string name) {this->name = name;}
	void set_breed(string breed) {this->breed = breed;}
	void set_age(int age) {this->age = age;}
};


//CatŬ������ �ν��Ͻ��� ����
//c�� ��ü ��� �и��ؼ� �����ϱ⵵ �Ѵ� 
int main() {
	//Pos p = { 2,6 }; //Ŭ������ �̷� ����� �ȵȴ� 
	
	//��ü�� ���� �����ڰ� ���� �ȴ� 
	//�Ű������� �ִ� �����ڸ� ����ϱ� ���� ���ڿ��� �־��־��� 
	Cat c("����","�丣�þ�"); //������ cat�� ��ü��(Ŭ���� Ʋ�� �̿��� ���� ������ ��ü(�ν��Ͻ�))
	//Cat c = Cat("����");  //�����ڸ� ȣ���Ѱ���(���� �ڵ带 Ǯ� �� ��)
	//�����ڴ� �ѹ��� ����ȴ� 

	string name = c.get_name();
	string breed = c.get_breed();
	int *age= c.get_age_arddress();


	//����, �Լ��� ������ ��ü�� Ÿ�� �����Ѵ�
	cout << name << " " << breed <<" " << *age << endl;
	c.mew();


	//age = 5;
	cout << name << " " << breed << " " << *age << endl;
	//--------------------------------------------------------

	//���� �ȵȴ�
	c.set_name("�ٵ���");
	c.set_name("�������");
	c.set_age(7);
	//cout << name << " " << breed << " " << age << endl;

	//getter�� �־���� setter���� �ٲ� ���� ���� ��� �̷��� ����ϴ���? 
	name = c.get_name();
	breed = c.get_breed();
	//age = c.get_age();

	cout << name << " " << breed << " " << *age << endl;


	//��ü�� ���� �����ڰ� ���� �ȴ� 
	//c2.age = 3;

	//cout << c.age << " " << c2.age << endl;


	return 0;
}