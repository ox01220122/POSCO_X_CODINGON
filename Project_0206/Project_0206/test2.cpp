using namespace std;
#include <iostream>
#include <string>
int main() {

	//�����迭
	int number;
	int* p = &number;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> number;

	//int num_arr[num]�� �����Ű�� ����
	int* num_arr = new int[number];  //���� �迭�� �̿��ؼ� ����(�ڿ� �ʱ�ȭ �� �� �̰� �迭���� �˷��ָ� �ȴ�)
	

	for (int i = 0; i < number; i++) { num_arr[i] = i+1; }
	for (int i = 0; i < number; i++) { cout << num_arr[i] << endl; }



	delete[] num_arr;  //�ۼ������� �ʾƵ� ������ ������ ������ ���α׷� ���ɻ� �ݳ����ִ� ���� ���� 
	delete p;

	return 0;
}