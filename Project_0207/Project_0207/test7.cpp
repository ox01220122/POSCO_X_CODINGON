using namespace std;
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream>
#include <vector>
int main() {

	string name;
	string number;
	string str, str2;

	cout << "�̸��� �Է��ϼ��� : " << endl;
	cin >> name;
	cout << "��й�ȣ�� �Է��ϼ��� : " << endl;
	cin >> number;

	ifstream file_r("member.txt");

	
while (file_r >> str >> str2) {
	if (str == name ) {
		if (str2 == number){
			cout << "�α��� ����";
			exit(1);
		}
		else
			cout << "�α��� ����";
	}	
}
cout << "�α��� ����";



/*
string name_in, pw_in;
	string name, pw;
	bool is_login = false;

	cout << "�̸��Է� :";
	cin >> name_in;
	cout << "��й�ȣ�Է� :";
	cin >> name_in;

	ifstream file("member.txt");

	while (file>>name>>pw)
	{
		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}
	if (is_login == true) { cout << "�α��� ����" << endl; }
	else   cout << "�α��� ����" << endl;

*/

	return 0;
}