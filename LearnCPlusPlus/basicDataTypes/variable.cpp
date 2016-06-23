#include "variable.h"

/*
变量是可寻址的(addressable)
有两个值与变量关联：
    1. 它的数据值，右值(rvalue)
    2. 它的地址值，左值(lvalue)
 声明对象(declaration)：
    由关键字extern以及跟在后面的对象类型以及对象的名字构成
    不是定义，不会引起内存分配
C++关键字
    变量名不能为关键字
*/

void varable_type()
{
    varable_define();
}

void varable_define()
{
    int ival = 2048; //显示语法，赋值操作符
    int iival(2048); //隐式形式

    std::cout << "变量(variable)可寻址的（addressable），声明（extern int xx）：不同定义，不会引起内存分配" << std::endl;
    std::cout << "显示赋值：int ival = 2048; 隐式赋值：int iival(2048);" << std::endl;

    //每种内置数据类型都支持一种特殊的构造函数语法，可将对象初始化为0。
    int int1 = int();
    double double1 = double();

    std::cout << "每种内置数据类型都支持一种特殊的构造函数语法，可将对象初始化为0:"
              << "\n\t int int1 = int(); double double1 = double();" << std::endl;
    std::cout << "ival1, iival, int1, double1的值：" << ival << '\t' << iival << '\t' << int1 << '\t' << double1 << std::endl;
}
