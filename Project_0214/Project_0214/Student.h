#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Person.h"
#ifndef __STUDENT_H__  //if not define : __PERSON_H__�� ���ǵǾ����� �ʴٸ� 
#define __STUDENT_H__ 
class Student :public Person {
private:
	string stu_id;
public:
	~Student();
	void info();
	void test();
};
#endif