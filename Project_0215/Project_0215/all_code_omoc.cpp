#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <algorithm>
#include <stdio.h>
#include <conio.h>
#include <windowsx.h>
#define FIELD_WIDTH 60 // ����â ������ ��
#define FIELD_HEIGHT 30 // ����â ������ ����
using namespace std;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);




HANDLE COUT = 0;    // �ܼ� ��� ��ġ
HANDLE CIN = 0;        // �ܼ� �Է� ��ġ


void gotoxy(float x, float y)
{
	COORD Pos = { 0,0 };        //x, y�� ������ �ִ� ����ü
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


void GameStartFild_test() {
	//����â ũ������
	system("mode con cols=80 lines=80 | title ���� ����");

	//"�������" ���� ���
	gotoxy(25, 10);
	cout << "���� ����!";

	for (int i = 1; i < FIELD_WIDTH; i++) //�⺻ â ���
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
	/*
	for (size_t j = 0; j < 15; j++)
	{
		for (int i = 1; i < FIELD_HEIGHT - 1; i++) {
			gotoxy(0, i);
			cout << "��";
	}


	*/





}
/*
int be_input()
{
	INPUT_RECORD input_record;
	DWORD input_count;

	PeekConsoleInput(CIN, &input_record, 1, &input_count);
	return input_count;
}

int get_input(WORD* vkey, COORD* pos) {
	INPUT_RECORD input_record;
	DWORD input_count;

	ReadConsoleInput(CIN, &input_record, 1, &input_count);
	switch (input_record.EventType) {
	case MOUSE_EVENT:
		if (pos && (input_record.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)) {
			CONSOLE_SCREEN_BUFFER_INFO csbi;

			GetConsoleScreenBufferInfo(COUT, &csbi);

			*pos = input_record.Event.MouseEvent.dwMousePosition;
			pos->X -= csbi.srWindow.Left;
			pos->Y -= csbi.srWindow.Top;

			return MOUSE_EVENT;
		}
		break;

	}

	//    FlushConsoleInputBuffer(CIN);
	return 0;
}



int main() {
	
	DWORD mode;
	WORD key;
	COORD pos;

	int event;        // ���콺 �̺�Ʈ�� �̿�
	int x;            // ���콺�� x��ǥ �����
	int y;            // ���콺�� y��ǥ �����
	//GameStartFild_test();
	CIN = GetStdHandle(STD_INPUT_HANDLE);
	COUT = GetStdHandle(STD_OUTPUT_HANDLE);

	// ���콺 Ȱ��ȭ
	GetConsoleMode(CIN, &mode);
	SetConsoleMode(CIN, mode | ENABLE_MOUSE_INPUT);

	
	while (1){
		if (be_input()){
			if (get_input(&key, &pos) != 0){
				MOUSE_EVENT;
				x = pos.X;    // ���콺Ŭ������ x,y������ ����ǵ�����
				y = pos.Y;
				gotoxy(x, y);
				printf("����!");
			}
		}
	}



	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	

	POINT a;
	HWND hWnd;
	int width = 0;
	RECT window_size;

	a.x = 0;
	a.y = 0;


	while (1)
	{


		GetCursorPos(&a);
		hWnd = WindowFromPoint(a);
		ScreenToClient(hWnd, &a);
		GetWindowRect(hWnd, &window_size);
		width = (window_size.right - window_size.left);

		if ((0 < a.x) && (a.x < (int)(width / 2)))
		{
			gotoxy(1, 30);
			printf("X point = %d, Y point = %d\n\r", a.x, a.y);
		}

		else if (((int)(width / 2) < a.x) && (a.x < (int)width))
		{
			gotoxy(1, 30);
			printf("Y point = %d, X point = %d\n\r", a.y, a.x);
		}
	}
	Sleep(500);

}

int main(int argc, char* argv[]) {
	INPUT_RECORD rc;
	DWORD        dw;
	int mouse_XY[2];
	COORD pos = { 0,0 };

	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	while (1) {

		ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &rc, 1, &dw); //�ڵ����� 
		mouse_XY[0] = rc.Event.MouseEvent.dwMousePosition.X; //X��ǥ 
		mouse_XY[1] = rc.Event.MouseEvent.dwMousePosition.Y; //Y��ǥ 

		FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 100, pos, &dw); //ȭ�� �����         
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //�ܼ���ǥ�̵� 
		printf("%d, %d\n", mouse_XY[0], mouse_XY[1]);

	}
	return 0;
}


#include <windows.h>
#include <stdio.h>

INPUT_RECORD rec;
DWORD dwNOER;
HANDLE CIN = 0;

void click(int* xx, int* yy, int* lr) {
	while (1)
	{
		ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &rec, 1, &dwNOER); // �ܼ�â �Է��� �޾Ƶ���.
		if (rec.EventType == MOUSE_EVENT) {// ���콺 �̺�Ʈ�� ���

			if (rec.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) { // ���� ��ư�� Ŭ���Ǿ��� ���
				int mouse_x = rec.Event.MouseEvent.dwMousePosition.X; // X�� �޾ƿ�
				int mouse_y = rec.Event.MouseEvent.dwMousePosition.Y; // Y�� �޾ƿ�

				*xx = mouse_x; //x���� �ѱ�
				*yy = mouse_y; //y���� �ѱ�
				*lr = 1; //���콺 Ŭ�����¸� �ѱ�

				break;
			}
			else if (rec.Event.MouseEvent.dwButtonState & RIGHTMOST_BUTTON_PRESSED) { // ���� ��ư�� Ŭ���Ǿ��� ���
				int mouse_x = rec.Event.MouseEvent.dwMousePosition.X; // X�� �޾ƿ�
				int mouse_y = rec.Event.MouseEvent.dwMousePosition.Y; // Y�� �޾ƿ�

				*xx = mouse_x; //x���� �ѱ�
				*yy = mouse_y; //y���� �ѱ�
				*lr = 2; //���콺 Ŭ�����¸� �ѱ�

				break;
			}
		}
	}
}

int main() {
	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	//���콺 �Է¸��� �ٲ�

	int xx, yy, lr;
	while (1) {

		click(&xx, &yy, &lr);
		cout << xx << " " << yy << " " << lr << endl;

	}

}



INPUT_RECORD rec;
DWORD        dwNOER;

void CheckMouse()
{
	while (true)
	{
		ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &rec, 1, &dwNOER); // �ܼ�â �Է��� �޾Ƶ���.
		if (rec.EventType == MOUSE_EVENT) // ���콺 �̺�Ʈ�� ���
		{
			if (rec.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) // ���� ��ư�� Ŭ���Ǿ��� ���
			{
				int mouse_x = rec.Event.MouseEvent.dwMousePosition.X; // X�� �޾ƿ�
				int mouse_y = rec.Event.MouseEvent.dwMousePosition.Y; // Y�� �޾ƿ�
				COORD Coor = { 0, 0 };
				DWORD dw;
				FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 80 * 25, Coor, &dw); // �ܼ�â ȭ���� �����.
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coor); // Ŀ���� 0, 0���� �̵���Ų��.
				printf("%d, %d", mouse_x, mouse_y); // ��ǥ�� ����Ѵ�.
				return;
			}
		}
	}
}

void main()
{
	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	while (true)
	{
		CheckMouse();
	}
}
*/


int main() {
	GameStartFild_test();
}