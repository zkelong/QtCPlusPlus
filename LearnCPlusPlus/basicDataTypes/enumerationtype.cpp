#include "enumerationtype.h"

void enumeration_type()
{
    enumeration_define();
}

void enumeration_define()
{
    enum open_modes { input = 1, output, append };
    std::cout << "input: " << input << "\n"
              << "append: " << append << std::endl;

    //枚举类型：可以用作类型标识符
    open_modes om = output;
    std::cout << "om: " << om << std::endl;

    //不能使用枚举成员进行迭代

    //可以定义一个由枚举成员的值索引的字符串数组

    //point2w == point3d
    enum Points {point2d = 2, point2w, point3d = 3, point3w};

    std::cout << "point2d: " << point2d << "\n"
              << "point2w: " << point2w << "\n"
              << "point3d: " << point3d << "\n"
              << "point3w: " << point3w << std::endl;

    //Points pt2w = 3; //枚举不能初始化为int整数
    Points add = point3d; //枚举类型件可以相互赋值

    std::cout << "Points add = point3d: " << add << "\t" << point3d << std::endl;
}
