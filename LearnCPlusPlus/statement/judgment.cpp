#include "judgment.h"

void judgment()
{
    int n = 0;
    //if���
    if(n == 1)
    {
        std::cout << "n equal 1!" << std::endl;
    }
    else
    {
        std::cout << "n not equal 1!" << std::endl;
    }
    //switch���
    switch(n)
    {
    //case���������һ���������͵ĳ������ʽ
    //case��ǩ������ͬ����ֵ������У����±������
    case 0:
    {std::string aa = "askdlgka";
        std::cout << aa << std::endl;
        break;  //û��break����ִ�е���β���������
    }
    case 1:
        std::cout << "n equal 1!" << std::endl;
        break;
    }

    char ch;
    int vowelCnt = 0;
    std::cin >> ch;
    switch(ch)
    {
    //a,e,i,o,u���κ�һ�����֣�����vowelCnt����
    case 'a':
    case 'e':
    case 'i':
    case '0':
    case 'u':
        ++vowelCnt;
        break;
    }
    std::cin >> ch;
    switch(ch)
    {
    case 'a': case 'A':
        ++vowelCnt;
        break;
    }
}

/*
���������Է���switch���������У�switch(int ival = get_response)
case illegal_definition:
    //�����������������������
    string file_name = get_file_name();
    ...
    break;
case ok:
    {
        //ok:������䱻����������
        string file_name = get_file_name();
        ...
        break;
    }
*/
