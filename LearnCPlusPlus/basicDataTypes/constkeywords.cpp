#include "constkeywords.h"


void const_keywords()
{
    const_using();
}

void const_using()
{
    const int bufSize = 512;
    //bufSize += 1;
    std::cout << "bufSize: " << bufSize << std::endl;

    //试图将一个非const对象的指针指向一个常量对象，会引起编译错误
    const double *cptr; //指向double类型的const对象的指针，指向的对象是常量，cptr本身不是常量，可以重新赋值
    const double minWage = 9.60;    //定义便初始化
    cptr = &minWage;
    const double pi = 3.1415926;
    const double *const pi_ptr = &pi; //pi_str指向的对象的值以及它的地址本身都不能被改变
    std::cout << "bufSize: " << bufSize << "\t"
              << "minWage: " << minWage << "\t"
              << "*cptr: " << *cptr << "\t"
              << "pi: " << pi << "\t"
              << "pi_ptr: " << pi_ptr << "\t"
              << "*pi_ptr: " << *pi_ptr << std::endl;
}

/*
const的指针常被用作函数的形式参数
int strcmp(const char *str1, const char *str2);
*/
