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

    //ö�����ͣ������������ͱ�ʶ��
    open_modes om = output;
    std::cout << "om: " << om << std::endl;

    //����ʹ��ö�ٳ�Ա���е���

    //���Զ���һ����ö�ٳ�Ա��ֵ�������ַ�������

    //point2w == point3d
    enum Points {point2d = 2, point2w, point3d = 3, point3w};

    std::cout << "point2d: " << point2d << "\n"
              << "point2w: " << point2w << "\n"
              << "point3d: " << point3d << "\n"
              << "point3w: " << point3w << std::endl;

    //Points pt2w = 3; //ö�ٲ��ܳ�ʼ��Ϊint����
    Points add = point3d; //ö�����ͼ������໥��ֵ

    std::cout << "Points add = point3d: " << add << "\t" << point3d << std::endl;
}
