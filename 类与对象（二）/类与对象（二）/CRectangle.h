#pragma once
#include"CPoint.h"
/*
���һ��������CRectangle��������������Ҫ��
���о��ε����½Ǻ����Ͻ��������������Ϣ���������������������CPoint��
���д������Ĺ��캯��CRectangle(const CPoint &, const CPoint &)
�����ֱ������������½Ǻ����Ͻ��������������Ϣ��
�����������½Ǻ��������Ͻǵ�����������Ĺ���SetLPoint(const CPoint &)��SetRPoint(const CPoint &)
���л���ܳ���GetPerimeter���ͻ�������GetArea���Ĺ��ܡ�
*/
class CRectangle {
public:
	CRectangle(const CPoint& newLD, const CPoint & newRu);
	void SetLPoint(const CPoint&);
	void SetRPoint(const CPoint&);
	int GetPerimeter()const;
	int GetArea()const;
private:
	CPoint ld;
	CPoint ru;
};