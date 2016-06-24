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
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "main: " << endl;
        cout << "1.������������" << endl;
        cout << "2.���ʽ" << endl;
        cout << "3.���" << endl;
        cout << "4.������������" << endl;
        cout << "99.�ؼ���" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !((mId >= 0 && mId < 5) || (mId == 99)) || cin.fail()) {
            cout << "ֵ����!" << endl;
            cin.clear(); //���std::cin�Ĵ���״̬
            cin.sync();  //������뻺����
        }
        if(mId != 0)
            system("cls");  //��������̨
        switch (mId) {
        case 1:
            test_basic_data_types();  //������������
            break;
        case 2:
            test_expresion();    //���ʽ
            break;
        case 3:
            statement();    //���
            break;
        case 4:
//            textQuery_test(); //������������
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

