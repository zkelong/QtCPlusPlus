#include "whatsexpression.h"

void what_is_expression()
{
    expression_define();
}

void expression_define()
{
    //��򵥵ı��ʽ��һ�����ֳ�����һ�����󹹳�
    3.1415926; //�����3.1415926
    "melancholia";  //������ַ�����һ��Ԫ�ص��ڴ��ַ������������const char*
    //upperBound;   //����������������ֵ�����������Ķ���������
    2 + 4;
    int *p = new int(10);
    p != 0 && *p != 0;
    int ival = 0;
    delete p;
}

/*
�������һ����������������
������(operator)
һԪ������(unary operator)����ȡ��ַ������(&)�ͽ����ò�����(*)
��Ԫ������(binary operator)����ӷ�������������������
���ϱ��ʽ(compound expression)�����������������ϵĲ����������������ʱ��
�ӱ��ʽ�ļ���˳���ɲ����������ȼ�(precedence)�ͽ����(associativity)������
*/
