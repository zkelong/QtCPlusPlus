#include "complexnumbertype.h"
#include <complex>

void complexnumber_type()
{
    complexnumber_define();
}

void complexnumber_define()
{
    //������ 0 + 7i
    std::complex<double> purei(0, 7);
    //��������ȱʡΪ0�� 3 + 0i
    std::complex<float> real_num(3);
    //ʵ�����鲿��ʡΪ0��0 + 0i
    std::complex<long double> zero;
    //����һ��������������ʼ��һ����������
    std::complex<double> purei2(purei);

    std::complex<double> conjugate[2] = {
        std::complex<double>(2, 3),
        std::complex<double>(2, -3)
    };

    std::complex<double> *ptr = &conjugate[0];
    std::complex<double> &ref = *ptr;

    std::cout << purei << std::endl; //�������Ϊ��0��7��
    for(int i = 0; i < sizeof(conjugate)/sizeof(std::complex<double>); i++)
    {
        std::cout << conjugate[i] << " ";
    }
    std::cout << std::endl;

    //����֧�ּӡ������ˡ�������ȱȽϡ���Ҳ֧�ֶ�ʵ�����鲿�ķ��ʡ�
}
