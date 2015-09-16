#include "complexnumbertype.h"
#include <complex>

void complexnumber_type()
{
    complexnumber_define();
}

void complexnumber_define()
{
    //纯虚数 0 + 7i
    std::complex<double> purei(0, 7);
    //虚数部分缺省为0： 3 + 0i
    std::complex<float> real_num(3);
    //实部和虚部均省为0：0 + 0i
    std::complex<long double> zero;
    //用另一个复数对象来初始化一个复数对象
    std::complex<double> purei2(purei);

    std::complex<double> conjugate[2] = {
        std::complex<double>(2, 3),
        std::complex<double>(2, -3)
    };

    std::complex<double> *ptr = &conjugate[0];
    std::complex<double> &ref = *ptr;

    std::cout << purei << std::endl; //输出内容为（0，7）
    for(int i = 0; i < sizeof(conjugate)/sizeof(std::complex<double>); i++)
    {
        std::cout << conjugate[i] << " ";
    }
    std::cout << std::endl;

    //复数支持加、减、乘、除和相等比较。它也支持对实部和虚部的访问。
}
