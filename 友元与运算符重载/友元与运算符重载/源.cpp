#include"Array.h"
#include"Complex.h"
#include"Money.h"

using namespace std;

int main() {
	/*
	���������ж��帴������c1(10,20)��c2(15,30)
	����c2-=c1�ĸ������㣬�����c1��c2�ĸ���ֵ*/
	Complex c1(10, 20);
	Complex c2(15, 30);
	c2 -= c1;
	c1.Show();
	c2.Show();
	//2
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	int b[10] = { 4,5,6,7,8,9,10,11,12,13 };
	Array arr1(a);
	Array arr2(b);
	Array arr3 = arr1 + arr2;
	arr3.show();
	arr1 += arr2;
	arr1.show();
	//3
	/*���������ж�������Ҷ���m1=10Ԫ8��5�� ����m2��m3
	��m1��ǰ�á��D�D��������m2����m1�����á��D�D��������m3����ʾm1��m2��m3�Ľ����*/
	Money m1(10, 8, 5), m2, m3;
	m2 = --m1;
	m3 = m1--;
	m1.Show();
	cout <<endl;
	m2.Show();
	cout << endl;
	m3.Show();
	return 0;
}