#include <iostream>
using namespace std;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person(string name) {
		this->name = name;
		cout << "�θ�Ŭ���� �����ڿ��� �ʱ�ȭ �� �̸� " << this->name << endl;
	}
};


class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person("aaaa") { //name�� ���� aaaa�� �ʱ�ȭ ������ 
		cout << "Student ������ �����.\n";
	}
	Student(string name ,string stu_id) : Person(name) { //���⼭ �޾ƿ� name������ person������ ȣ��ǰ� name�� �ٲ�
		this->stu_id = stu_id; //������ ����Ҷ� name�� �ʱ�ȭ �ϰ���� ������ �� �����ڴ� �θ� �ִ�. �θ𿡲�
		//�ʱ�ȭ �����ֱ����� (�޾ƿ� ������ �θ�Ŭ���� �����ڿ� �Ѱ���)
		cout << "�ڽ�Ŭ���� �����ڿ��� �ʱ�ȭ �� �й� " << this->stu_id << endl;
	}
};
int main() {
	Student s("ȫ�浿","1111");  //�̸�, �й� �޾ƿ�


	return 0;
}