#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	string gender;
	int age = 0;
private:
public:
	Person() { //�θ�Ŭ�������� �ΰ� �̻��� �����ڸ� ����� �ڽ�Ŭ������ ȣ��ɶ� �θ�Ŭ���� �⺻�����ڰ� ȣ��
		cout << "Person ������ �����" << endl;
	}
	Person(string name) {
		this->name = name;
		cout << "Person ������222 �����" << endl;
	}

	void talk() {
		gender = "����";
		cout << "���ϱ�\n";
	}
	void eay() {
		cout << "�Ա�\n";
	}
	void sleep() {
		cout << "���ڱ�\n";
	}
};
class Student : public Person { //�ڽ�Ŭ������ �����ں��� �θ�Ŭ������ �����ڰ� ���� ������ �ȴ� 
	string stu_id;
public:
	Student() : Person("aaa") { //�ڽ�Ŭ������ �����ڿ��� �θ�Ŭ������ �����ڸ� �������� �� �ִ� 
		cout << "Student ������ �����" << endl;
	}

	Student(string stu_id) {
		this->stu_id = stu_id;
	}

	void study() {
		name = "�л�1";
		age = 20;
		cout << "�����ϱ�\n";
	}
	void test() {
	}
};
//��Ӷ� �ۺ��� �Ѱ踦 �������ش� 
//���ȼ�  pricate > protected > public
//����� ����Ʈ���� private�̴� 
int main() {
	Student s;
	//protected ���������ڴ� �� Ŭ������ Ŭ������ ��ӹ��� Ŭ���� �������� ������ �����ϴ�


	return 0;
}