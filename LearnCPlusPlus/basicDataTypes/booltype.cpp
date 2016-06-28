#include "booltype.h"

void bool_type()
{
    bool_using();
}

void bool_using()
{
    //可以用作算术值
    bool test = true;

    int a = test + 11;
    std::cout << a << std::endl;

    std::cout << "bool test = true; //可以用来做算术值" << std::endl;
    std::cout << "int a = test + 11;" << std::endl;
    std::cout << "整数类型的对象，但它不能声明为signed、unsigned、short或long." << std::endl;
}

//整数类型的对象，但它不能声明为signed、unsigned、short或long.
