#include "judgment.h"

void judgment()
{
    int n = 0;
    //if语句
    if(n == 1)
    {
        std::cout << "n equal 1!" << std::endl;
    }
    else
    {
        std::cout << "n not equal 1!" << std::endl;
    }
    //switch语句
    switch(n)
    {
    //case后面必须是一种整数类型的常量表达式
    //case标签不能有同样的值：如果有，则导致编译错误
    case 0:
    {std::string aa = "askdlgka";
        std::cout << aa << std::endl;
        break;  //没有break，将执行到结尾的所有语句
    }
    case 1:
        std::cout << "n equal 1!" << std::endl;
        break;
    }

    char ch;
    int vowelCnt = 0;
    std::cin >> ch;
    switch(ch)
    {
    //a,e,i,o,u的任何一个出现，都是vowelCnt递增
    case 'a':
    case 'e':
    case 'i':
    case '0':
    case 'u':
        ++vowelCnt;
        break;
    }
    std::cin >> ch;
    switch(ch)
    {
    case 'a': case 'A':
        ++vowelCnt;
        break;
    }
}

/*
声明语句可以放在switch语句的条件中，switch(int ival = get_response)
case illegal_definition:
    //错误：声明语句必须放在语句块中
    string file_name = get_file_name();
    ...
    break;
case ok:
    {
        //ok:声明语句被放在语句块中
        string file_name = get_file_name();
        ...
        break;
    }
*/
