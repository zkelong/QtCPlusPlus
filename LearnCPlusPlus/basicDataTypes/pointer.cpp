#include "pointer.h"

/*
空(void*)类型指针：可以被任何数据指针类型的地址赋值(函数指针不能赋值给它)。
    void* 表明相关的值是个地址，但该地址的对象类型不知道。不能操作空类型指针所指向的对象，只能传送该地址值或将它与其他地址值做比较。
指针的算术运算(pointer arithmetic)：指针可以让它的地址值增加或减少一个整数值
*/

void pointer_type()
{
    pointerDefine();
}


void pointerDefine()
{
    int *pint, num;  //定义一个int型指针，一个int型数据
    num = 10;
    pint = &num;
    //解引用操作符(*)(dereference operator)来间接地读和写指针所指向的对象
    std::cout << "num: " << num << "\t*pint: " << *pint << std::endl;

    int *pintx = new int(1024);
    std::cout << "Dynamic allocated: *pintx: " << *pintx << std::endl;//动态分配
    delete pintx;

    int *pia = new int[4];
    std::cout << "Dynamic allocated array: *pia: " << *pia
              << "\tpia[0]" << pia[0] << std::endl;  //取*pia[0]错误
    delete [] pia;

    int a[10] = {1, 3, 9};
    int *ptr_a = a;
    std::cout << ptr_a[0] << std::endl;
}
