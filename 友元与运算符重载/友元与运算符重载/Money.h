#pragma once
#include<iostream>
using namespace std;

class Money
{
public:
	Money(int yy=0, int jj=0, int ff=0) :yuan(yy), jiao(jj), fen(ff) {}
	Money operator --(int){       //���õ�Ŀ���������
		yuan -= 1;
		return *this;
	}
	Money operator--()           //���õ�Ŀ���������
	{
		yuan -= 1;
		return (yuan + 1, jiao, fen);
	}
	void Show()const {
		cout << yuan << "Ԫ" << jiao << "��" << fen << "��";
	}
private:
	int yuan;
	int jiao;
	int fen;
};