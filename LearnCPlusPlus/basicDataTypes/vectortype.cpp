#include "vectortype.h"
#include <vector>

void vector_type()
{
    //vector_define();
    vector_operator();
}

void vector_define()
{
    const int elem_size = 10;
    std::vector<int> ivec(elem_size);

    int ia[elem_size];
    if(!ivec.empty())
    {
        for(int ix = 0; ix < elem_size; ++ix)
        {
            ia[ix] = ivec[ix];
            std::cout << ivec[ix] << "  ";
        }
        std::cout << std::endl;
    }
    for(int i = 0; i < elem_size; i++)
    {
        std::cout << ia[i] << "  ";
    }
    std::cout << std::endl;

    //��ʾ�ĳ�ʼֵ����ʼ��
    std::vector<int> vec1(10, -1); //����Ϊ10����ʼ��Ϊ-1
    if(!vec1.empty())
    {
        for(int i = 0; i < vec1.size(); i++)
            std::cout << vec1[i] << "  ";
        std::cout << std::endl;
    }

    //����������ʼ��
    int ia1[6] = {-2, -1, 0, 1, 2, 1024};
    std::vector<int> ivec2(ia1, ia1+6); //��ia1��6��Ԫ�ص�ivec2��
    if(!ivec2.empty())
    {
        for(int i = 0; i < ivec2.size(); i++)
        {
            std::cout << ivec2[i] << "  ";
        }
        std::cout << std::endl;
    }
    //vector�໥��ֵ
    std::vector<int> ivec3 = ivec2;
    std::cout << ivec3.size() << std::endl;
}

void vector_operator()
{
    std::vector<std::string> svec; //�յ�vector
    std::string word;
    std::cout <<"use \'*\' end input operator: " << std::endl;
    while(std::cin >> word)
    {
        if(word == "*")
            break;
        svec.push_back(word);
    }
    for(int ix = 0; ix < svec.size(); ix++)
    {
        std::cout << svec[ix] << "  ";
    }
    std::cout << std::endl;

    //������(iterator)����
    std::cout << "iterator operator: " << std::endl;
    for(std::vector<std::string>::iterator it = svec.begin();
        it != svec.end(); it++)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;
}
