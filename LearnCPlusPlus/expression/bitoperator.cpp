#include "bitoperator.h"

void bit_operator()
{
    bit_operator_define();
}

void bit_operator_define()
{
    int i;
    i = 1 << 1;
    i = i << 2;
    i >>= 1;
    std::cout << "i: " << i << std::endl;
    int j;
    j = 1 >> 1;
    std::cout << "j: " << j << std::endl;
}

/*位操作符
~   按位与
<<  左移  --从右边开始用0补空位
>>  右移  --如果操作数是无符号数，从左边开始插入0，否则，它或插入符号位的拷贝，或者插入0，有具体实现定义。
&   按位与     --如果两个操作数该位都是1，结果该位为1，否则为0
^   按位异或   --两个操作数该位只有一个为1，结果该位为1，否则为0
|   按位或
&=  按位与赋值
^=  按位异或赋值
|=  按位或赋值
*/
