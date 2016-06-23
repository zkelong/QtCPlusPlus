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
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "������������: " << endl;
        cout << "1.���ֳ���" << endl;
        cout << "2.����" << endl;
        cout << "3.ָ������" << endl;
        cout << "4.�ַ�������" << endl;
        cout << "5.const�޶����η�" << endl;
        cout << "6.��������" << endl;
        cout << "7.��������" << endl;
        cout << "8.��������" << endl;
        cout << "9.vector����" << endl;
        cout << "10.��������" << endl;
        cout << "11.typedef����" << endl;
        cout << "12.volatile�޶����η�" << endl;
        cout << "13.pair����" << endl;
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
            integral_type(); //���ֳ���
            break;
        case 2:
            varable_type();  //����
            break;
        case 3:
            pointer_type();  //ָ������
            break;
        case 4:
            string_type();   //�ַ�������
            break;
        case 5:
            const_keywords(); //const�޶����η�
            break;
        case 6:
            reference_type(); //��������
            break;
        case 7:
            bool_type();  //��������
            break;
        case 8:
            array_type();  //��������
            break;
        case 9:
            vector_type();   //vector����
            break;
        case 10:
            complexnumber_type();  //��������
            break;
        case 11:
            typedef_type();       //typedef����
            break;
        case 12:
            volatile_type();   //volatile�޶����η�
            break;
        case 13:
            pair_type();      //pair����
            break;
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
