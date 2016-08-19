#include "pointer.h"
#include <iostream>
#include <string>
/*
��(void*)����ָ�룺���Ա��κ�����ָ�����͵ĵ�ַ��ֵ(����ָ�벻�ܸ�ֵ����)��
    void* ������ص�ֵ�Ǹ���ַ�����õ�ַ�Ķ������Ͳ�֪�������ܲ���������ָ����ָ��Ķ���ֻ�ܴ��͸õ�ֵַ������������ֵַ���Ƚϡ�
ָ�����������(pointer arithmetic)��ָ����������ĵ�ֵַ���ӻ����һ������ֵ
*/

void pointer_type()
{
    pointerDefine();
}


void pointerDefine()
{
    int *pint, num;  //����һ��int��ָ�룬һ��int������
    num = 10;
    pint = &num;
    *pint += 1;
    std::cout << "int *pint, num; //һ��intָ�룬һ��int" << std::endl;
    std::cout << "num = 10; pint = &num; *pint += 1;";
    //�����ò�����(*)(dereference operator)����ӵض���дָ����ָ��Ķ���
    std::cout << "num: " << num << "\t*pint: " << *pint << std::endl;

    int *pintx = new int(1024);
    std::cout << "Dynamic allocated(��̬����--new/delete):int *pintx = new int(1024); \n\t*pintx: " << *pintx << std::endl;//��̬����
    delete pintx;

    int *pia = new int[4];
    std::cout << "Dynamic allocated array: int *pia = new int[4]; \n\t*pia: " << *pia
              << "\tpia[0]" << pia[0] << std::endl;  //ȡ*pia[0]����
    delete [] pia;

    int a[10] = {1, 3, 9};
    int *ptr_a = a;
    std::cout << "int a[10] = {1, 3, 9};int *ptr_a = a; \n\tptr_a[0]" << ptr_a[0] << std::endl;

    //const��ָ��
    std::cout << "ָ��const�����ָ�룬��ָ��ͬ��const����ָ������ò��ܸ�ֵ/����" << std::endl;
    const int ca = 10;
    const int * cap = &ca;
    std::cout << "const int *" << *cap << std::endl;
    std::count << "constָ�룬�����ʼ���Ҳ��ܸı䣬ָ������ÿ��Ըı�ֵ" << std::endl;
    int ca2 = 99;
    int * const cap2 = &ca2;
    std::cout << "int * const cap2; *cap2 + 1 = " << *cap2 + 1 << std::endl;
    std::cout << "ָ��const�����constָ�룺const int * const aa" << std::endl;
    std::cout << "typedef string *pstring; const pstring cstr;" << std::endl;
    std::cout << "cstr�������ǣ�constָ��---string * const cstr;" << std::endl;
    std::cout << "string const s1; const string s2; //s1��s2��������һ����" << std::endl;
    std::cout << "typedef��дconst����ʱ��const�޶�������������ǰ�������������������������͵���⡣" << std::endl;
}
