#include "ckeywords.h"
#include <iostream>
#include <conio.h>

using namespace std;



void ckeywords()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "C�ؼ���: " << endl;
        cout << "1.�ؼ��ֽ���" << endl;
//        cout << "2.C++�ؼ���" << endl;
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
        getch(); //��windowsƽ̨�´ӿ���̨�޻��Ե�ȡһ���ַ�����linux�����л��Եġ�--ͷ�ļ�#include <conio.h>
        if(quit) {
            break;
        }
    }
}

//�ؼ��ֽ���
void introduction()
{
    cout << "C����32���ؼ���" << endl;
    cout << "���ؼ��־����ѱ�C���Ա���ʹ�ã�������������;ʹ�õ��֡�����ؼ��ֲ����������������������� " << endl;
    cout << "����ANSI��׼�����C���Թؼ��ֹ�32����" << endl;
    cout << "����auto double int struct break else long switch" << endl;
    cout << "����case enum register typedef char extern return union" << endl;
    cout << "����const float short unsigned continue for signed void" << endl;
    cout << "����default goto sizeof volatile do if while static" << endl;
    cout << "�������ݹؼ��ֵ����ã����Խ��ؼ��ַ�Ϊ�������͹ؼ��ֺ����̿��ƹؼ��������ࡣ" << endl;
    cout << "��1 �������͹ؼ���" << endl;
    cout << "��A.�����������ͣ�5����" << endl;
    cout << "����void �����������޷���ֵ���޲���������������ָ�룬��ʽ����������" << endl;
    cout << "����char ���ַ����������ݣ������������ݵ�һ��" << endl;
    cout << "����int ���������ݣ�ͨ��Ϊ������ָ���Ļ����ֳ�" << endl;
    cout << "����float �������ȸ��������ݣ����ڸ������ݵ�һ��" << endl;
    cout << "����double ��˫���ȸ��������ݣ����ڸ������ݵ�һ��" << endl;
    cout << "��B .�������ιؼ��֣�4����" << endl;
    cout << "����short ������int�����������ݣ���ʡ�Ա����ε�int��" << endl;
    cout << "����long ������int�����������ݣ���ʡ�Ա����ε�int��" << endl;
    cout << "���ssigned �������������ݣ��з�����������" << endl;
    cout << "���uunsigned �������������ݣ��޷�����������" << endl;
    cout << "��C .�������͹ؼ��֣�5����" << endl;
    cout << "���sstruct ���ṹ������" << endl;
    cout << "���uunion ������������" << endl;
    cout << "���eenum ��ö������" << endl;
    cout << "���ttypedef ���������ͱ���" << endl;
    cout << "���ssizeof ���õ��ض����ͻ��ض����ͱ����Ĵ�С" << endl;
    cout << "��D .�洢����ؼ��֣�6����" << endl;
    cout << "���aauto ��ָ��Ϊ�Զ��������ɱ������Զ����估�ͷš�ͨ����ջ�Ϸ���" << endl;
    cout << "���sstatic ��ָ��Ϊ��̬�����������ھ�̬�����������κ���ʱ��ָ������������Ϊ�ļ��ڲ�" << endl;
    cout << "���rregister ��ָ��Ϊ�Ĵ�������������������������洢���Ĵ�����ʹ�ã�Ҳ�������κ����βΣ����������ͨ���Ĵ��������Ƕ�ջ���ݲ���" << endl;
    cout << "���eextern ��ָ����Ӧ����Ϊ�ⲿ����������ʾ�������ߺ����Ķ����ڱ���ļ��У���ʾ�����������˱����ͺ���ʱ������ģ����Ѱ���䶨�塣" << endl;
    cout << "���cconst ����volatile�ϳơ�cv���ԡ���ָ���������ɱ���ǰ�߳�/���̸ı䣨���п��ܱ�ϵͳ�������߳�/���̸ı䣩" << endl;
    cout << "���vvolatile ����const�ϳơ�cv���ԡ���ָ��������ֵ�п��ܻᱻϵͳ����������/�̸߳ı䣬ǿ�Ʊ�����ÿ�δ��ڴ���ȡ�øñ�����ֵ" << endl;
    cout << "��2 ���̿��ƹؼ���" << endl;
    cout << "��E .��ת�ṹ��4����" << endl;
    cout << "���rreturn �����ں������У������ض�ֵ��������voidֵ����������ֵ��" << endl;
    cout << "���ccontinue ��������ǰѭ������ʼ��һ��ѭ��" << endl;
    cout << "���bbreak ��������ǰѭ����switch�ṹ" << endl;
    cout << "���ggoto ����������ת���" << endl;
    cout << "��3 .��֧�ṹ��5����" << endl;
    cout << "��F .������䣬���治��Ҫ�ŷֺ�" << endl;
    cout << "���eelse ���������񶨷�֧����if���ã�" << endl;
    cout << "���switch ��������䣨���ط�֧��䣩" << endl;
    cout << "���ccase ����������еķ�֧���" << endl;
    cout << "���ddefault ����������еġ���������֧����ѡ��" << endl;
    cout << "��G .ѭ���ṹ��3����" << endl;
    cout << "���ffor��forѭ���ṹ��for(1;2;3)4;��ִ��˳��Ϊ1->2->4->3->2...ѭ��������2Ϊѭ��������" << endl;
    cout << "		������forѭ�������У����ʽ1ֻ����һ�Σ����ʽ2�ͱ��ʽ3����ܼ����Σ�Ҳ����һ��Ҳ�����㡣ѭ������ܶ��ִ�У�Ҳ����һ�ζ���ִ�С�" << endl;
    cout << "���ddo ��doѭ���ṹ��do 1 while(2); ��ִ��˳����1->2->1...ѭ����2Ϊѭ������" << endl;
    cout << "���wwhile ��whileѭ���ṹ��while(1) 2; ��ִ��˳����1->2->1...ѭ����1Ϊѭ������" << endl;
    cout << "		����ѭ����䣬��ѭ���������ʽΪ�������ѭ����Ϊ��������ѭ����" << endl;
}
