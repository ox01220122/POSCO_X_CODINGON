using namespace std; 
#include <stdlib.h>
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream> //������ �ٷ�� ���� ��� ����
int main() {

	ofstream file("test2.txt",ios::out | ios::app); //���� �����ϴ� ��� �ΰ���
	//file.open("test2.txt");
	if (file.fail())
	{
		cout << "���� ���� ����!";
		return -1;
	}
	file << "hello world!\nhihi"; //����⸸ ����
	//ifstream : ���� -> ���α׷�
	//ofstream : ���α׷� -> ����


	//for (int i = 1; i <= 5; i++) { file << i << endl; }
	
	
	
	file.close();
	return 0;
}
