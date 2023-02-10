#include <iostream>
using namespace std;

class Shape {
protected:
	int side_num; //���� ����
	int length; //����
public:
	Shape(int side_num, int length) {
		this->side_num = side_num; //���� ����
		this->length = length; //�غ�
	}
	void printInfo() {
		cout << "���� ���� : " << side_num << " �غ��� ���� : " << length << endl;
	}
};
class Rectangle : public Shape {
protected:
	int vertical_length; //���α���
public:
	Rectangle(int vertical_length, int length) :Shape(4, length) {//���� ����, �غ��� ����
		this->vertical_length = vertical_length;
	}
	void area() {cout << "���� : " << this->vertical_length * length << endl;}
};
class Triangle : public Shape {
protected:
	int height; //���� ����
public:
	Triangle(int height, int length) :Shape(3, length) { //���� ����, �غ��� ����
		this->height = height;
	}
	void area() {cout << "���� : " << (float)(this->height * length)/2.0 << endl;}
};


int main() {

	int height; //���̱���
	int vertical_length; //���α���
	int length;


	cout << "Rectangle�� ���α��� �Է� : " << endl;
	cin >> vertical_length;
	cout << "�غ��� ���� : " << endl;
	cin >> length;

	Rectangle r(vertical_length, length);
	cout << "Rectangle" << endl;
	r.area();
	r.printInfo();


	cout << "Triangle�� ���̱��� �Է� : " << endl;
	cin >> height;
	cout << "�غ��� ���� : " << endl;
	cin >> length;

	Triangle t(height, length);
	cout << "Triangle" << endl;
	t.area();
	t.printInfo();


	return 0;
}