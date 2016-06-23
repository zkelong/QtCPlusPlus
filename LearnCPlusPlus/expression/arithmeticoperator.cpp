#include "arithmeticoperator.h"

void arithmetic_operator()
{
    arithmetic_define();
}

void arithmetic_define()
{
    int ival1 = 21 / 6;  //两个整数相除结果是整数，如果商含小数，截掉
    double dval1 = 21.2 / 6;
    std::cout << "ival1: " << ival1 << std::endl;
    std::cout << "dval1: " << dval1 << std::endl;

    //%操作符计算两个数相除的余数，该操作符只能被应用在整值类型(char、short、int和long)的操作数
    //%操作符被称作取摸(modulus)或求(remainder)
    int ival2 = 21 % 6;
    std::cout << "ival2: " << ival2 << std::endl;
}


/*算术表达式的计算会导致不正确或未定义的值，这些情况被成为算数异常(arithmetic exception)
显式类型转换(explicit type conversion)
强制类型(cast)
标准C++头文件limits提供了与内置类型表示有关的信息
C++编译系统也提供了标准C头文件climits和cfloat，他们定义了提供了类似ixnx的预处理宏，可以防止溢出(overflow)和下溢(underflow)
当一个数值被修改，以便适合”用来表示概述的float、double或long double类型“时，就会发生浮点舍入(roundoff)
浮点数加法、乘数和减法的结果进度收到底层数据类型的固有精度的影响
*/
