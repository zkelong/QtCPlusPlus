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

/*把元素存储在一个int型的vector中，名字为_stack。
_top含有下一个可用槽的值，push()操作会向该槽压入一个值。
_top的当前值反映了栈中元素的个数。
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
栈--基本数据抽象，允许后进先出(LIFO)的顺序嵌入和获取其中的值。
    两个基本操作：push, popen
    其他操作：查询栈是否满full()或空enmpty()，以及判断栈的长度size()

*/
