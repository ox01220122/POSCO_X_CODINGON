using namespace std;
#include <stdlib.h>
#include <iostream>
#include <string> 
class Rectangle {
private:
	float width=0., height=0.;

public:
	Rectangle(float width, float height) {
		this->width = width;
		this->height = height;
	}
	float area() {
		return width * height;
	}


	/*
	//getter
	float get_width() { return width;}
	float get_height() { return height; }

	//setter
	void set_width(float width) { this->width = width; }
	void set_height(float height) { this->height = height; }
	*/
};



int main(){
	float weight, height;
	cout << "����, ���� ���̸� �Է��ϼ���" << endl;
	cout << "���� : ";
	cin >> weight;
	cout << "���� : ";
	cin >> height;
	
	Rectangle r(weight, height);
	float area = r.area();
	cout << area << endl;


}