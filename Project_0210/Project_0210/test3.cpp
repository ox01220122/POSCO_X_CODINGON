#include <iostream>
using namespace std;
class Elec {
public:
	int a;
	virtual void on() = 0; //������ ���� �޼ҵ�(�߰�ȣ�� =0���� ��ü�Ǿ���)(�߻�޼ҵ� - ���������Լ�)
	virtual void off() = 0; //�� �ʿ��� ����� ������ ����Ŭ�������� ���� �ϱ� ���� ����� ���� ���� �߻�Ŭ���� 
};
class Tv : public Elec { // �θ𿡼� ��ӹ��� ���� �����Լ��� �������� ���� ���, �ڽ�Ŭ������ �߻� Ŭ������ �ȴ� 
public:
	void on() { //�ʼ������� �־�� �ϴ� ��ɵ��� �����ϰ� �ִ�
		cout << "Tv�ѱ�" << endl;
	}; //�������̵��̶�� �Ѵ� (���� �������� ������ �ڽ�Ŭ������ �߻�Ŭ������ �ȴ� ) �׷��� �ȿ� �Լ� � �����°�? 
	void off() {
		cout << "Tv����" << endl;
	};
	void test(){}
};
class Radio : public Elec {
	void on() { 
		cout << "���� �ѱ�" << endl;
	}; 
	void off() {
		cout << "���� ����" << endl;
	};
};

int main() {
	//Elec elec; //���� �����Լ��� ���ԵǾ �߻�Ŭ������ ��ü�� ������ �� ���� 
	Tv tv; // ��ü�� �����ϴ� ������ �ƴϴ� 
	tv.test();

	return 0;
}