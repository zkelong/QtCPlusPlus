#include "sizeoperator.h"

void sizeof_operator()
{
    sizeof_example();
}

void sizeof_example()
{
    int ia[] = {0, 1, 2};
    //sizeof������������Ĵ�С
    size_t array_size = sizeof ia;
    //sizeof����int���͵Ĵ�С
    size_t element_size = array_size / sizeof(int);
    std::cout << "sizeof: " << array_size << "  " << element_size << std::endl;
}

/*
sizeof�������������Ƿ���һ����������������ֽڳ���
sizeof(type name); //����ֻ���������ʽ
sizeof(objec);
sizeof object;
*/
