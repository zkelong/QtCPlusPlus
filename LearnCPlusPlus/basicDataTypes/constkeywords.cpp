#include "constkeywords.h"

using namespace std;

void const_keywords()
{
    const_using();
}

void const_using()
{
    const int bufSize = 512;
    //bufSize += 1;
    std::cout << "bufSize: " << bufSize << std::endl;

    count << "const int bufSize = 512; //��ʾ����Ǹ�����" << endl;
    cout << "��һ����const�����ָ��ָ��һ���������󣬻�����������" << endl;

    //��ͼ��һ����const�����ָ��ָ��һ���������󣬻�����������
    const double *cptr; //ָ��double���͵�const�����ָ�룬ָ��Ķ����ǳ�����cptr�����ǳ������������¸�ֵ
    const double minWage = 9.60;    //������ʼ��
    cptr = &minWage;
    const double pi = 3.1415926;
    const double *const pi_ptr = &pi; //pi_strָ��Ķ����ֵ�Լ����ĵ�ַ�������ܱ��ı�
    std::cout << "bufSize: " << bufSize << "\t"
              << "minWage: " << minWage << "\t"
              << "*cptr: " << *cptr << "\t"
              << "pi: " << pi << "\t"
              << "pi_ptr: " << pi_ptr << "\t"
              << "*pi_ptr: " << *pi_ptr << std::endl;
}

/*
const��ָ�볣��������������ʽ����
int strcmp(const char *str1, const char *str2);
*/
