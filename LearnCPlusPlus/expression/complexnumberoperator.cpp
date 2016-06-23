#include "complexnumberoperator.h"
#include <complex>

void complexnumber_operator()
{
    complexnumber_example();
}

void complexnumber_example()
{
    std::complex<double> com_obj1(10.12, 25.1);
    std::complex<double> com_obj2(13.54, 34.3);
    double com_real1 = com_obj1.real();
    double com_img1 = com_obj1.imag();
    std::complex<double> com_obj3 = com_obj1 + com_obj2;

    std::cout << "com_obj1: " << com_obj1 << "\tcom_ral1: " << com_real1 << std::endl;
    std::cout << "com_obj2: " << com_obj2 << "\tcom_img1: " << com_img1 << std::endl;
    std::cout << "com_obj3: " << com_obj3 << std::endl;
}

/*
复数支持四种复合赋值操作符：+=、-=、*=、/=
*/
