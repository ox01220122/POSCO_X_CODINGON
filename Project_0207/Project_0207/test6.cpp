using namespace std;
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream>
#include <vector>
int main() {
	

	string name[3];
	string num[3];
	
	ofstream file_w("member.txt");
	string members = " ";
	string line;

	for (int i = 0; i < 3; i++){
		cout << i + 1 << "��° ȸ�� �̸�, ��й�ȣ�� ���������� �Է� : " << endl;
		cin >> name[i]>>num[i];
	}
	
	for (int i = 0; i < 3; i++){
		members = name[i] +" "+ num[i];
		file_w << members <<"\n";
	}
	file_w.close();

	ifstream file_r("member.txt");
	
	while (getline(file_r, line)) {cout << line << endl;}
	



	
	
	


	return 0;
}