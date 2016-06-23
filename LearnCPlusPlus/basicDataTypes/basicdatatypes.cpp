#include "basicdatatypes.h"
#include "literalconstants.h"
#include "variable.h"
#include "pointer.h"
#include "stringtype.h"
#include "constkeywords.h"
#include "referencetype.h"
#include "booltype.h"
#include "arraytype.h"
#include "vectortype.h"
#include "complexnumbertype.h"
#include "volatilekeywords.h"
#include "pairtype.h"
#include <iostream>
#include <conio.h>

using namespace std;

void test_basic_data_types()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "基本数据类型: " << endl;
        cout << "1.文字常量" << endl;
        cout << "2.变量" << endl;
        cout << "3.指针类型" << endl;
        cout << "4.字符串类型" << endl;
        cout << "5.const限定修饰符" << endl;
        cout << "6.引用类型" << endl;
        cout << "7.布尔类型" << endl;
        cout << "8.数组类型" << endl;
        cout << "9.vector类型" << endl;
        cout << "10.虚数类型" << endl;
        cout << "11.typedef名字" << endl;
        cout << "12.volatile限定修饰符" << endl;
        cout << "13.pair类型" << endl;
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
            integral_type(); //文字常量
            break;
        case 2:
            varable_type();  //变量
            break;
        case 3:
            pointer_type();  //指针类型
            break;
        case 4:
            string_type();   //字符串类型
            break;
        case 5:
            const_keywords(); //const限定修饰符
            break;
        case 6:
            reference_type(); //引用类型
            break;
        case 7:
            bool_type();  //布尔类型
            break;
        case 8:
            array_type();  //数组类型
            break;
        case 9:
            vector_type();   //vector类型
            break;
        case 10:
            complexnumber_type();  //虚数类型
            break;
        case 11:
            typedef_type();       //typedef名字
            break;
        case 12:
            volatile_type();   //volatile限定修饰符
            break;
        case 13:
            pair_type();      //pair类型
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
