#include "ckeywords.h"
#include <iostream>
#include <conio.h>

using namespace std;



void ckeywords()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "C关键字: " << endl;
        cout << "1.关键字介绍" << endl;
//        cout << "2.C++关键字" << endl;
        cout << "0.退出" << endl;
        while(cout << "输入选项进入：", cin >> mId, !(mId >= 0 && mId < 13) || cin.fail()) {
            cout << "值不对!" << endl;
            cin.clear(); //清除std::cin的错误状态
            cin.sync();  //清空输入缓冲区
        }
        if(mId != 0)
            system("cls");  //清屏控制台
        switch (mId) {
        case 1:
            introduction();
            break;
        case 2:
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

//关键字介绍
void introduction()
{
    cout << "C语言32个关键字" << endl;
    cout << "　关键字就是已被C语言本身使用，不能作其它用途使用的字。例如关键字不能用作变量名、函数名等 " << endl;
    cout << "　由ANSI标准定义的C语言关键字共32个：" << endl;
    cout << "　　auto double int struct break else long switch" << endl;
    cout << "　　case enum register typedef char extern return union" << endl;
    cout << "　　const float short unsigned continue for signed void" << endl;
    cout << "　　default goto sizeof volatile do if while static" << endl;
    cout << "　　根据关键字的作用，可以将关键字分为数据类型关键字和流程控制关键字两大类。" << endl;
    cout << "　1 数据类型关键字" << endl;
    cout << "　A.基本数据类型（5个）" << endl;
    cout << "　　void ：声明函数无返回值或无参数，声明无类型指针，显式丢弃运算结果" << endl;
    cout << "　　char ：字符型类型数据，属于整型数据的一种" << endl;
    cout << "　　int ：整型数据，通常为编译器指定的机器字长" << endl;
    cout << "　　float ：单精度浮点型数据，属于浮点数据的一种" << endl;
    cout << "　　double ：双精度浮点型数据，属于浮点数据的一种" << endl;
    cout << "　B .类型修饰关键字（4个）" << endl;
    cout << "　　short ：修饰int，短整型数据，可省略被修饰的int。" << endl;
    cout << "　　long ：修饰int，长整形数据，可省略被修饰的int。" << endl;
    cout << "　signed ：修饰整型数据，有符号数据类型" << endl;
    cout << "　unsigned ：修饰整型数据，无符号数据类型" << endl;
    cout << "　C .复杂类型关键字（5个）" << endl;
    cout << "　struct ：结构体声明" << endl;
    cout << "　union ：共用体声明" << endl;
    cout << "　enum ：枚举声明" << endl;
    cout << "　typedef ：声明类型别名" << endl;
    cout << "　sizeof ：得到特定类型或特定类型变量的大小" << endl;
    cout << "　D .存储级别关键字（6个）" << endl;
    cout << "　auto ：指定为自动变量，由编译器自动分配及释放。通常在栈上分配" << endl;
    cout << "　static ：指定为静态变量，分配在静态变量区，修饰函数时，指定函数作用域为文件内部" << endl;
    cout << "　register ：指定为寄存器变量，建议编译器将变量存储到寄存器中使用，也可以修饰函数形参，建议编译器通过寄存器而不是堆栈传递参数" << endl;
    cout << "　extern ：指定对应变量为外部变量，即标示变量或者函数的定义在别的文件中，提示编译器遇到此变量和函数时在其他模块中寻找其定义。" << endl;
    cout << "　const ：与volatile合称“cv特性”，指定变量不可被当前线程/进程改变（但有可能被系统或其他线程/进程改变）" << endl;
    cout << "　volatile ：与const合称“cv特性”，指定变量的值有可能会被系统或其他进程/线程改变，强制编译器每次从内存中取得该变量的值" << endl;
    cout << "　2 流程控制关键字" << endl;
    cout << "　E .跳转结构（4个）" << endl;
    cout << "　return ：用在函数体中，返回特定值（或者是void值，即不返回值）" << endl;
    cout << "　continue ：结束当前循环，开始下一轮循环" << endl;
    cout << "　break ：跳出当前循环或switch结构" << endl;
    cout << "　goto ：无条件跳转语句" << endl;
    cout << "　3 .分支结构（5个）" << endl;
    cout << "　F .条件语句，后面不需要放分号" << endl;
    cout << "　else ：条件语句否定分支（与if连用）" << endl;
    cout << "　witch ：开关语句（多重分支语句）" << endl;
    cout << "　case ：开关语句中的分支标记" << endl;
    cout << "　default ：开关语句中的“其他”分支，可选。" << endl;
    cout << "　G .循环结构（3个）" << endl;
    cout << "　for：for循环结构，for(1;2;3)4;的执行顺序为1->2->4->3->2...循环，其中2为循环条件。" << endl;
    cout << "		在整个for循环过程中，表达式1只计算一次，表达式2和表达式3则可能计算多次，也可能一次也不计算。循环体可能多次执行，也可能一次都不执行。" << endl;
    cout << "　do ：do循环结构，do 1 while(2); 的执行顺序是1->2->1...循环，2为循环条件" << endl;
    cout << "　while ：while循环结构，while(1) 2; 的执行顺序是1->2->1...循环，1为循环条件" << endl;
    cout << "		以上循环语句，当循环条件表达式为真则继续循环，为假则跳出循环。" << endl;
}
