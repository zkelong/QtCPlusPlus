#include "bitsetoperator.h"
#include <bitset>

void bitset_operator()
{
    bitset_operator_define();
}

void bitset_operator_define()
{
    std::bitset<32> bitvec;  //ȱʡ����£�����λ������ʼ��0
    std::cout << "bitvec: " << bitvec << std::endl;
    bitvec.any();
    std::cout << "bitvec.any()\t" << bitvec.test(1) << std::endl;
    //��ת
    bitvec.flip(0);
    std::cout << "��ת\nbitvec: " << bitvec << std::endl;
    bitvec[1].flip();
    std::cout << "bitvec: " << bitvec << std::endl;
    //��ʼ��
    std::bitset<32> bitvec2(0xfff);
    std::cout << "bitset<32> bitvec2(oxfff)\t" << bitvec2 << std::endl;
    std::bitset<32> bitvec3(012);
    std::cout << "bitset<32> bitvec3(012)\t" << bitvec3 << std::endl;
    std::string bitval("1010");
    std::bitset<32> bitvec4(bitval);
    std::cout << "std::bitset<32> bitvec4(bitval)\t" << bitvec4 << std::endl;
    std::string bitval1("111111111111111000000000111");
    std::bitset<32> bitvec5(bitval1, 6, 6); //���ַ�����6λ(0λ)��ʼȡ��ȡ����Ϊ6
    std::cout << "std::bitset<32> bitvec5(bitval1, 6, 6)\t" << bitvec5 << std::endl;
    std::bitset<32> bitvec6(bitval1, 6); //��6λ(0λ)һֱȡ��ĩβ
    std::cout << "std::bitset<32> bitvec6(bitval1, 6)\t" << bitvec6 << std::endl;
    //ת��Ϊ�ַ�����ת��Ϊunsigned long
    std::cout << bitvec5.to_string() << std::endl;
    std::cout << bitvec5.to_ulong() << std::endl;
}


/*
test(pos)   posλ�Ƿ�Ϊ1
any()       ����λ�Ƿ�Ϊ1
none()      �Ƿ�û��λΪ1
count()     ֵ��1��λ�ĸ���
size()      λԪ�صĸ���
[pos]       ����posλ
flip()      ��ת����λ
flip(pos)   ��תposλ
set()       ������λ��1
set(pos)    ��posλ��1
reset()     ������λ��0
reset(pos)  ������λ��0
--ʹ�÷���Ϊa.exp(),a[index]
*/
