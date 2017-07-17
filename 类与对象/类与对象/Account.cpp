#include<iostream>
#include"Account.h"

using namespace std;
//���캯��
Account::Account(int ii, double bb, double aa) {
	id = ii;
	balance = bb;
	annualInterestRate = aa;
}

//���ĺ���
void Account::setId(int newI) {
	id = newI;
}
void Account::setBalance(double newB) {
	balance = newB;
}
void Account::setAnnualInterestRate(double newA) {
	annualInterestRate = newA;
}

//���ʺ���
int Account::getId() {
	return id;
}
double Account::getBalance() {
	return balance;
}
double Account::getAnnualInterestRate() {
	return annualInterestRate;
}
double Account::getMonthlyInterestRate() {
	return annualInterestRate / 12;
}

//֧ȡ�ʹ���
void Account::withdraw(int money) {
	balance -= money;
}
void Account::deposit(int money) {
	balance += money;
}

//�����˻�����
double Account::updateBalance(int month) {
	double copyBalance = balance;
	for (int i = 1; i <= month; i++) {
		copyBalance += getMonthlyInterestRate()*copyBalance;
	}
	return copyBalance;
}
