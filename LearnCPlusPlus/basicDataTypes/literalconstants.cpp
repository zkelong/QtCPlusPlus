#include "literalconstants.h"
#include <limits>  //定义各种数据类型最值常量


/*
文字常量(literal constant): 值不能改变；不可寻址(nonaddressable)
1. 整值类型(integral type)：char, short, int, long
       有无符号: unsigned


*/

void integral_type()
{
    unsigned int maxInt = INT_MAX;
    std::cout << maxInt << std::endl;

    //八进制
    int eight_int = 024;
    //十六进制
    int sixteen_int = 0x14;

    std::cout << eight_int << "\t" << sixteen_int << std::endl;

    //转义字符
    std::cout << "123\n456" << "789\14987" << std::endl;

    //宽字符：L'a'   L"a wide string literal"
}
