#include "pairtype.h"
#include <utility>

void pair_type()
{
    pair_define();
}

void pair_define()
{
    std::pair<std::string, std::string> author("James", "Joyce");
    //�����ó�Ա(member access notation)����pair�еĵ���Ԫ�أ����ǵ�����Ϊfirst��second
    std::cout << author.first << "  " << author.second << std::endl;
}
/*
�����ڵ��������ڲ�����ͬ���ͻ�ͬ���͵�--����--ֵ��������

*/
