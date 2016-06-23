#include "volatilekeywords.h"

void volatile_type()
{
    volatile_define();
}

void volatile_define()
{
    volatile int display_register;
    //volatile Task *curr_task;
    const int max_size = 1024;
    volatile int ixa[max_size];
    //volatile Screen bitmap_buf;
    std::cout << max_size << std::endl;
}
/*当一个对象的值可能会在编译器的控制或监测之外被改变时，
例如一个被系统时钟更新的变量，那么该对象应该声明成volatile
volatile限定修饰符的用法同const非常相似————都是作为类型的附加修饰符
volatile修饰符的主要目的是提示编译器，该对象的值可能在编译器未监测到的情况下被改变。因此编译器不能武断地引用这些对象的代码作优化处理
*/
