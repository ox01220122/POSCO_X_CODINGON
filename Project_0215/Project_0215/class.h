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
class setting_print {
public:
	void gotoxy(float x, float y); //��ǥ �Լ�
	void GameStartFild(); //���� ����â ��� �Լ� 
	void print_line();
};

class click_control : public setting_print {
public:
	HANDLE COUT = 0;    // �ܼ� ��� ��ġ
	HANDLE CIN = 0;        // �ܼ� �Է� ��ġ
	int be_input();
	int get_input(WORD* vkey, COORD* pos);
};
