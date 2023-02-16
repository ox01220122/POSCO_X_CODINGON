#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int input_odd_num = 0;

	while (input_odd_num==0) { //Ȧ���� �Է¹ޱ�!
		cout << "������ ��, Ȥ�� ���� ���� �ڿ����� �Է��� �ּ���(Ȧ�� �Է�) : ";
		cin >> input_odd_num;
		if (input_odd_num % 2 == 0 || input_odd_num <= 0) {
			cout << "0 �̻��� Ȧ���� �Է��ϼ���" << endl;
			input_odd_num = 0;
		}
	}


	vector<vector<int> > magic_square(input_odd_num, vector<int>(input_odd_num, 0));
	int row = 0;
	int col = floor(input_odd_num / 2.0);
	magic_square[row][col] = 1;  //ù��° �� ��� 1�� �־��ְ� ����
	
	for (int i = 2; i <= pow(input_odd_num, 2); i++) {//2���� ���� �־��ֱ�
		if (col + 1 == input_odd_num && row - 1 < 0) {//��� ���� ������ ����� ���
			if (row - 1 < 0) { row = input_odd_num - 1; }
			else { row -= 1; }
			if (col + 1 == input_odd_num) { col = 0; }
			else { col += 1; }

			magic_square[row][col] = i;

			if (magic_square[row][col] != 0) {
				row = 1;
				col = input_odd_num - 1;
				magic_square[row][col] = i;
			}
			else {	magic_square[row][col] = i;	}
		}

		else if (col + 1 == input_odd_num) {//���� ������ ����� ��� 
			row -= 1;
			col = 0;
			magic_square[row][col] = i;
		}

		else if (row - 1 < 0) {//���� ������ ����� ���
			row = input_odd_num - 1;
			col += 1;
			magic_square[row][col] = i;
		}

		else if (magic_square[row - 1][col + 1] != 0) {//ä���������� ���� �̹� ���� ���� ���
			row += 1;
			magic_square[row][col] = i;
		}
		else {//������ ��ĭ ,���� ��ĭ ���� �� �־��ֱ� 
			row -= 1;
			col += 1;
			magic_square[row][col] = i;
		}
	}
		
	for (int j = 0; j < input_odd_num; j++) {//������ ���
		for (int k = 0; k < input_odd_num; k++) {
			cout << magic_square[j][k] << " ";
		}
		cout << endl;
	}
}