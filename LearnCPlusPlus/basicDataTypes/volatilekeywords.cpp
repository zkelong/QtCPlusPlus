#include "volatilekeywords.h"

void volatile_type()
{
    volatile_define();
}

void volatile_define()
{
    volatile int display_register;
    //volatile Task *curr_task;
    const int max_size = 1024;
    volatile int ixa[max_size];
    //volatile Screen bitmap_buf;
    std::cout << max_size << std::endl;
}
/*��һ�������ֵ���ܻ��ڱ������Ŀ��ƻ���֮�ⱻ�ı�ʱ��
����һ����ϵͳʱ�Ӹ��µı�������ô�ö���Ӧ��������volatile
volatile�޶����η����÷�ͬconst�ǳ����ơ�������������Ϊ���͵ĸ������η�
volatile���η�����ҪĿ������ʾ���������ö����ֵ�����ڱ�����δ��⵽������±��ı䡣��˱�����������ϵ�������Щ����Ĵ������Ż�����
*/
