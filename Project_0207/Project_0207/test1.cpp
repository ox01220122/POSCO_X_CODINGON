using namespace std;  
//std namespace ���� �ִ� ��� ��ҿ� ���� ������ Ǯ���ش� (main�� �ȿ��� Ǯ���ָ� main�ȿ����� ��밡��)
#include <iostream>
#include <string>

namespace ns_test {  //�ĺ��ڸ� �� �� �����Ͽ� ������ �ּ�ȭ �ϱ� ���� ���
	namespace ns_test2 { //namespace�ȿ� namespace�� �� �ִ� 
		int num1 = 0;
	}
	int num = 0;
	void test() {
		cout << num << endl;
		cout << "hello world" << endl;
	}
}
using namespace ns_test; //���⼭ Ǯ���ָ� ���⺸�� ���� �ڵ忡���� test�Լ� ������ Ǯ���ش� 
void aaa() {
	num = 7;
	cout << "aaa" << endl;
}
//using namespace ns_test; �̷��� ����ϸ� �ĺ��ڰ� �浹�Ѵ�
using std::cout;  //������ ������ Ǯ���� �� ����Ѵ�
int main() {

	int num = 0;
	ns_test::num = 5; //���⼭ ns_test�� num�� 5�� �ٲ���� test()�Լ��� num����� 5�� �ȴ� 
	test();
	aaa();

	cout << num << endl;
	cout << num << endl;


	return 0;
}