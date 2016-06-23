#include "variable.h"

/*
�����ǿ�Ѱַ��(addressable)
������ֵ�����������
    1. ��������ֵ����ֵ(rvalue)
    2. ���ĵ�ֵַ����ֵ(lvalue)
 ��������(declaration)��
    �ɹؼ���extern�Լ����ں���Ķ��������Լ���������ֹ���
    ���Ƕ��壬���������ڴ����
C++�ؼ���
    ����������Ϊ�ؼ���
*/

void varable_type()
{
    varable_define();
}

void varable_define()
{
    int ival = 2048; //��ʾ�﷨����ֵ������
    int iival(2048); //��ʽ��ʽ

    std::cout << "����(variable)��Ѱַ�ģ�addressable����������extern int xx������ͬ���壬���������ڴ����" << std::endl;
    std::cout << "��ʾ��ֵ��int ival = 2048; ��ʽ��ֵ��int iival(2048);" << std::endl;

    //ÿ�������������Ͷ�֧��һ������Ĺ��캯���﷨���ɽ������ʼ��Ϊ0��
    int int1 = int();
    double double1 = double();

    std::cout << "ÿ�������������Ͷ�֧��һ������Ĺ��캯���﷨���ɽ������ʼ��Ϊ0:"
              << "\n\t int int1 = int(); double double1 = double();" << std::endl;
    std::cout << "ival1, iival, int1, double1��ֵ��" << ival << '\t' << iival << '\t' << int1 << '\t' << double1 << std::endl;
}
