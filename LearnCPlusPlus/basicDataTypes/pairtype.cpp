#include "pairtype.h"
#include <utility>

void pair_type()
{
    pair_define();
}

void pair_define()
{
    std::pair<std::string, std::string> author("James", "Joyce");
    //可以用成员(member access notation)访问pair中的单个元素，它们的名字为first和second
    std::cout << author.first << "  " << author.second << std::endl;
}
/*
可以在单个对象内部把相同类型或不同类型的--两个--值关联起来

*/
