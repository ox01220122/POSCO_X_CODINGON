#include <iostream>
using namespace std;
//�ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)
class Person {
	int age;
	int name;
	int* p = new int[3]; //Ŭ���� ������ ���� �޸𸮸� ����ϸ� �Ҹ��ڿ��� �ݳ��ϴ� �ڵ带 ���� 
public:
	Person(){ cout << "Person ������ ����" << endl; }//������
	Person(string name) { cout << "������ ����" << endl; }

	void test() { cout << "test" << endl; } //�޼ҵ�

	~Person() { //�ڵ����� ȣ���� �ȴ� 
		delete p;
		cout << "Person �Ҹ��� ����" << endl;
	} //�Ҹ���
};
class Student : public Person {
public:
	Student() {
		cout << "Student ������ ����" << endl;
	}
	~Student() {
		cout << "Student �Ҹ��� ����" << endl;
	}
};

int main() {
	/*
	Person p("aaa");
	p.test();
	Person p2;
	//p.~Person();  ->������ �׷��� main �ȿ��� ȣ���� �ϸ� �Ҹ��ڰ� �ι� ȣ�� �ȴ� (�ݳ��� �޸� ��� ����)
	*/
	Person* p1 = new Person; //Person�� �ν��Ͻ���  
	delete p1; //p1�� ���� �Ҹ��ڰ� �� ������ ȣ���� �ȴ� 
	Student s;



	return 0;
}