using namespace std;
#include <iostream>
#include <string>
#include <ctime>
void F_print(int* num_count, bool* com_end, int* com_num , int number) {
	for (int j = *num_count + 1; j <= *num_count + *com_num; j++) {
		if (j == number) {
			*com_end = 1;
			break;
		}
		else { cout << j << endl; }
	}
	*num_count += *com_num;
	if (*num_count == number) { *com_end = 1; }
}
void F_input_user(int *input_num) {
	cout << "������ �Է��ϼ���";
	cin >> *input_num;
	cout << *input_num << "�� �Է��ϼ̽��ϴ�" << endl;
}
void F_input_com(int *com_num) {
	*com_num = (rand() % 3) + 1;  //���� �ٲ� �� ����
	cout << "��ǻ�Ͱ� �θ� ���� : " << *com_num << endl;
}

int main() {
	srand(time(NULL));
	int input_num = 0, com_num = 0, num_count = 0;
	bool input_end=0, com_end=0;

	while (true){
		if (com_end) {
			cout << "����ڰ� �̰���ϴ�!";
			exit(1);
		}
		else if (input_end) {
			cout << "��ǻ�Ͱ� �̰���ϴ�!";
			exit(1);
		}

		F_input_user(&input_num);

		if (input_num <= 3 && input_num > 0){
			F_print(&num_count, &input_end, &input_num, 32);		
		}
		else {
			cout << "������ ������ϴ�. �ٽ��Է��ϼ���" << endl;
			continue;
		}
		if (input_end) { continue; }  //����ڰ� �ٲ� ��쿡 �������ֱ� 
		F_input_com(&com_num);
		F_print(&num_count, &com_end, &com_num,31);
	}
	return 0;
}