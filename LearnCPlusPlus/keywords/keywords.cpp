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
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "�ؼ���: " << endl;
        cout << "1.C�ؼ���" << endl;
        cout << "2.C++�ؼ���" << endl;
        cout << "3.const" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !(mId >= 0 && mId < 13) || cin.fail()) {
            cout << "ֵ����!" << endl;
            cin.clear(); //���std::cin�Ĵ���״̬
            cin.sync();  //������뻺����
        }
        if(mId != 0)
            system("cls");  //��������̨
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
        getch(); //��windowsƽ̨�´ӿ���̨�޻��Ե�ȡһ���ַ�����linux�����л��Եġ�--ͷ�ļ�#include <conio.h>
        if(quit) {
            break;
        }
    }
}
