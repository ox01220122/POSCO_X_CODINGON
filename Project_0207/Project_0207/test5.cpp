using namespace std;
#include <iostream>
#include <string>  //getline���� ���ؼ�
#include <fstream> //������ �ٷ�� ���� ��� ����

bool OpenFile(ifstream &file) { //����Ÿ���� class�� ������ &�� �ٿ�����Ѵ� 
	if (file.fail()) {
		cout << "���� ���� " << endl;
		return false;
	}	
	else
		return true;
}


int main() {
	string line,file_content;
	ifstream file_r("test.txt");
	ofstream file_w("test1.txt");

	if (!OpenFile(file_r)) return -1;
	while (getline(file_r,line))
	{
		file_content += line + "\n";
	}

	cout << file_content;
	file_w << file_content;


	return 0;
}