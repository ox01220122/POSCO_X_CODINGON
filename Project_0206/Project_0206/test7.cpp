using namespace std;
#include <iostream>
#include <string>
#include <vector>
int main() {
	//2���� ���� 
	
	vector<vector<int>> vec_2d;  //2���� ����
	vector <int> vec1;
	vector <int> vec2;
	
	

	//3*2����� �����  (�� 0���� �ʱ�ȭ �Ǿ�����) (3��2��)
	vec_2d.assign(3, vector <int>(2,1)); //�����̸� �Ⱦ��� �ٷ� ����� �� �ִ� (3���� 2���� ���� �Ҵ�-1�� �־���)
	//(3ũ��) , (�����Ұ� 1,ũ�� 2¥�� ���ͷ� �Ҵ� )
	for (int i = 0; i < vec_2d.size(); i++) //vec_2d.size()�� ���� �ǹ��Ѵ� 
	{
		for (int j = 0; j < vec_2d.at(i).size(); j++) {  
			//vec_2d.at(i).size()�� {{,},{,},{,}}���� �迭[i]�� ũ��
			//cout << vec_2d[i][j] << " ";
			cout << vec_2d.at(i).at(j)<<" ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	//for each�� ����Ѵ� 
	for (vector<int> vv2 : vec_2d) //auto�� ���� ����Ѵ� 
	{
		for (int vvv2 : vv2) {
			cout << vvv2 << " ";
		}
		cout << endl;
	}


	










	return 0;
}