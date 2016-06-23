#include "pointer.h"
#include <iostream>
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
}
