class default_setting {

public:
	void gotoxy(float x, float y)
	{
		COORD Pos = { 0,0 };        //x, y�� ������ �ִ� ����ü
		Pos.X = x;
		Pos.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}
	void GameStartFild_test() {
		//����â
		system("mode con cols=80 lines=80 | title ���� ����"); //80,80�� �ִ�
		//GameStartFild_test();

		//���� ���� ���
		gotoxy(25, 10);
		cout << "���� ����!";


		for (int i = 1; i < FIELD_WIDTH; i++) //���⼭�� x�� �״�� �־��ֱ� 
		{
			gotoxy(i, 0);
			cout << "��";
			gotoxy(i, 60);
			cout << "��";
		}
		for (int i = 1; i < FIELD_HEIGHT - 1; i++) {
			gotoxy(0, i);
			cout << "��";
			gotoxy(60, i);
			cout << "��";
		}
		gotoxy(0, 0);
		cout << "��";
		gotoxy(FIELD_WIDTH, 0);
		cout << "��";
		gotoxy(FIELD_WIDTH, FIELD_HEIGHT);
		cout << "��";
		gotoxy(0, FIELD_HEIGHT);
		cout << "��";


		//Start �簢��
		for (int i = 20; i < 40; i++)//x��
		{
			gotoxy(i, 11);
			cout << "��";
			gotoxy(i, 15);
			cout << "��";
		}
		for (int i = 11; i < 15; i++) //y��
		{
			gotoxy(20, i);
			cout << "��";
			gotoxy(40, i);
			cout << "��";
		}

		gotoxy(20, 11);
		cout << "��";
		gotoxy(20, 15);
		cout << "��";
		gotoxy(40, 11);
		cout << "��";
		gotoxy(40, 15);
		cout << "��";

		//���� �� �� ����ϱ� 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);   //���� �� �ٲ��ִ� �Լ� (�����)
		gotoxy(1, 1);
		for (int i = 1; i <= 15; i++)
		{
			for (int j = 15; j > i; j--) { cout << "��"; }
			for (int k = i; k < 15; k++) { cout << " "; }
			cout << "\n";
			gotoxy(1, i);
		}
		//�� �� ����ϱ� (����)
		gotoxy(1, 1);
		for (size_t i = 1; i < 30; i++) { cout << "* "; }
		//�Ʒ� �� ����ϱ� (����)
		gotoxy(1, 28.5);
		for (size_t i = 1; i < 30; i++) { cout << "* "; }


		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   //���� �� �ٲ��ִ� �Լ� (������)
		gotoxy(24, 13);
		cout << "��  Game Start";

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  	//���� �� �ٲ��ִ� �Լ� (���)
		gotoxy(16, 16);
		cout << "�����Ϸ��� Enter�� �����ּ���.";

		int enter;
		gotoxy(30, 25);
		enter = _getch();
		cin.ignore();
		cout << endl << endl << endl << endl;
	}

	void print_line() {
		system("cls");
		for (int i = 1; i < FIELD_WIDTH; i++) //���⼭�� x�� �״�� �־��ֱ� 
		{
			gotoxy(i, 0);
			cout << "��";
			gotoxy(i, 60);
			cout << "��";
		}
		for (int i = 1; i < FIELD_HEIGHT - 1; i++) {
			gotoxy(0, i);
			cout << "��";
			gotoxy(60, i);
			cout << "��";
		}
		gotoxy(0, 0);
		cout << "��";
		gotoxy(FIELD_WIDTH, 0);
		cout << "��";
		gotoxy(FIELD_WIDTH, FIELD_HEIGHT);
		cout << "��";
		gotoxy(0, FIELD_HEIGHT);
		cout << "��";


	}
};