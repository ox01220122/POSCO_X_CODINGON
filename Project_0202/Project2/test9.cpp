using namespace std;
#include <iostream>
#include <string>
#include <math.h>
int functionTestInt();
double functionDouble();
string functionStr();
int functionTestSum(int, int);
void functionTestVoid();
int result(int, int);
int result2(int, int);
void resultVoid(int, int);


int main() {
	/*
	int n = functionTestInt();
	double dou = functionDouble();

	int num = functionTestSum(2, 3);  //5
	cout << functionTestSum(2, 3)<< endl;
	cout << functionTestSum(2, 3)<< endl;

	functionTestVoid();
	


	int num1 = result(1, 2);//������ ���� �Ǵµ� int ���̾�� �Ѵ� 
	int num2 = result(2, 3);
	cout << num1 + num2 << endl;
	*/

	resultVoid(1, 2);  //void�����϶��� �̷��� ��ȯ������ ������ ���� �� ���� 





	return 0;
}




int functionTestInt() {
	return 5;
}
double functionDouble() {
	return 5.4;
}
string functionStr() {
	return "hello";
}


int functionTestSum(int a, int b) {
	return a + b;   //return�� ��ȯ���� ����� �ִ� �� 
}


void functionTestVoid() {  //��ȯ���� ���� 

	cout << "�ȳ��ϼ���";
}
int result(int a, int b) {
	return a + b;
}
int result2(int a, int b) {
	return a + b;
}

void resultVoid(int a, int b) {
	cout << a + b << endl;
}
