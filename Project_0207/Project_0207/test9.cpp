using namespace std;
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream>
#include <vector>
#include <cstdlib>
int main() {

	string name, number; //�̸�, ��� �Է¹ޱ� 
	string tel;  //��ȭ��ȣ �Է¹ޱ� 
	string str, str2; 
	string member_tel = " "; //��ȭ��ȣ �������� 


	while (true)
	{
		int a = 1;
		cout << "�̸��� �Է��ϼ��� : " << endl;
		cin >> name;
		cout << "��й�ȣ�� �Է��ϼ��� : " << endl;
		cin >> number;

		ifstream file_r("member.txt");
		ofstream file_w("member_tel.txt", ios::out | ios::app);


		while (file_r >> str >> str2) {
			if (str == name) {
				if (str2 == number)
				{
					cout << "�α��� ����" << endl;
					cout << "��ȭ��ȣ�� �Է����ּ��� : (***-****-****)" << endl;
					cin >> tel;
					member_tel = str + " " + tel;
					file_w << member_tel << "\n";
					a = 0;
				}
			}
		}
		if (a){ cout << "�α��� ����" << endl; }
	}



	return 0;
}