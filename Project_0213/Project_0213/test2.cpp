using namespace std;
#include <iostream>
#include <string>
class Person {
protected:
	string name;
public:
	virtual ~Person() {
		cout << "����� �Ҹ��� �Դϴ�" << endl;
	}
	virtual void info() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ�" << endl;
	}
	virtual void test() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ��׽�Ʈ" << endl;
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



int main() {

	//���⼭ �Ҹ��ڰ� ����(�����ڸ� ���ุ��Ű�� ���ϴ� ������ ��Ƶΰ� �ٷμҸ��Ŵ)
	Person s = Student();
	//���ϴ� ������ ��Ƽ� Person�� �����ڸ� �ٽ� �����Ű�� ������ Person�� �����ڵ� �Ҹ� ��ų�� �������� 
	s.info(); //���� ���ε�

	cout << "--------�����޸�,������ ����------------" << endl;
	Person* ss = new  Student(); //�θ��Լ��� virtual�� ���ָ� ����Ҹ��ڸ� ȣ�Ⱑ��
	ss->info();  //�������ε� (�ڽĿ� �ִ� ���� ȣ���ϰ� �ȴ�)
	(*ss).info();	ss->test(); 
	delete ss;  //�ڽĿ� �ִ� �Ҹ��ڸ� ȣ�����ְ� ������ �θ��� �Ҹ��ڸ� �����Լ��� ���������Ѵ� 


	cout << "----------������ ����-------------" << endl;

	Student stu;  //�����޸𸮰� �ƴ� �׷���delete�Ⱦ��� (���带 �Ҷ� �޸� ũ�⸦ ����� )
	Person* sss = &stu; //�� ���� delete�� �Ⱦ��� 
	sss->info();
	//delete�� ����ϰ� �Ǹ� �����߿� ������ �߻��Ѵ� (��Ÿ�� ����)
	cout << "----------������ �迭-------------" << endl;

	//�θ�Ŭ������ �ڷ������� �ڽ�Ŭ������ �ν��Ͻ��� ������� ��ĳ�����̶�� �Ѵ� 
	Person* per_arr[3] = { new Student(),new Instructor() ,new Student() };
	for (int i = 0; i < 3; i++){
		per_arr[i]->info();
	}
	for (int i = 0; i < 3; i++){
		delete[]per_arr[i];
	}
	cout << "----------end-------------" << endl;

	return 0;
}