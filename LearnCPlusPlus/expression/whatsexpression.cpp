#include "whatsexpression.h"

void what_is_expression()
{
    expression_define();
}

void expression_define()
{
    //最简单的表达式由一个文字常量或一个对象构成
    3.1415926; //结果是3.1415926
    "melancholia";  //结果是字符串第一个元素的内存地址，它的类型是const char*
    //upperBound;   //结果是与其相关联的值，类型由它的定义来决定
    2 + 4;
    int *p = new int(10);
    p != 0 && *p != 0;
    int ival = 0;
    delete p;
}

/*
表达是由一个或多个操作数构成
操作数(operator)
一元操作符(unary operator)，如取地址操作符(&)和解引用操作付(*)
二元操作符(binary operator)，如加法操作符、减法操作符
符合表达式(compound expression)：当两个或两个以上的操作付被组合起来的时候
子表达式的计算顺序由操作符的优先级(precedence)和结合性(associativity)来决定
*/
