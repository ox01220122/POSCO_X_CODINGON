using namespace std; 
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream> //������ �ٷ�� ���� ��� ����
int main() {
	//���� �����
	
	ifstream file;  // ���� ���� class
	file.open("test2.txt"); //���� �� �ش��ϴ� ���� ���� 
	string str, str2,line;

	if (file.fail()){
		cout << "���� ���� ���� ~ ^^";
		return -1;
	}
		
	//file >> str>> str2; //���� �� ������ string�� ������ ����
	
	/*
	while (file >> str >> str2){ 
		//file���� ���α׷����� �ѹ��� ������ �� ���� ����. ���������� ���� �� ������ ������ ����
		cout << str << " " << str2<<endl;
	}
	
	getline(file, line); //file�� ������ �� �پ� �о�´� (\n)�������� �� ���� �о���� 
	cout << line;
	*/
	while (getline(file, line))//������ �ѹ� ������ ������ ���д´� 
	{
		cout << line<<endl;
	}
	
	file.close();  //���������� ������ �����ٶ�� ���� �˸��� ���� ���ش�(�Ƚ��൵ ū ������ ����)

	








	return 0;
}