using namespace std;
#include <iostream>
#include <string>

struct _tagStudent
{
	int iKor;
	int iENG;
	int iMath;
	int iTotal;
	float fAvg;
};

int main() {
	/*
	������ : �Ϲ� ������ �Ϲ����� ���� ����
	������ ������ ������ �޸� �ּҸ� �����ϰ� �ȴ� . 
	��� ������ Ÿ���� ������ �� �ִ� 
	int������ �ּҴ� int������ ������ �����ؾ��Ѵ� 
	�����ʹ� �޸� �ּҸ� �޾Ƴ��� �����̱� ������ 
	x86���� �����Ҷ��� ������ 4byte�� ���´� x64�϶��� 8byte�� ���´�

	�����ʹ� �ٸ������� �޸� �ּҸ� ���´� 
	�ڱ� ������ �ƹ��� �ϵ� �� �� ���� (���� ������ �� �ִ�)
	
	
	//������ ���� �����ϱ� 
	int INumber = 100;
	//���� ���� �� *�� �ٿ��ָ� �ش� Ÿ���� ������ ������ ����ȴ� 
	int* pNum = &INumber; //pNum�� INumber������ �޸� �ּҸ� ������ ���� �ȴ� 
	//�׷��Ƿ� pNum�� �̿��ؼ� INumber�� ���� ������ �� �ִ� 

	cout << sizeof(int*) << endl;  //int ������ (�޸� �ּҸ� ��ƾ��ؼ� (x86))
	cout << sizeof(char*) << endl;  //char ������ Ÿ��
	cout << sizeof(double*) << endl;

	cout << "INumber Address : " << &INumber << endl;
	cout << "pNum value : " << pNum<< endl;
	cout << "pNum Adress : " << &pNum << endl;
	
	//pNum�� �̿��ؼ� INumber�� ���� ���� (������ �̿�)
	// ���� ������ �� *�� ���̸� ������ ���� ������ �Ǵ� �� 
	//�̹� ����� ������ �տ� *�� ���̰� �Ǹ� �������� �ȴ� 

	//����Ű�� ����� ���� �ǹ��Ѵ� 
	*pNum = 1234;
	cout << INumber << endl;

	int iArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArray = iArray;   //iArray�� �迭 �ε���0�� �ּ� (&iArray[0]�� ����)
	cout << *pArray << endl;
		
	//����������, char ������, void������
	//char ������  (ĳ������ �ּҸ� ������ �´�)
	//�����Ϳ� �迭�� ���� : �迭���� �����ʹ� 


	_tagStudent tStudent = {};
	_tagStudent* pStudent = &tStudent;


	//������ �켱���������� *���� .�� ���� �ν��Ѵ� (�޸��ּ�.�� �߸��ȹ���)
	//�׷��Ƿ� *pStudent�� ��ȣ�� ������ �� .�� �̿��ؼ� ����Ű�� �����
	//��� ������ �����Ѵ� 
	//�̷� ������� ����Ű�� ����ü�� ��� ������ �� �ִ� 
	(*pStudent).iKor = 50;
	cout << tStudent.iKor << endl;
	pStudent->iKor = 80;  //�޸��ּ� ->�� �̿��ؼ� ����Ű�� ����� ����� ���ٰ���
	cout << tStudent.iKor << endl;



	//void������ - Ÿ���� ����

	void* pVoid = &INumber; //�������� �Ұ����ϰ� �޸� �ּҸ� ���尡���� ���۷� �� �� �ִ�
	cout << pVoid << endl;
	pVoid = &tStudent;    //����ü�� ���� (���������� �Ұ���)
	cout << pVoid << endl;

	int* pConvert = (int*)pVoid; //����ȯ�� ���ؼ� int�����ͷ� �ٲٰ� �������Ҽ��ִ�
	*pConvert = 123456;
	cout << *pConvert << endl;

	//������
	*((int*)pVoid) = 999;
	cout << *pConvert << endl;
	


	//���������� 
	//�����ʹ� �Ϲݺ����� �ּҸ� �����ϰ� ���������ʹ�
	//������ ������ �ּҸ� �����Ѵ� (�������� ������)


	int iNymber1 = 1111;
	int iNymber2 = 2222;
	int* pNum = &iNymber1;
	int** ppNum = &pNum;

	*pNum = 3333;

	cout << iNymber1 << endl;
	cout << &iNymber1 << endl;
	cout << *pNum << endl;
	cout << pNum << endl;
	cout << &pNum << endl;
	cout << *ppNum << endl;
	cout << **ppNum << endl;
	*/

	//�Լ�
















	return 0;
}