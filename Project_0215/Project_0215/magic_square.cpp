using namespace std;
#include <iostream>
#include <string>
#include <ctime>
int main() {

	int input_odd_num=0;
	int b = 1;
	//�����迭 ����ϱ� 

	while (true){
		cout << "������ ��, Ȥ�� ���� ���� �ڿ����� �Է��� �ּ���(Ȧ�� �Է�) : ";
		cin >> input_odd_num;
		if (input_odd_num % 2 == 0 && input_odd_num <= 0)
			cout << "0�̻��� Ȧ���� �Է��ϼ���" << endl;
		else {
			int** num_arr = new int* [input_odd_num];
			for (int i = 0; i < input_odd_num; i++)   
				num_arr[i] = new int[input_odd_num];


			for (int i = 0; i < input_odd_num; i++){
				for (int j = 0; j < input_odd_num; j++){
					num_arr[i][j] = (b++);
					cout << num_arr[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < input_odd_num; i++) { delete[] num_arr[i]; }
			delete[] num_arr;
			exit(1);
		}
	}


	

	return 0;
}