using namespace std;
#include <iostream>
#include <string>
int main() {


	/*
	string friend1 = "ȫ�浿";
	string friend2 = "������";

	//�迭 ����� �ʱ�ȭ ����------------------------------------------------------------
	string friends[2] = { "ȫ�浿" ,"������" }; 
	//�迭 ����� �ʱ�ȭ ����
	string name[2];
	name[0] = "ȫ�浿";
	name[1] = "������";
	name[1] = "�ڵ���";  //�ȿ� ���� �ٲ� �� �ִ� 


	//cout << name[3] << endl;  -> ������ ���� �ƴ� ������ ��� 
	
	float num[4] = { 1.5,2.6,4.7};
	num[3] = 3.1;
	

	//����� �ʱ�ȭ ���ÿ�------------------------------------------------------------
	string fruit[3] = { "apple", "banana","orange" };

	//�ϳ��� �ʱ�ȭ------------------------------------------------------------
	fruit[0] = "apple";
	fruit[1] = "banana";
	fruit[2] = "orange";


	for (int i = 0; i < 3; i++) { cout << fruit[i] << endl; }
	


	string fruit1[2][3] = {
		{"apple","banana","cherry"} ,
		{"orange","strawberry",""}
	};  //1��1��, 1��2��, 2��1��, 2��2��


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << fruit[i][j] << endl;
		}
	}
	


	//3����------------------------------------------------------------
	string fruit2[2][3][2] = { 
		{{ " ", " "} ,{"aaa"," "} ,{" "," "}},
		{{" "," "},{" "," "} ,{" "," "}} };
	cout << fruit2[0][1][0] << endl;

	cout << fruit2 << endl; //�ּҰ��� ���´� 
	




	//for�� ���------------------------------------------------------------
	string friends[2][3] = { {"ȫ�浿1" ,"ȫ�浿2","ȫ�浿3"},{"�����1","�����2","�����3"}};

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++) 
			cout << friends[i][j] << endl;
	
	
	string friends[3] = { "ȫ�浿1" ,"ȫ�浿2","ȫ�浿3" };


	//���̽� for i in �迭�̸� -> �̶� ���� ����ε�
	for (string hello : friends) {  //�ε����� �Ƚᵵ �ǰ� ������ �迭�� hello�� ������ �� �ִ� 
		cout << hello << endl;
	}
	

	string friends[2][3] = { {"ȫ�浿1" ,"ȫ�浿2","ȫ�浿3"},{"�����1","�����2","�����3"} };



	//2���� �迭 for each�� ------------------------------------------------------------
	for (auto &f1 : friends){
		for (string f2 : f1) {  //f1������ �迭�� �ν����� ���ؼ� �ּҰ��� ���������  (�ᱹ ����ؾ� �Ұ��� f2)
			cout << f2 << endl;
		}
	} //�ȿ� �ִ� ������ for���� ���� �����Ѵ� (�׳� �ܿ�� - 2���� �̻󿡼� �̷��� ���� )
	*/

	//sizeof() : sizeof�ȿ� ���� or type�� ���ڷ� �Ѱ���. ũ�⸦ byte������ ���� 

	string friends[3] = {"ȫ�浿1","ȫ�浿2","ȫ�浿3"};
	for (int i = 0; i < sizeof(friends)/sizeof(string); i++)  // 4byte(string)�� 3�� �����ϱ� 12byte�� �����Ƿ� �����ʿ�
		//(string�� size�� ������)
		cout << friends[i] << endl;
	




	return 0;
}