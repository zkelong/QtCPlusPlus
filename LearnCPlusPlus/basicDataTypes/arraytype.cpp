#include "arraytype.h"
#include <conio.h>

using namespace std;

void array_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "��������: " << endl;
        cout << "1.���鶨��" << endl;
        cout << "2.�������" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !(mId >= 0 && mId <= 3) || cin.fail()) {
            cout << "ֵ����!" << endl;
            cin.clear(); //���std::cin�Ĵ���״̬
            cin.sync();  //������뻺����
        }
        if(mId != 0)
            system("cls");  //��������̨
        switch (mId) {
        case 1:
            array_define();
            break;
        case 2:
            array_operate();
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

void array_define()
{
    std::cout << "���鶨�壺int ia[10]; int ib[10][10];" << std::endl;
    int ia[10];
    int ival = ia[1];  //��������(indexing)���±����(subscripting)
    std::cout << "ival: " << ival << std::endl;

    cout << "һά����û�г�ʼ������ֵ��" << endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << ia[i] << "\t";
    }
    std::cout << std::endl;

    //��ά����
    cout << "��ά���飬û�г�ʼ���͸�ֵ��" << endl;
    int ib[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            std::cout << ib[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "�����ʼ����" << std::endl;
    std::cout << "int ix[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};" << std::endl;
//    std::cout <<
    int ix[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    double da[4] = { 3.14, 6.28, 12.56, 25.12};
    std::string sa[3] = {"piglet", "eeyore", "pooh"};
    print(ix, ia+9);
    print(da, da+4);
    print(sa, sa+3);

    cout << "��ά���鲿�ֳ�ʼ����" << endl;
    int it[4][3] = {{1,2,3}, {4, 5}, {6}};
    for(int i = 0; i < sizeof(it)/sizeof(it[0]); i++)
    {
        for(int j = 0; j < sizeof(it[0])/sizeof(int); j++)
        {
            std::cout << it[i][j] << " ";
        }
        cout << endl;
    }
}

void array_operate()
{
    std::cout << "�������:" << std::endl;
    std::cout << "���鲻�ܱ�����һ�������ʼ��" << endl;
    cout << "����ĳ��ȣ���sizeof()������sizeof(������)/sizeof(����Ԫ������)" << endl;
    cout << "���ӣ�int it[4][3]; sizeof(it)/sizeof(it[0]); sizof(it[0]/sizeof(int))" << endl;
}

//һ�����鲻�ܱ�����һ�������ʼ����Ҳ���ܱ���ֵ������һ�����顣
//ע������Խ��

//���ͳ������(generic programming)
template <typename elemType> //Ҫ��ʹ�õ���һ��д�������
void print(elemType *pbegin, elemType *pend)
{
    std::cout << "������ƣ�" << endl;
    cout << "template <typename elemType> //Ҫ��ʹ�õ���һ��д�������" << std::endl;
    cout << "void print(elemType *pbegin, elemType *pend)" << std::endl;
    while(pbegin != pend)
    {
        std::cout << *pbegin << ' ';
        ++pbegin;
    }
    std::cout << std::endl;
}
