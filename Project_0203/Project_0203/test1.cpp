using namespace std;
#include <iostream>
#include <string>
int main() {


	
	string friend1 = "ȫ�浿";
	string friend2 = "������";

	//�迭 ����� �ʱ�ȭ ����
	string friends[2] = { "ȫ�浿" ,"������" }; 
	//�迭 ����� �ʱ�ȭ ����
	string name[2];
	name[0] = "ȫ�浿";
	name[1] = "������";
	name[1] = "�ڵ���";  //�ȿ� ���� �ٲ� �� �ִ� 


	//cout << name[3] << endl;  -> ������ ���� �ƴ� ������ ��� 
	
	float num[4] = { 1.5,2.6,4.7};
	num[3] = 3.1;
	

	//����� �ʱ�ȭ ���ÿ�
	string fruit[3] = { "apple", "banana","orange" };

	//�ϳ��� �ʱ�ȭ
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


	//3����
	string fruit2[2][3][2] = { {{ " ", " "} ,{" "," "} ,{" "," "}},{{" "," "},{" "," "} ,{" "," "}} };



	return 0;
}