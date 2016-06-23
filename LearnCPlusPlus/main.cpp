#include "basicDataTypes/basicdatatypes.h"
#include "expression/expression.h"
#include "statement/statement.h"
#include "abstractcontainer/abstractcontainer.h"
//#include "container/container.h"
#include "keywords/ckeywords.h"
#include <stdio.h>
#include <iostream>

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
        cout << "98.C�ؼ���" << endl;
        cout << "99.C++�ؼ���" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !((mId >= 0 && mId < 5) || (mId >=98 && mId <= 99)) || cin.fail()) {
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
        case 98:
            ckeywords();
            break;
        case 99:
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

