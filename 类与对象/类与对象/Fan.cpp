#include"Fan.h"
#include<iostream>

using namespace std;

//�˴����Ϲ��캯��
Fan::Fan(int ss, int rr, string cc, condition oo) {
	speed = ss;
	radius = rr;
	color = cc;
	on = oo;
}
//����Ϊ��Ա������ʵ��
void Fan::display() {
	showSpeed();
	showColor();
	showRadius();
	showOn();
}
void Fan::showSpeed() {
	cout << "speed is " << speed << endl;
}
void Fan::showColor() {
	cout << "color is " << color << endl;
}
void Fan::showRadius() {
	cout << "radius is " << radius << endl;
}
void Fan::showOn() {
	on == ON ? cout << "ON" << endl : cout << "OFF";
}
void Fan::setSpeed(int newS) {
	speed = newS;
}
// �˴����Ϲ���color������ʵ��
void Fan::setColor(string newC) {
	color = newC;
}
//
void Fan::setRadius(int newR) {
	radius = newR;
}
void Fan::setOn(condition newO) {
	on = newO;
}
