using namespace std;
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

class Instructor : public Person {
public:
	~Instructor() {
		cout << "������ �Ҹ����Դϴ�" << endl;
	}
	void info() {
		cout << "�����Դϴ�" << endl;
	}
};
int main() { //��� ���� ������ 

	//Person p1 = Student(); //���⼭ p1�� �ٿ�ĳ������ �ϸ� �������� 
	Person* p = new Student();  //���⼭ ���������� �޸� ��� (p��)
	cout << p->get_name() << endl;
	Student* s = (Student*)p; //�ٿ�ĳ����(��ĳ���� �ߴ� �ڷ����� �״�� �����ͼ� ����Ѵ�)



	s->test();
	p->set_name("ȫ�浿");
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("������");
	cout << p->get_name() << " " << s->get_name() << endl;

	int a = 1;
	int k = 2;
	//��������
	int& b = a; // b�� a�� �ּҰ��� ����Ų�� (a�� ���� b�� ����)->�����͸� ������� �ʰ� �ٷ� b�� a���� ���ٰ���
	//a�� ������ b��� ���� �ϱ� 
	// �ѹ� �����ϴ� �ּҰ� ���� �ٲ��� �ʴ´� (�������忡���� ����� �ٲ��� �ʴ´�)


	//������ 
	int* c = &a;
	//���⼭ b�� k�� �ּҰ��� ����Ű�� �ؼ� b�� 2�� �ٲ�. b�� �ٲ����ν� a=2(b�ǰ�)�� �ȴ� 
	//a�� �������Ƿ� a�� �ּҰ��� ����Ű�� c�� �����ʹ� (*c) 2�� �ٲ�� 

	cout << a << " " << b << " " << *c << endl;
	b = k;
	cout << a << " " << b << " " << *c << endl;
	a = 3;
	cout << a << " " << b << " " << *c << endl;
	c = &k;  //���⼭ c�� ���̻� a�� �������� �ʱ� ������ ���� a�� �����ϴ� 
	k = 4;
	cout << a << " " << b << " " << *c << endl;

	Student& s1 = *(Student*)p;    //���� �ּҴ� ���� �ٲ��� �ʴ´� 
	//p�� person���� �������ε� �� student���� �����ͷ� �ٲ��ֳ���??? ���������� ���� �����ֱ� ���ؼ�?? ����
	//person�����͸� student �����ͷ� ���� �ٲٰ� (��������� ������) *�� �ٿ��� ������ ���� 
	s1.set_name("�ڵ�");
	cout << p->get_name() << " " << s1.get_name() << endl;
	//���⼭ �� .���� ����???? ���������� �����ΰ�? 


	Student s2 = *(Student*)p;  //���� ���� �Ѵ�  (p�� ���� �̿��ؼ� ���ο� �޸𸮸� ������� )
	//s2�� p�� �����Ǿ��ִ� 
	s2.set_name("�ھ�");
	cout << p->get_name() << " " << s2.get_name() << endl;







	//s1�� s�� p�� �ּҰ��� ����Ű�� �ִٰ� �����ϱ� 


	/*
	//�������� ����ؼ� �ٿ�ĳ���� �� ��
	Student& s = *(Student*)p; //���� ������ �ؼ�
	*/
	delete p;
	//delete�� �Ⱦ��� �ٿ�ĳ�����Ѱ� �Ҹ��ڰ� ȣ���� �ȵȴ�  return�� ������ ȣ��ž��Ѵ°žƴѰ�?(����)


	return 0;
}