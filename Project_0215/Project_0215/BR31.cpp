using namespace std;
#include <iostream>
#include <string>
#include <ctime>
void F_print(int* num_count, bool* bool_end, int* count_num , int range) { //user, ��ǻ�� ������� & ���� ī��Ʈ 
	for (int j = *num_count + 1; j <= *num_count + *count_num; j++) {
		if (j == range) {
			*bool_end = 1;
			break;
		}
		else { cout << j << endl; }
	}
	*num_count += *count_num;
	if (*num_count == range) { *bool_end = 1; }
}

void F_input_user(int *input_num) {//user ���� �Է¹ޱ� 
	cout << "������ �Է��ϼ���";
	cin >> *input_num;
	cout << *input_num << "�� �Է��ϼ̽��ϴ�" << endl;
}

void F_input_com(int *com_num) {//��ǻ�� ���� ��ȣ ���� 
	*com_num = (rand() % 3) + 1; 
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
		if (input_end) { continue; } 
		F_input_com(&com_num);
		F_print(&num_count, &com_end, &com_num,31);
	}
	return 0;
}