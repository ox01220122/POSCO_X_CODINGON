/*
�߻�ȭ(�ߺ��Ǵ� �κ� ����)�� �غ���,
ĸ��ȭ(���� ����. ����)�� ����غ���,
���� ��� ��ӱ��� ����غ��鼭
*/

#include <iostream>
using namespace std;
class Animal {
protected:
	string breed;
	string color;
	int age;
public:
	Animal() {
		color = "black";
		age = 2;
	}
	Animal(string breed) {
		this->breed = breed;
		color = "black";
		age = 2;
	}
	 
};
class Dog :public Animal {
protected:
	int size; // ������, ������

public:
	Dog(int size) : Animal() {
		this->size = size;

	}
	Dog(int size, string breed) : Animal(breed) {


	}
};
class Cat :public Animal {
protected:

public:
};

class bird :public Animal {
protected:

public:
};

int main() {

	string breed;
	string color;
	int age;

	cout << "������ ���� �Է��ϼ��� : ";
	cin >> breed;
	cout << "������ ���� �Է��ϼ��� : ";
	cin >> color;
	cout << "������ ���̸� �Է��ϼ��� : ";
	cin >> age;

	return 0;
}