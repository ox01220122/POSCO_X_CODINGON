using namespace std;
#include <iostream>
#include <string>
int main() {
	//������ ���� �迭
	//n*n�� �迭�� �����迭�� �̿��ؼ� ������ֱ� 
	int num;
	cout << "���ڸ� �Է��ϼ��� :" << endl;
	cin >> num;

	//�迭�� ũ�� ����ֱ�
	int** num_arr = new int* [num]; //num_arr�� �����迭�� �ʱ�ȭ��Ų�� (����������)
	for (int i = 0; i < num; i++)
		num_arr[i] = new int[num]; //���⼭�� �����迭 ���� 


	//�����迭������ for each���� ����Ҽ� ���� 

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++) {
			num_arr[i][j] = 1;
			cout << num_arr[i][j] << " ";
		}
		cout << endl;
	}



	for (int i = 0; i < num; i++) { delete[] num_arr[i]; }//for������ ������ �迭  
	delete[] num_arr; //�ѿ� �ִ� �迭�� �������ش�(int** num_arr = new int* [num]; �̺κ�)





	//3������ ��� : int*** num_arr = new int** [num];
	// 2*2�迭  :  {{1,2},{3,4}}





	return 0;
}