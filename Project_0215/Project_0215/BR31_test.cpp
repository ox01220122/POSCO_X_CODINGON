using namespace std;
#include <iostream>
#include <string>
#include <ctime>
int main() {

	srand(time(NULL));

	int input_num, com_num;
	int num_add=0;
	bool input_end = 0, com_end = 0;
	//����� , ��ǻ�� ���� �ٲ� �� input_num, com_num�ٲ��ֱ�
	while (true)
	{
		if (com_end){
			cout << "����ڰ� �̰���ϴ�!";
			exit(1);
		}
		else if(input_end) {
			cout << "��ǻ�Ͱ� �̰���ϴ�!";
			exit(1);
		}
		cout << "������ �Է��ϼ���";
		cin >> input_num;
		cout << input_num << "�� �Է��ϼ̽��ϴ�" << endl;

		if (input_num<=3 && input_num > 0)  //���� �ٲ� �� ����
		{
			cout << "����ڰ� �θ� ����"<<endl;
			for (int i = num_add + 1; i <= num_add + input_num; i++) {
				
				if (i == 31) {
					input_end = 1;
					break;
				}
				else { cout << i << endl; }
			}
			num_add += input_num;
		}
		else { 
			cout << "������ ������ϴ�. �ٽ��Է��ϼ���" << endl;
			continue; }

		if (input_end) { continue;}
		
		com_num = (rand() % 3) + 1;  //���� �ٲ� �� ����
		cout << "��ǻ�Ͱ� �θ� ���� : " << com_num << endl;
		for (int j = num_add+1; j <= num_add+com_num; j++){
			if (j == 31) {
				com_end = 1;
				break;
			}
			else { cout << j << endl; }	
		}
		num_add += com_num;
	}
	return 0;
}