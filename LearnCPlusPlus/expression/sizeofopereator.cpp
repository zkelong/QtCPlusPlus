#include "sizeoperator.h"

void sizeof_operator()
{
    sizeof_example();
}

void sizeof_example()
{
    int ia[] = {0, 1, 2};
    //sizeof返回整个数组的大小
    size_t array_size = sizeof ia;
    //sizeof返回int类型的大小
    size_t element_size = array_size / sizeof(int);
    std::cout << "sizeof: " << array_size << "  " << element_size << std::endl;
}

/*
sizeof操作符的作用是返回一个对象或类型名的字节长度
sizeof(type name); //类型只能用这个形式
sizeof(objec);
sizeof object;
*/
