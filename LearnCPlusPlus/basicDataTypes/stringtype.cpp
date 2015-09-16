#include "stringtype.h"
#include <cstring>
#include <string>

void string_type()
{
    //c_type_sting();
    //type_string();
    string_c_string();
}


//C风格字符串
/*
被存储在一个字符数组中，一般通过一个char*类型的指针来操纵它。
空字符串：指针置为0，指向的字符数组只包含一个空字符。
字符串类型：string类型能够自动将C风格的字符串转换成string对象。反之不行，必须显式地调用名为c_str()的操作。
*/
void c_type_sting()
{
    char *str1 = "b12345678"; //常量字符串，只读，存放在常量区域
    char *str2 = {"a2134567s8"};
    char str3[] = "32345678";  //数组，可写，存放在非常量区域
    char str4[] = "22345678";
    char str5[20] = "123";
    int str_length = strlen(str1); //8
    int equal = strcmp(str3, str4);  //相等返回0，str1>str2返回正数，str1<str2返回负数
    //int equal1 = strmcmp(str1, str2); //不管用
    strcpy(str3, str4);  //拷贝
    strcat(str5, str4);  //拼接字符串

    std::cout << "str1: " << str1 << "\n"
              << "str2: " << str2 << "\n"
              << "str_length: " << str_length << "\n"
              << "equal: " << equal << "\n"
              << "str3: " << str3 << "\n"
              << "str5: " << str5 << std::endl;
}

//字符串类型
void type_string()
{
    std::string st("The expense of spirit\n");
    std::cout << "The size of "
         << st
         << " is " << st.size()
         << " characters, including the newline." << std::endl;
    std::string st2;
    if(st2.empty())
    {
        std::cout << "st2 is empty!" << std::endl;
    }
    st2 = st;
    std::cout << "After st2 = st, st2: "
              << st2 << std::endl;
}

//C风格字符串与string类型转换
void string_c_string()
{
    char *ps = "abcd";  //C风格字符串
    std::string s1("hello");
    std::string s2("world");
    std::string s3 = s1 + ps + s2;
    std::cout << s1 << "\n"
              << s2 << "\n"
              << s3 << std::endl;

    const char *pc = "a character array";
    std::string str1 = pc;
    std::cout << "pc: " << pc << "\n"
              << "str1: " << str1 << std::endl;
    const char *str = str1.c_str();
    std::cout << "str: " << str << std::endl;
}
