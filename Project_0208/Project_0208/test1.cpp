using namespace std;
#include <stdlib.h>
#include <iostream>
#include <string>  
struct Position  //����ü�� Ŭ������ �Ѱ��� �ٸ� ���� �ִ� 
{
	int x;
	int y;
};

int main() {
	//namespace�� ���̴� namespace�� ������ ���� �� ������(������ ���� �� ������ Ȯ���ϰ� �����ֱ� ���� - ���� ::)
	//struct�� �ʿ��� �������� ���� �� �ξ��ٰ� ���� 
	
	
	//����� �Ҵ��� ���� �� 
	Position p; 
	p.x = 3;
	p.y = 4; 	
	//����� �Ҵ��� ���� �� (���� ���� �ǹ� )
	//Position p = { 3,4 };


	cout << p.x << " " << p.y <<endl;

	return 0;
}