#include <iostream>
using namespace std;
class Person {
protected:
	string name;
	string position;
public:
	void test() {
		cout << "Person�� �׽�Ʈ �Լ� �Դϴ�\n";
	}
	string get_position() { return position; }
	/*
	void get_position2() {
		cout<< position;
	}
	*/
};
class Student : public Person {
	string stu_id;
public:
	Student(string position) {
		this->position = position;
	}

	void test() {
		cout << "Student�� �׽�Ʈ �Լ� �Դϴ�\n";
	}
	void aaa() {}
};

class Instructor : public Person {
	string stu_id;
public:
	void aaa() {}
	Instructor(string position) {
		this->position = position;
	}
};


int main() {

	//Person p;
	Person p = Person(); 
	p.test();
	//Person p2 = Student();//�θ�Ŭ������ �ڽ�(����)Ŭ������ �ν��Ͻ��� ���� �� �ִ� 
	//��� ������ ���ִ� ���� ������� �����ϱ� ���ؼ� �迭�� �����.�� ������ ���ִ� ����� ��ġ�� �ٸ���
	//�� ��ġ�� �ִ� ������� �ѹ��� ���� �; �θ�Ŭ������ �ڽ� Ŭ������ �ν��Ͻ��� ����� �� 


	//p2.test(); //�θ� test�� �־ �����ϴ� �� �̴� 
	//p2.aaa(); 

	/*
	Person* p3 = new Student(); //�������� �޸𸮸� �Ҵ��� �� new���, StudentŬ������ ������� ��ü�� �ּҸ� �����´�
	p3->test(); //�����ʹ� ������ ���� �޶����� -> �� ���
	*/

	Person p3[4] = { Instructor("����"), Student("�л�1"), Student("�л�2") ,Student("�л�3")};	
	for (int i = 0; i < 4; i++){ cout << p3[i].get_position() << endl; }


	return 0;
}