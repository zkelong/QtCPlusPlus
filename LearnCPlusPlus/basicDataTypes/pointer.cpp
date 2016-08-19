#include "pointer.h"
#include <iostream>
#include <string>
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
    *pint += 1;
    std::cout << "int *pint, num; //一个int指针，一个int" << std::endl;
    std::cout << "num = 10; pint = &num; *pint += 1;";
    //解引用操作符(*)(dereference operator)来间接地读和写指针所指向的对象
    std::cout << "num: " << num << "\t*pint: " << *pint << std::endl;

    int *pintx = new int(1024);
    std::cout << "Dynamic allocated(动态分配--new/delete):int *pintx = new int(1024); \n\t*pintx: " << *pintx << std::endl;//动态分配
    delete pintx;

    int *pia = new int[4];
    std::cout << "Dynamic allocated array: int *pia = new int[4]; \n\t*pia: " << *pia
              << "\tpia[0]" << pia[0] << std::endl;  //取*pia[0]错误
    delete [] pia;

    int a[10] = {1, 3, 9};
    int *ptr_a = a;
    std::cout << "int a[10] = {1, 3, 9};int *ptr_a = a; \n\tptr_a[0]" << ptr_a[0] << std::endl;

    //const与指针
    std::cout << "指向const对象的指针，可指向不同的const对象，指针解引用不能赋值/更改" << std::endl;
    const int ca = 10;
    const int * cap = &ca;
    std::cout << "const int *" << *cap << std::endl;
    std::count << "const指针，必须初始化且不能改变，指针解引用可以改变值" << std::endl;
    int ca2 = 99;
    int * const cap2 = &ca2;
    std::cout << "int * const cap2; *cap2 + 1 = " << *cap2 + 1 << std::endl;
    std::cout << "指向const对象的const指针：const int * const aa" << std::endl;
    std::cout << "typedef string *pstring; const pstring cstr;" << std::endl;
    std::cout << "cstr的类型是：const指针---string * const cstr;" << std::endl;
    std::cout << "string const s1; const string s2; //s1和s2的类型是一样的" << std::endl;
    std::cout << "typedef与写const定义时，const限定符加在类型名前面容易引起对所定义的真正类型的误解。" << std::endl;
}
