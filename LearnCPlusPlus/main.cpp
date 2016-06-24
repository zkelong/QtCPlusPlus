#include "basicDataTypes/basicdatatypes.h"
#include "expression/expression.h"
#include "statement/statement.h"
#include "abstractcontainer/abstractcontainer.h"
//#include "container/container.h"
#include "keywords/keywords.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int mId;

    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "main: " << endl;
        cout << "1.基本数据类型" << endl;
        cout << "2.表达式" << endl;
        cout << "3.语句" << endl;
        cout << "4.抽象容器类型" << endl;
        cout << "99.关键字" << endl;
        cout << "0.退出" << endl;
        while(cout << "输入选项进入：", cin >> mId, !((mId >= 0 && mId < 5) || (mId == 99)) || cin.fail()) {
            cout << "值不对!" << endl;
            cin.clear(); //清除std::cin的错误状态
            cin.sync();  //清空输入缓冲区
        }
        if(mId != 0)
            system("cls");  //清屏控制台
        switch (mId) {
        case 1:
            test_basic_data_types();  //基本数据类型
            break;
        case 2:
            test_expresion();    //表达式
            break;
        case 3:
            statement();    //语句
            break;
        case 4:
//            textQuery_test(); //抽象容器类型
            break;
        case 99:
            keywords();
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }


//    int a = 4;
//    a = a >> 2;
//    printf("%d", a);

    return 0;
}

