#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//����ڴ� 1���� 9 ���� �� 3���� ���ڸ� �̾� ��ǻ�Ͱ� �������� ���� ���� 3���� ��(�ߺ�x)
//������ �ڸ��� ���� ��� ������ strike
//�ڸ��� �ٸ����� 3���� ���� �� ���ԵǾ� ������ ball
int main() {

	srand(time(NULL));
	int com_num = 0;
	int com_arr[3], user_arr[3];
	int strike_count = 0, ball_count;
	
	for (int i = 0; i < 3; i++){//��ǻ�� �������� ���� 
		com_num = (rand() % 3) + 1;
		for (int c : com_arr) {
			if (c == com_num) { i--; continue; }
		}
		com_arr[i] = com_num;
	}



	//��Ʈ����ũ�� ������ Ŭ ��� (��Ʈ����ũ - ��)
	while (true){
		cout << "1~9������ ���� 3���� �Է��Ͻÿ� (�̿��� ����: ����) " << endl;
		cin >> user_arr[0] >> user_arr[1] >> user_arr[2];

		for (int i = 0; i < 3; i++){//strike �˻� 
			if (com_arr[i] == user_arr[i]){	strike_count++;	}
			for (int j = 0; j < 3; j++) {//ball �˻� 
				if(com_arr[i] == user_arr[j])
			}
		}

		


	}











	return 0;
}