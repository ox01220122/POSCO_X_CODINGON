using namespace std;
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
class Person {
protected:
	string name;
	static int static_var;  //int�� ������ static������ ������ ��  (��ü�� �������̴� )
	//static �� �Ϲ�Ŭ���� �����̴� 
	static int count; //main�Լ��� ����� ��� ���� ���� ���� 
	
public:
	static int get_count() {
		return count;
	}

	static void static_method() {
		//name = 
		//name = "�ƹ���";
		//set_name("�ƹ���"); // static�޼ҵ� �ȿ����� �Ϲ� ����� ������ �� ����
		cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
	}
	static int get_var() {  //Person::get_var�� �������� ���� static�� ���� 
		return 0;
	}
	Person() { //��ü�� ���� �� �����ڰ� ȣ��ȴ� 
		this->name = "�ƹ���";
		count++;  //��� �� ���� ���� 
	}
	virtual ~Person() {
		cout << "����� �Ҹ��� �Դϴ�" << endl;
		count--; //�����Լ������� ī���Ϳ� �����ϸ� static int count�� �����ϴ� �� 
	}
	virtual void info() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ�" << endl;
	}
	virtual void test() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ��׽�Ʈ" << endl;
	}

	void set_name(string name) { //name�� setter
		this->name = name;
	}
	string get_name() {//name�� getter
		return name;
	}
};
class Student :public Person {
private:
	string stu_id;
public:
	~Student() {
		cout << "�л��� �Ҹ��� �Դϴ�" << endl;
	}
	void info() {
		cout << "�л� �Դϴ�" << endl;
	}
	void test() {
		cout << "�л��� test�Լ�" << endl;
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "������ �Ҹ����Դϴ�" << endl;
	}
	void info() {
		cout << "�����Դϴ�" << endl;
	}
};

int Person::static_var = 0;
int Person::count = 0;  //���⼭ �ʱ�ȭ ������Ѵ� 

int main() {
	//static����� ��� ��ü�� �ϳ��� ������ �����Ѵ� 
	//name�� static����� �ƴϴ� -> ��ü���� ������ ���� �Ҵ�ȴ� 
	//static_var�� static����̴� -> ��� ��ü�� �ϳ��� ������ �����Ѵ� 

	Person p; //�׳� ������ ��ü�� ������ ������ �޸𸮸� ������ �ʴ´� 
	p.info();
	//Person.info();
	Person::static_method(); //��ü�� �������̹Ƿ� ��ü�� �������� �ʾƵ� ���ٰ���
	//Ŭ������ Ÿ�� �� �� �ִ� (���� ��ü�ε� �����ϴ�)



	Person p1;
	p1.set_name("ȫ�浿");
	cout << p.get_count() << " " << p1.get_count() << " " << Person::get_count() << endl;

	Person p2;
	cout << p.get_count() << " " << p1.get_count() << " " << Person::get_count() << endl;

	cout << Person::get_count() <<"��" << endl;


	Person* p3[5];
	for (int i = 0; i < 5; i++)
	{
		p3[i] = new Person();
	}
	cout << Person::get_count() << "��" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		delete p3[i];
	}
	cout << Person::get_count() << "��" << endl;
	//�ݳ��Ǹ鼭 �Ҹ��ڰ� ȣ��ȴ�. �Ҹ��ڿ� count-- ������ �پ��� 



	//���⼭ ���� vector�� ����Ѵ�-------------------------------------------------
	vector<Person*> persons = { new Person(),new Person() };
	cout << Person::get_count() << "��" << endl;

	persons.push_back(new Person);
	cout << Person::get_count() << "��" << endl;

	int size = persons.size();
	for (int i = 0; i < size; i++){
		delete persons.at(i);
	}
	for (int i = 0; i < size; i++){
		persons.pop_back();
	}




	return 0;
}