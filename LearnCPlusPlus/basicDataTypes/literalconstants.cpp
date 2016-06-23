#include "literalconstants.h"
#include <limits>  //定义各种数据类型最值常量


/*
文字常量(literal constant): 值不能改变；不可寻址(nonaddressable)
1. 整值类型(integral type)：char, short, int, long
       有无符号: unsigned


*/

void integral_type()
{
    //最大常数
    unsigned int maxInt = INT_MAX;
    std::cout << "#include<limits>定义各种数据类型最值常量：\n\tINT_MAX = " << maxInt << std::endl;

    //八进制
    int eight_int = 024;
    //十六进制
    int sixteen_int = 0x14;

    std::cout << "八进制(024): " << eight_int << "\t十六进制(0x14): " << sixteen_int << std::endl;

    //转义字符
    std::cout << "转义字符\"123\\n466\": " << "123\n456" << "\n转义字符\"789\\14987\": " << "789\14987" << std::endl;

    std::cout << "字符串常量传参给数组<列：fun(\"123\")>，\n\t这里传递的是常量字符串地址，\n\t即是：const char *s"
              << std::endl;

    //宽字符：L'a'   L"a wide string literal"
}
