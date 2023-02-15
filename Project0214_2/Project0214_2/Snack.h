#pragma once
#include <iostream>
#include <string>
using std::string;

#ifndef __SNACK_H__  
#define __SNACK_H__ 

class Snack {
protected:
	string price; //����
	string product_name; //��ǰ�̸�
	string company; //����ȸ��
	Snack(string price, string product_name, string company);
public:
	static int count;
	virtual void print_Snack();
	static int get_count();
};


#endif 
