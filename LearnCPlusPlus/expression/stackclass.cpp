#include "stackclass.h"

void test_stackclass()
{
    stackclass stc(10);
    std::cout << stc.empty() << std::endl;
    stc.push(10);
    std::cout << stc.full() << std::endl;
    stc.push(12);
    std::cout << stc.size() << std::endl;
    stc.display();
    int i = 1;
    stc.pop(i);
    stc.display();
}

/*��Ԫ�ش洢��һ��int�͵�vector�У�����Ϊ_stack��
_top������һ�����ò۵�ֵ��push()��������ò�ѹ��һ��ֵ��
_top�ĵ�ǰֵ��ӳ��ջ��Ԫ�صĸ�����
*/
inline int stackclass::size()
{
    std::cout<< "size..." << _top << std::endl;
    return _top;
}

inline bool stackclass::empty()
{
    return _top ? false : true;
}

inline bool stackclass::full()
{
    return _top < _stack.size()-1 ? false : true;
}

bool stackclass::pop(int &top_value)
{
    if(empty())
        return false;
    top_value = _stack[--_top];
    std::cout << "stackclass::pop: " << top_value << std::endl;
    return true;
}

bool stackclass::push(int value)
{
    std::cout << "stackclass::push(" << value << ")\n";
    if(full())
        return false;

    _stack[_top++] = value;
    std::cout << "_stack[top++]: " << _stack[_top] << std::endl;
    return true;
}

void stackclass::display()
{
    if(!size())
    {
        std::cout << "(0)\n";
        return;
    }
    std::cout << "(" << size() << ")(bot: ";
    for(int ix = 0; ix < _top; ++ix)
        std::cout << _stack[ix] << " ";
    std::cout << " :top)\n";
}

/*
ջ--�������ݳ����������ȳ�(LIFO)��˳��Ƕ��ͻ�ȡ���е�ֵ��
    ��������������push, popen
    ������������ѯջ�Ƿ���full()���enmpty()���Լ��ж�ջ�ĳ���size()

*/
