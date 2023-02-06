using namespace std;
#include <iostream>
#include <string>
#include <stdlib.h>




enum AI_MODE  //enum�� ���ȭ ������ ����� ���� ���·� �����ϴ� ���
{
	AM_EASY = 1,
	AM_HARD  //2�� ���� ������ �ȴ� 
};
enum LINE_NUMBER
{
	LN_H1,
	LN_H2,
	LN_H3,
	LN_H4,
	LN_H5,
	LN_V1,
	LN_V2,
	LN_V3,
	LN_V4,
	LN_V5,
	LN_LT,
	LN_RT
};

void setNumber(int* pArray);
void Shuffle(int* pArray);
AI_MODE SelectAIMode();
void OutputNumber(int *pArray, int iBingo);
bool ChangeNumber(int *pArray, int input);



int main() {

	/*
	//�Լ� : ������ ����� �� �ִ� ��ǰ���� ������ش�
	//��ȯŸ���� �Լ��� ����� �����ϰ� ����� ����� ��ȯ�ؾ� �� ��� ����
	//�Լ��� �����ε� : ���� �̸��� �Լ����� ����� �ٸ����� ���ڰ� �ٸ� �Լ�
	//���� : �Լ��̸��� ������ ���ƾ��Ѵ�. �� ���ڰ���, Ÿ���� �޶�� �����ε�
	//��ȯŸ���� �����ε��� ������ ���� �ʴ´�
	//�Լ��� ����Ʈ ���� : ���ڿ� �⺻������ ���� �����صθ� ���ڸ� �ȳѱ���
	//�� ���� ���Եǰ� �ѱ��� �ѱ� ������ ������ �ȴ�
	//����Ʈ ���ڴ� ���� �����ʺ��� ������ �־���Ѵ�

	int num = 5;
	cout << num << endl;
	changeNum(&num);
	cout << num << endl;
	 */

	 //�������
	srand((unsigned int)time(0));
	//�迭 ����
	int iNumber[25] = {};
	int iAINumber[25] = {};

	//1���� 25������ ���ڸ� �־��ش� (�迭�� �̸��� �ּ���)
	setNumber(iNumber);
	setNumber(iAINumber);

	//�迭�� �����ش� 
	Shuffle(iNumber);
	Shuffle(iAINumber);


	//���̵��� �����Ѵ� 
	int iBingo = 0, iAIbingo=0;
	int iAIMode = SelectAIMode();  //���̵��� ���õǾ� return�ȴ� 

	//���� �ȵ� ��� �迭�� ������ش� 
	int iNoneSelect[25] = {};
	//���� �ȵ� ���� ������ �����Ѵ� 
	int iNoneSelectCount = 0;



	while (true)
	{
		system("cls");
		//���ڸ� 5*5�� ����Ѵ� 
		cout << "============== Player ==============" << endl;
		OutputNumber(iNumber, iBingo);
		//AI�������� ����Ѵ�
		cout << "============== AI Player ==============" << endl;
		switch (iAIMode)
		{
		case AM_EASY:
			cout << "AI Mode : Easy" << endl;
		case AM_HARD:
			cout << "AI Mode : Hard" << endl;
			break;
		}
		OutputNumber(iAINumber, iAIbingo);


		//�ټ��� 5�̻��� ��� ������ �����Ѵ� 
		if (iBingo >=5)
		{
			cout << "Player�¸�" << endl;
			break;
		}
		else if (iAIbingo >= 5) {
			cout << "Player�¸�" << endl;
			break;
		}

		cout << "���ڸ� �Է��ϼ��� (0 : ����)";
		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;
		else if (iInput < 1 || iInput>25)
			continue;

		//�ߺ��Է��� üũ�ϱ� ���� �����̴�. �⺻������ �ߺ��Ǿ��� ��� 
		//�ϱ� ���� true�� ����־��� 
		bool bAcc = ChangeNumber(iNumber, iInput);

		if (bAcc)
			continue;

		//AI���� �ٲٱ� 
		ChangeNumber(iAINumber, iInput);
	}
}






void setNumber(int* pArray) {
	for (int i = 0; i < 25; i++) {
		pArray[i] = i + 1;
	}
}

void Shuffle(int* pArray) {

	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; i++)
		idx1 = rand() % 25;  //1~25������ ���ڸ� �־��ش� 
		idx2 = rand() % 25; //1~25������ ���ڸ� �־��ش� 

		iTemp = pArray[idx1];
		pArray[idx1] = pArray[idx2];
		pArray[idx2] = iTemp;
}

AI_MODE SelectAIMode() {

	int iAIMode;
	while (true)
	{
		system("cls");  //ȭ��Ŭ���� 
		cout << "1 : Easy" << endl;
		cout << "2 : Hard" << endl;
		cout << "AI��带 �����ϼ��� : ";
		cin >> iAIMode;
		if (iAIMode >= AM_EASY && iAIMode<=AM_HARD)
			break; //����� ���������� break���ȴ� 
	}

	return (AI_MODE)iAIMode;  //�Լ� Ÿ������ ����ȯ�ؼ� return �Ѵ� 
}


//���� ī��Ʈ ���
void OutputNumber(int* pArray, int iBingo) {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (pArray[i * 5 + j] == INT_MAX)
			{
				cout << "*\t";
			}
			else
				cout << pArray[i * 5 + j] << "*\t";
		}
		cout << endl;
	}	
	cout << "Bingo Line : " << iBingo << endl << endl;

}

bool ChangeNumber(int* pArray, int input) {
	for (int i = 0; i < 25; i++)
	{
		if (pArray[i] == input) {
			pArray[i] == INT_MAX;
			return false;
		}
	}
	//������� ���� �Ǹ� return false�� ���۾ȵȰ��̹Ƿ� �ߺ��� ���ڸ� �Է��Ѱ�
	return true;
}
