#ifndef STACKCLASS_H
#define STACKCLASS_H
#include <vector>
#include <iostream>

void test_stackclass();

class stackclass
{
public:
    //��ʼ��_stack�Ĵ�С��_topΪ0
    stackclass(int capacity)
        : _stack(capacity), _top(0) {}

    bool pop(int &value);
    bool push(int value);

    bool full();
    bool empty();
    void display();

    int size();

private:
    int _top;
    std::vector<int> _stack;
};

#endif // STACKCLASS_H
