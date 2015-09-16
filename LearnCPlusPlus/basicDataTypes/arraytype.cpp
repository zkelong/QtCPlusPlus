#include "arraytype.h"

void array_type()
{
    //array_define();

    int ia[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    double da[4] = { 3.14, 6.28, 12.56, 25.12};
    std::string sa[3] = {"piglet", "eeyore", "pooh"};
    print(ia, ia+9);
    print(da, da+4);
    print(sa, sa+3);
}

void array_define()
{
    int ia[10];
    int ival = ia[1];  //索引访问(indexing)或下标访问(subscripting)
    std::cout << "ival: " << ival << std::endl;

    for(int i = 0; i < 10; i++)
    {
        std::cout << ia[i] << "\t";
    }
    std::cout << std::endl;

    //二维数组
    int ib[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            std::cout << ib[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

//一个数组不能被另外一个数组初始化，也不能被赋值给另外一个数组。
//注意数组越界

//泛型程序设计(generic programming)
template <typename elemType> //要在使用的上一行写这个定义
void print(elemType *pbegin, elemType *pend)
{
    while(pbegin != pend)
    {
        std::cout << *pbegin << ' ';
        ++pbegin;
    }
    std::cout << std::endl;
}
