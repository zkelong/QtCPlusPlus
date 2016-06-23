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
    std::cout << "bitvec.any()\t" << bitvec.test(1) << std::endl;
    //翻转
    bitvec.flip(0);
    std::cout << "翻转\nbitvec: " << bitvec << std::endl;
    bitvec[1].flip();
    std::cout << "bitvec: " << bitvec << std::endl;
    //初始化
    std::bitset<32> bitvec2(0xfff);
    std::cout << "bitset<32> bitvec2(oxfff)\t" << bitvec2 << std::endl;
    std::bitset<32> bitvec3(012);
    std::cout << "bitset<32> bitvec3(012)\t" << bitvec3 << std::endl;
    std::string bitval("1010");
    std::bitset<32> bitvec4(bitval);
    std::cout << "std::bitset<32> bitvec4(bitval)\t" << bitvec4 << std::endl;
    std::string bitval1("111111111111111000000000111");
    std::bitset<32> bitvec5(bitval1, 6, 6); //从字符串第6位(0位)开始取，取长度为6
    std::cout << "std::bitset<32> bitvec5(bitval1, 6, 6)\t" << bitvec5 << std::endl;
    std::bitset<32> bitvec6(bitval1, 6); //从6位(0位)一直取到末尾
    std::cout << "std::bitset<32> bitvec6(bitval1, 6)\t" << bitvec6 << std::endl;
    //转换为字符串，转换为unsigned long
    std::cout << bitvec5.to_string() << std::endl;
    std::cout << bitvec5.to_ulong() << std::endl;
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
