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
	virtual void info() {
		cout << "����Դϴ�" << endl;
	}
	virtual void test() {
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
int main() {
	Person s = Student();
	s.info(); 
	return 0;
}