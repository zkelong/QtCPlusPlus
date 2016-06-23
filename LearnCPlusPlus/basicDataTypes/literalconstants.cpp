#include "literalconstants.h"
#include <limits>  //�����������������ֵ����


/*
���ֳ���(literal constant): ֵ���ܸı䣻����Ѱַ(nonaddressable)
1. ��ֵ����(integral type)��char, short, int, long
       ���޷���: unsigned


*/

void integral_type()
{
    //�����
    unsigned int maxInt = INT_MAX;
    std::cout << "#include<limits>�����������������ֵ������\n\tINT_MAX = " << maxInt << std::endl;

    //�˽���
    int eight_int = 024;
    //ʮ������
    int sixteen_int = 0x14;

    std::cout << "�˽���(024): " << eight_int << "\tʮ������(0x14): " << sixteen_int << std::endl;

    //ת���ַ�
    std::cout << "ת���ַ�\"123\\n466\": " << "123\n456" << "\nת���ַ�\"789\\14987\": " << "789\14987" << std::endl;

    std::cout << "�ַ����������θ�����<�У�fun(\"123\")>��\n\t���ﴫ�ݵ��ǳ����ַ�����ַ��\n\t���ǣ�const char *s"
              << std::endl;

    //���ַ���L'a'   L"a wide string literal"
}
