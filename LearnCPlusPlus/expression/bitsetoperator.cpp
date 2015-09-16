#include "bitsetoperator.h"
#include <bitset>

void bitset_operator()
{
    bitset_operator_define();
}

void bitset_operator_define()
{
    std::bitset<32> bitvec;  //缺省情况下，所有位都被初始化0
    std::cout << "bitvec: " << bitvec << std::endl;
    bitvec.any();
}


/*
test(pos)   pos位是否为1
any()       任意位是否为1
none()      是否没有位为1
count()     值是1的位的个数
size()      位元素的个数
[pos]       访问pos位
flip()      翻转所有位
flip(pos)   翻转pos位
set()       将所有位置1
set(pos)    将pos位置1
reset()     将所有位置0
reset(pos)  将所有位置0
--使用方法为a.exp(),a[index]
*/
