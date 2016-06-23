#include "assignmentoperator.h"


void assignment_operator()
{
    assgnmetn_example();
}

void assgnmetn_example()
{
    const int array_size = 8; //array_size不能重新赋值
}
/*
数组对象本身不能被赋值，只有它包含的元素才能被赋值
符合赋值加操作符(compound assignment-plus operator)
+=、-=、*=、/=、%=、<<=、>>=、&=、^=、|=
^是位异或运算，即将a与b的对应位进行异或运算，同为0或者同为1时，对应位结果为0；否则为1。
*/
