using namespace std;
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
int main() {

	srand(time(NULL));
	int rand_num = 0;
	vector <int> com_num;
	vector <int> user_num;
	int count = 0;
	int result_num = 7;


	while (count != 6) {
		int temp = 0;
		rand_num = (rand() % 25) + 1;
		if (com_num.size() != 0) {
			for (int j = 0; j < com_num.size(); j++) {
				if (com_num[j] == rand_num) { temp = 1; }
			}
		}
		if (!temp) {
			com_num.push_back(rand_num);
			count++;
		}
	}
	
	cout <<"���� ���ڰ� �����Ǿ����ϴ�! "<<endl;
	count = 0;
	while (count != 6) {
		int temp = 0;
		cout <<count+1<< "�� ���ڸ� �Է��ϼ��� : ";
		cin >> rand_num;
		if (rand_num >= 1 && rand_num <= 25) {
			for (int j = 0; j < user_num.size(); j++) {
				if (user_num[j] == rand_num) {
					cout << "���� �ߺ�. �ٽ� �Է��ϼ��� !" << endl;
					temp = 1;
				}
			}
			if (!temp) {
				user_num.push_back(rand_num);
				count++;
			}
		}
		else { cout << "������ ������ϴ�. �ٽ��Է�" << endl; };
	}



	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++) {
			if (com_num[i] == user_num[j]) { --result_num; }
		}
	}

		cout << "��÷��ȣ ����!" << endl;
		for (int c : com_num) { cout << c << " "; } //���
		cout << endl << "-----------------------------------------" << endl;
		cout << "��� : " << result_num << "�� �Դϴ�" << endl;

	return 0;
}