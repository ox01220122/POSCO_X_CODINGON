#include "class.h";

int main(void) {

	setting_print s_p;
	click_control c_c;

	s_p.GameStartFild();
	s_p.print_line();

	DWORD mode;
	WORD key;
	COORD pos;

	int event;        // ���콺 �̺�Ʈ�� �̿�
	int x;            // ���콺�� x��ǥ �����
	int y;            // ���콺�� y��ǥ �����

	c_c.CIN = GetStdHandle(STD_INPUT_HANDLE);
	c_c.COUT = GetStdHandle(STD_OUTPUT_HANDLE);

	// ���콺 Ȱ��ȭ
	GetConsoleMode(c_c.CIN, &mode);
	SetConsoleMode(c_c.CIN, mode | ENABLE_MOUSE_INPUT);

	while (1) //�Է� �ޱ� ���ѹݺ�
	{
		if (c_c.be_input())
		{
			if (c_c.get_input(&key, &pos) != 0)
			{
				// ���콺Ŭ������ x,y������ ����ǵ�����
				MOUSE_EVENT;
				x = pos.X;    
				y = pos.Y;
				s_p.gotoxy(x, y);
				cout << "��";//������ �� ��� (���⼭ ���߿� ���� ���� �ɾ��ֱ�)
			}
		}
	}
}