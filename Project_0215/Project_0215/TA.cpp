using namespace std;
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
int main() {	
	vector <string> save_word = {"egg"};
	string input_word;
	double count_time = 0;
	clock_t startTime = clock();

	cout << save_word.front() << endl;
	while (count_time <= 30000) {
		char change_word = save_word.back().back();
		cout << "���� �ܾ �Է��ϼ��� : ";
		cin >> input_word;
		cout << input_word[input_word.size() - 1] << endl;
		cout << change_word << endl;
		clock_t endTime = clock();
		count_time = endTime - startTime;

		if (input_word[0] == change_word) {
			save_word.push_back(input_word);
			
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�" << endl;
		}
	}
	cout << "�ð��� �ʰ� �Ǿ����ϴ�!" << endl;
	cout << "�Է��� �ܾ��� ������ : "<< save_word .size()-2 << "�Դϴ�";
}