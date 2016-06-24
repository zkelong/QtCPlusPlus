#include "keywords.h"
#include "keywordsIntroduce.h"
#include "constkeywords.h"
#include <iostream>
#include <conio.h>

using namespace std;

void keywords()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "关键字: " << endl;
        cout << "1.C关键字" << endl;
        cout << "2.C++关键字" << endl;
        cout << "3.const" << endl;
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
            cIntroduction();
            break;
        case 2:
            cPlusIntroduction();
            break;            
        case 3:
            const_keywords();
            break;
//        case :
//            break;
//        case :
//            break;
//        case :
//            break;
//        case :
//            break;
//        case :
//            break;
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
