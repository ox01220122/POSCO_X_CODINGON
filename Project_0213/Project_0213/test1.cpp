using namespace std;
#include <iostream>
#include <string>
class Person {
protected:
	string name;
public:
	virtual void info() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ�" << endl;
	}
	virtual void test() {  //�����Լ�(�ڽ�Ŭ�������� ������ �� �� �̶�� ���)
		cout << "����Դϴ��׽�Ʈ" << endl;
	}
};
class Student :public Person{
private:
	string stu_id;
public:
	void info() {
		cout << "�л� �Դϴ�" << endl;
	}
	void test() {
		cout << "�л��� test�Լ�" << endl;
	}
};
int main() {

	Person s = Student();
	s.info();
	cout << "--------�����޸�,������ ����------------" << endl;
	Person *ss = new  Student(); 
	//new��  Student�� �ּҰ��� ���� ��ü�� ��ȯ���ش� 
	ss->info(); //�������ϋ��� ->�� ������ ����Ѵ� 
	(*ss).info(); //�̷��Ե� ����(�����Ϳ� ��� ���� �Լ� info)
	ss->test();
	//ss.test()�� ȣ���ϰ� ������ �θ� Ŭ�������� virtual�� ������ ����Ѵ� 

	//�����ͷ� ��ü �����ϰ� �Ǹ� �������ε� �� �� �ְԵȴ� 
	delete ss; //�������� �޸𸮸� �Ҵ������� �ݳ�������Ѵ� 
	//Person persons[2] = { Student(),Student() };
	cout << "----------������ ����-------------" << endl;

	Student stu; //�����߿� �޸𸮰� �ڵ����� �Ҵ��� �ȴ� 
	Person* sss = &stu; //�� ���� delete�� �Ⱦ��� 
	sss->info();
	//delete�� ����ϰ� �Ǹ� �����߿� ������ �߻��Ѵ� (��Ÿ�� ����)

	
	return 0;
}