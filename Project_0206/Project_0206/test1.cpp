using namespace std;
#include <iostream>
#include <string>
int main() {
	//������


	int number = 5;
	int i=10;
	int* pNumber;
	pNumber = &number;

	cout << "number : " << number << endl; //������ ��
	cout <<"pNumber value : "<< *pNumber << endl;  //�����Ͱ� ����Ű�� �ּҾ��� ��(������ ��)
	cout << "number adress(pNumber): " << pNumber << endl;  //�����Ͱ� ����Ű�� �ּ�
	cout << "number adress: " << &number << endl; //������ �ּ�(���� ����)
	cout << "pNumber adress: " << &pNumber << endl;// �������� �ּ� 


	*pNumber = 20;
	cout << "number : " << number << endl; //������ ��
	cout << "pNumber value : " << *pNumber << endl;


	pNumber = &i;
	cout << "pNumber value : " << *pNumber << endl;













	return 0;
}