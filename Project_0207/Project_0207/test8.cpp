/*using namespace std;
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
		if (a) { cout << "�α��� ����" << endl; }
	}
	return 0;
}

*/

using namespace std;
#include <iostream>
#include <string> 
#include <fstream>
#include <vector>
#include <cstdlib>
int main() {

	string name;
	string number;
	string tel;
	string str, str2, str3, str4;
	string member_tel = " ";
	string temp_line = "";  //�ӽ� ���� ����

	//in.seekg(0, std::ios::beg);


	while (true)
	{
		int a = 1;
		cout << "�̸��� �Է��ϼ��� : " << endl;
		cin >> name;
		cout << "��й�ȣ�� �Է��ϼ��� : " << endl;
		cin >> number;

		ifstream file_r("member.txt"); 
		ifstream file_tel("member_tel.txt");
		ofstream file_w("member_tel.txt", ios::out | ios::app);

		while (file_r >> str >> str2) {
			if (str == name && str2 == number) {
				cout << "�α��� ����" << endl;
				cout << "��ȭ��ȣ�� �Է����ּ��� : (***-****-****)" << endl;
				cin >> tel;
				member_tel = name + " " + tel;
				if (file_r.fail()) {file_w << member_tel << "\n";
				a = 0;
				}
				else { //�� ������ ��� 
					//�˻����
					while (file_tel >> str3 >> str4) { //tel�� ������ �ִ� 
						if (name == str3) 
							temp_line += member_tel + "\n"; //�����Է��Ѱ� ���ֱ� 
						else { temp_line += str3 + " " + str4 + "\n"; }
						}
	
					}	
				}//������� �α��� �������� ���
			}





		file_w.clear();
		file_w << temp_line << "\n";
		temp_line = "";
		if (a) { cout << "�α��� ����" << endl; }
		}
	return 0;
}
