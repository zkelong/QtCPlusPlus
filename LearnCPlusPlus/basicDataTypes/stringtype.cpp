#include "stringtype.h"
#include <cstring>
#include <string>
#include <conio.h>

using namespace std;

void string_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "字符串类型: " << endl;
        cout << "1.C风格字符串" << endl;
        cout << "2.字符串类型" << endl;
        cout << "3.C风格字符串与string类型转换" << endl;
        cout << "4.const与字符串指针" << endl;
        cout << "0.退出" << endl;
        while(cout << "输入选项进入：", cin >> mId, !(mId >= 0 && mId <= 3) || cin.fail()) {
            cout << "值不对!" << endl;
            cin.clear(); //清除std::cin的错误状态
            cin.sync();  //清空输入缓冲区
        }
        if(mId != 0)
            system("cls");  //清屏控制台
        switch (mId) {
        case 1:
            c_type_sting();
            break;
        case 2:
            type_string();
            break;
        case 3:
            string_c_string();
            break;
        case 0:
            quit = true;
            break;
        default:
            break;
        }
        getch(); //在windows平台下从控制台无回显地取一个字符，在linux下是有回显的。--头文件#include <conio.h>
        if(quit) {
            break;
        }
    }
}


//C风格字符串
/*
被存储在一个字符数组中，一般通过一个char*类型的指针来操纵它。
空字符串：指针置为0，指向的字符数组只包含一个空字符。
字符串类型：string类型能够自动将C风格的字符串转换成string对象。反之不行，必须显式地调用名为c_str()的操作。
*/
void c_type_sting()
{
    const char *str1 = "b12345678";  //常量字符串，只读，存放在常量区域--const
    const char *str2 = {"a2134567s8"};
    char str3[] = "32345678";  //数组，可写，存放在非常量区域
    char str4[] = "22345678";
    char str5[20] = "123";

    int str_length = strlen(str1); //9
    int equal = strcmp(str3, str4);  //相等返回0，str1>str2返回正数，str1<str2返回负数
    //int equal1 = strmcmp(str1, str2); //不管用
    strcpy(str3, str4);  //拷贝
    strcat(str5, str4);  //拼接字符串

    cout << "常量字符串，只读，存放在常量区域：char *str1 = \"123\"" << std::endl;
    cout << "字符数组：char str3[] = \"12314\"" << std::endl;
    cout << "strlen()--字符串长度(不含末尾结束符)；strcmp()--字符比较(返回值：0，正数，负数; 常量字符串比较无用)" << std::endl;
    cout << "strcpy()--复制；strcat()--拼接字符串" << std::endl;
    cout << "字符串可以直接cin流输出" << endl;
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
    std::cout << "string类型在命名空间std里面" << endl;
    std::string st("The expense of spirit\n");
    std::cout << "The size of "
         << st
         << " is " << st.size()
         << " characters, including the newline." << std::endl;
    std::string st2;
    if(st2.empty())
    {
        std::cout << "empty()--判断字符串是否为空；st2 is empty!" << std::endl;
    }
    st2 = st;
    std::cout << "字符串直接赋值：st2 = st, st2: "
              << st2 << std::endl;
}

//C风格字符串与string类型转换
void string_c_string()
{
    const char *ps = "abcd";  //C风格字符串

    cout << "字符串类型可以直接相加：s3 = s1 + ps + s2(const char *ps)" << endl;

    std::string s1("hello ");
    std::string s2(" world");
    std::string s3 = s1 + ps + s2;
    std::cout << s1 << "\n"
              << s2 << "\n"
              << s3 << std::endl;

    cout << "string直接用const char* 赋值" << endl;
    cout << "const char *pc = \"helloMybaby....\"; 是常量，所以用const" << endl;

    const char *pc = "a character array";
    std::string str1 = pc;
    std::cout << "pc: " << pc << "\n"
              << "str1: " << str1 << std::endl;

    cout << "string 转为const char* 用str.c_str()" << endl;
    const char *str = str1.c_str();
    std::cout << "str: " << str << std::endl;
}
