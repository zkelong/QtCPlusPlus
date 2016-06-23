#include "arraytype.h"

void array_type()
{
    //array_define();

    int ia[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    double da[4] = { 3.14, 6.28, 12.56, 25.12};
    std::string sa[3] = {"piglet", "eeyore", "pooh"};
    print(ia, ia+9);
    print(da, da+4);
    print(sa, sa+3);
}

void array_define()
{
    int ia[10];
    int ival = ia[1];  //��������(indexing)���±����(subscripting)
    std::cout << "ival: " << ival << std::endl;

    for(int i = 0; i < 10; i++)
    {
        std::cout << ia[i] << "\t";
    }
    std::cout << std::endl;

    //��ά����
    int ib[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            std::cout << ib[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

//һ�����鲻�ܱ�����һ�������ʼ����Ҳ���ܱ���ֵ������һ�����顣
//ע������Խ��

//���ͳ������(generic programming)
template <typename elemType> //Ҫ��ʹ�õ���һ��д�������
void print(elemType *pbegin, elemType *pend)
{
    while(pbegin != pend)
    {
        std::cout << *pbegin << ' ';
        ++pbegin;
    }
    std::cout << std::endl;
}
