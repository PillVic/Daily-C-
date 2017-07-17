#pragma once
#include<string>
using namespace std;
enum condition { ON, OFF };
class Fan {
public:
	Fan(int ss, int rr, string cc, condition oo);
	//����Ϊ���ʺ���
	void display();
	void showSpeed();
	void showColor();
	void showRadius();
	void showOn();
	//����Ϊ���ĺ���
	void setSpeed(int newS);
	void setColor(string newC);
	void setRadius(int newR);
	void setOn(condition newO);
private:
	int speed;
	int radius;
	string color;
	condition on;
};