#include "newdeleteexpression.h"
#include <string>

typedef std::string string;

void newdelete_expression()
{
    newdelete_example();
}

void newdelete_example()
{
    int *ip1 = new int; //û�г�ʼ��
    *ip1 = 100;
    std::cout << "*ip1: " << *ip1 << std::endl;
    delete ip1;

    int *ip2 = new int(1024);
    std::cout << "*ip2: " << *ip2 << std::endl;
    delete ip2;

    int *iap = new int[10];
    std::cout << "*iap[9]: " << *iap + 1 << std::endl;
    delete [] iap;

    string *sp = new string;
    *sp = "test ok!!!";
    std::cout << "*sp: " << *sp << "sizeof *sp: " << sizeof(*sp) <<  std::endl;
    delete sp;

    string *sap = new string[10];
    std::cout << "*sap: " << *sap  << "sizeof *sap: " << sizeof(*sap) << "  sizeof sap: " << sizeof(sap) << std::endl;
    delete [] sap;
}

/*
ϵͳΪÿ�������ṩ��һ���ڳ���ִ��ʱ���õ��ڴ�ء�
��������ڴ�ر���Ϊ����Ŀ��д洢��(free store)���(heap)��
��̬�ڴ����(dynamic memory allocation);;����ָʾ��(specifier)

//////////
������new����ĵ���������ڴ�ռ��ʱ����delete��
������new[]�����һ�������ڴ�ռ��ʱ����delete[]
new[]��delete[]�������������1.Ϊ�����������ͷ���ͻ��տռ䣻2.λ�Զ������ͷ���ͻ��տռ�
����� delete[]�����ڻ��տռ�֮ǰ���ж��󶼻����ȵ����Լ�������������
�������͵Ķ���û���������������Ի��ջ���������ɵ�����ռ��� delete �� delete[] ����Ӧ�ÿ��Եģ�
���Ƕ�����������飬ֻ���� delete[]������ new �ĵ�������ֻ���� delete ������ delete[] ���տռ䡣
����һ���򵥵�ʹ��ԭ����ǣ�new �� delete��new[] �� delete[] ��Ӧʹ�á�
*/
