#include "stringtype.h"
#include <cstring>
#include <string>
#include <conio.h>

using namespace std;

void string_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "�ַ�������: " << endl;
        cout << "1.C����ַ���" << endl;
        cout << "2.�ַ�������" << endl;
        cout << "3.C����ַ�����string����ת��" << endl;
        cout << "4.const���ַ���ָ��" << endl;
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
            c_type_sting();
            break;
        case 2:
            type_string();
            break;
        case 3:
            string_c_string();
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


//C����ַ���
/*
���洢��һ���ַ������У�һ��ͨ��һ��char*���͵�ָ������������
���ַ�����ָ����Ϊ0��ָ����ַ�����ֻ����һ�����ַ���
�ַ������ͣ�string�����ܹ��Զ���C�����ַ���ת����string���󡣷�֮���У�������ʽ�ص�����Ϊc_str()�Ĳ�����
*/
void c_type_sting()
{
    const char *str1 = "b12345678";  //�����ַ�����ֻ��������ڳ�������--const
    const char *str2 = {"a2134567s8"};
    char str3[] = "32345678";  //���飬��д������ڷǳ�������
    char str4[] = "22345678";
    char str5[20] = "123";

    int str_length = strlen(str1); //9
    int equal = strcmp(str3, str4);  //��ȷ���0��str1>str2����������str1<str2���ظ���
    //int equal1 = strmcmp(str1, str2); //������
    strcpy(str3, str4);  //����
    strcat(str5, str4);  //ƴ���ַ���

    cout << "�����ַ�����ֻ��������ڳ�������char *str1 = \"123\"" << std::endl;
    cout << "�ַ����飺char str3[] = \"12314\"" << std::endl;
    cout << "strlen()--�ַ�������(����ĩβ������)��strcmp()--�ַ��Ƚ�(����ֵ��0������������; �����ַ����Ƚ�����)" << std::endl;
    cout << "strcpy()--���ƣ�strcat()--ƴ���ַ���" << std::endl;
    cout << "�ַ�������ֱ��cin�����" << endl;
    std::cout << "str1: " << str1 << "\n"
              << "str2: " << str2 << "\n"
              << "str_length: " << str_length << "\n"
              << "equal: " << equal << "\n"
              << "str3: " << str3 << "\n"
              << "str5: " << str5 << std::endl;
}

//�ַ�������
void type_string()
{
    std::cout << "string�����������ռ�std����" << endl;
    std::string st("The expense of spirit\n");
    std::cout << "The size of "
         << st
         << " is " << st.size()
         << " characters, including the newline." << std::endl;
    std::string st2;
    if(st2.empty())
    {
        std::cout << "empty()--�ж��ַ����Ƿ�Ϊ�գ�st2 is empty!" << std::endl;
    }
    st2 = st;
    std::cout << "�ַ���ֱ�Ӹ�ֵ��st2 = st, st2: "
              << st2 << std::endl;
}

//C����ַ�����string����ת��
void string_c_string()
{
    const char *ps = "abcd";  //C����ַ���

    cout << "�ַ������Ϳ���ֱ����ӣ�s3 = s1 + ps + s2(const char *ps)" << endl;

    std::string s1("hello ");
    std::string s2(" world");
    std::string s3 = s1 + ps + s2;
    std::cout << s1 << "\n"
              << s2 << "\n"
              << s3 << std::endl;

    cout << "stringֱ����const char* ��ֵ" << endl;
    cout << "const char *pc = \"helloMybaby....\"; �ǳ�����������const" << endl;

    const char *pc = "a character array";
    std::string str1 = pc;
    std::cout << "pc: " << pc << "\n"
              << "str1: " << str1 << std::endl;

    cout << "string תΪconst char* ��str.c_str()" << endl;
    const char *str = str1.c_str();
    std::cout << "str: " << str << std::endl;
}
