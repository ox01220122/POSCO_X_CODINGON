#pragma once
using namespace std;
#include <iostream>
#include <string>

#ifndef __PERSON_H__  //if not define : __PERSON_H__�� ���ǵǾ����� �ʴٸ� 
#define __PERSON_H__ //_PERSON_H_�� �����Ѵ� #endif�� ������ �������� ������ 
class Person {
protected:
	string name;
	static int count;  //int�� ������ static������ ������ ��  (��ü�� �������̴� )
	//static �� �Ϲ�Ŭ���� �����̴� 
public:
	static int get_count();
	static void static_method();
	Person();
	virtual ~Person();
	virtual void info();
	virtual void test();
	void set_name(string name);
	string get_name();
	
};
#endif;