#include "arithmeticoperator.h"

void arithmetic_operator()
{
    arithmetic_define();
}

void arithmetic_define()
{
    int ival1 = 21 / 6;  //��������������������������̺�С�����ص�
    double dval1 = 21.2 / 6;
    std::cout << "ival1: " << ival1 << std::endl;
    std::cout << "dval1: " << dval1 << std::endl;

    //%����������������������������ò�����ֻ�ܱ�Ӧ������ֵ����(char��short��int��long)�Ĳ�����
    //%������������ȡ��(modulus)����(remainder)
    int ival2 = 21 % 6;
    std::cout << "ival2: " << ival2 << std::endl;
}


/*�������ʽ�ļ���ᵼ�²���ȷ��δ�����ֵ����Щ�������Ϊ�����쳣(arithmetic exception)
��ʽ����ת��(explicit type conversion)
ǿ������(cast)
��׼C++ͷ�ļ�limits�ṩ�����������ͱ�ʾ�йص���Ϣ
C++����ϵͳҲ�ṩ�˱�׼Cͷ�ļ�climits��cfloat�����Ƕ������ṩ������ixnx��Ԥ����꣬���Է�ֹ���(overflow)������(underflow)
��һ����ֵ���޸ģ��Ա��ʺϡ�������ʾ������float��double��long double���͡�ʱ���ͻᷢ����������(roundoff)
�������ӷ��������ͼ����Ľ�������յ��ײ��������͵Ĺ��о��ȵ�Ӱ��
*/
