using namespace std;
#include <iostream>
#include <string>
#include <vector>
int main() {
	//���� - �����迭�� �Ҵ��� �� ����Ѵ� (�˾Ƽ� �����迭�� ������ְ� ������ ���ش� )

	//vector<int> v1(3); //ũ�Ⱑ 3�� �迭(�ڵ����� 0���� �ʱ�ȭ )
	//vector<int> v2(3, 1); // ũ�Ⱑ 3�� �迭�� �����ϰ� ���Ҹ� ��� 1�� �ʱ�ȭ 
	/*
	int num;
	cout << "���� �Է� : ";
	cin >> num;
	*/
	vector<int> v3 = { 1,2,3,4,5 }; //ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ (��ü�� �ϳ� �����ߴٰ� ����)
	//v3.assign(num, 1); //num�� ũ�� , ��� ���� 1�� �Ҵ� 
	//vector<int> v(num,1)�� ���� 
	


	//������ ũ�⸦ �� �� �ִ� �޼ҵ��� size�� �����ȴ� 
	for (int i = 0; i < v3.size(); i++) {
		//cout << v3[i] << " ";
		cout << v3.at(i) << " ";  // at�̶�� �޼ҵ�� �ε����� ������ �� �ִ� 
	}
	cout << endl;

	v3.resize(6); //����� 5���� ���� 6���� �ٲٴµ� 6��° ���Ҹ� 0���� �Ҵ��ϰ� �ٲ��
	//Ŀ�� ���̸�ŭ 0���� �ʱ�ȭ �ȴ� 
	v3.push_back(10); //�迭�� �������� ���ϴ� ���Ҹ� �߰��մϴ�  (6��°���Ұ� 0�̵ż� 7��° ���Ұ� 10���� �ʱ�ȭ)
	for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " ";}
	cout << endl;
	
	
	v3.pop_back(); //������ ���Ҹ� ������Ų��
	for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " "; }
	cout << endl;

	v3.pop_back(); //������ ���Ҹ� ������Ų�� (�迭�� ���̸� 1 �ٿ������� )
	for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " "; }
	cout << endl;

	cout << v3.back() << " ";  //front : ���� ó�� ����  back : ���� ������ ���� 
	cout << endl;

	v3.insert(v3.begin()+1,99); //���ϴ� ��ġ�� ���ϴ� ���� �־��� �� �ִ� (2�� �ε����� 99�� �߰��ϴ� �ڵ�)
	//���� 2���ε����� �ִ� 3�� �ڷ� �и��� 
	//v3.begin�� �迭�� ���� ó�� �ּҸ� ����Ѵ� +1�Ѹ�ŭ �ε����� �ٲ�� 
	for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " "; }
	cout << endl;

	v3.erase(v3.begin() + 3,v3.begin()+5); //3��~4��(5���� ����) �ε����� �ִ°��� �����ϰڴٴ� �� 
	for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " "; }
	cout << endl;


	//v3.clear(); //�迭�� ��� ���� ���� (�迭�� ũ�Ⱑ 0)
	//for (int i = 0; i < v3.size(); i++) { cout << v3.at(i) << " "; }
	//cout << endl;


	for (auto &a : v3) {   // ���������ڸ� ����ϸ� ������ �迭���� ���� ����Ű�� �ȴ�(������ �� ���氡��) 
		a += 1;
		cout << a << " ";
	} 
	// for each���� ����ؼ� �迭�� ���� ���������� �ٲٷ��� �ȿ� ���� �����ڸ� ���(������ ���� �ٲ�� ) 
	//&�� ������� ������ a��� ������ �ϳ����� �����Ǿ �޸𸮰� �ƾ� �ٸ� ������ ����Ų�� 
	

	


	return 0;
}