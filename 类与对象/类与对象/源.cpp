#include"Fan.h"
#include<iostream>
#include"Account.h"

using namespace std;

int main() {
	//ʵ��1
	//��main�����д���2��Fan�Ķ���
	//����һ�����ȵ�ת�١��뾶����ɫ�ֱ�����Ϊ3��10��yellow���������򿪡�
	//�ڶ������ȵ�ת�١��뾶����ɫ�ֱ�����Ϊ2��5��blue���������رա��������2�����ȵ�������Ϣ��
	Fan fan1(3, 10, "yellow", ON);
	Fan fan2(2, 5, "blue", OFF);
	fan1.display();
	fan2.display();
	//ʵ��2
	Account someone(1122, 20000, 0.045);
	someone.withdraw(2500);
	someone.deposit(3000);
	cout << "Now you have " << someone.getBalance() << endl;
	cout << "The monthly interest rate is " << someone.getMonthlyInterestRate() << endl;
	cout << "You have " << someone.updateBalance(24) << "after 2 year s" << endl;
	return 0;
}