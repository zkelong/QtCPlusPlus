#include "arraytype.h"
#include <conio.h>

using namespace std;

void array_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "数组类型: " << endl;
        cout << "1.数组定义" << endl;
        cout << "2.数组操作" << endl;
        cout << "0.退出" << endl;
        while(cout << "输入选项进入：", cin >> mId, !(mId >= 0 && mId <= 3) || cin.fail()) {
            cout << "值不对!" << endl;
            cin.clear(); //清除std::cin的错误状态
            cin.sync();  //清空输入缓冲区
        }
        if(mId != 0)
            system("cls");  //清屏控制台
        switch (mId) {
        case 1:
            array_define();
            break;
        case 2:
            array_operate();
            break;
        case 0:
            quit = true;
            break;
        default:
            break;
        }
        getch(); //在windows平台下从控制台无回显地取一个字符，在linux下是有回显的。--头文件#include <conio.h>
        if(quit) {
            break;
        }
    }
}

void array_define()
{
    std::cout << "数组定义：int ia[10]; int ib[10][10];" << std::endl;
    int ia[10];
    int ival = ia[1];  //索引访问(indexing)或下标访问(subscripting)
    std::cout << "ival: " << ival << std::endl;

    cout << "一维数组没有初始化，赋值：" << endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << ia[i] << "\t";
    }
    std::cout << std::endl;

    //二维数组
    cout << "二维数组，没有初始化和赋值：" << endl;
    int ib[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            std::cout << ib[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "数组初始化：" << std::endl;
    std::cout << "int ix[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};" << std::endl;
//    std::cout <<
    int ix[9] = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    double da[4] = { 3.14, 6.28, 12.56, 25.12};
    std::string sa[3] = {"piglet", "eeyore", "pooh"};
    print(ix, ia+9);
    print(da, da+4);
    print(sa, sa+3);

    cout << "二维数组部分初始化：" << endl;
    int it[4][3] = {{1,2,3}, {4, 5}, {6}};
    for(int i = 0; i < sizeof(it)/sizeof(it[0]); i++)
    {
        for(int j = 0; j < sizeof(it[0])/sizeof(int); j++)
        {
            std::cout << it[i][j] << " ";
        }
        cout << endl;
    }
}

void array_operate()
{
    std::cout << "数组操作:" << std::endl;
    std::cout << "数组不能被另外一个数组初始化" << endl;
    cout << "数组的长度：用sizeof()函数，sizeof(数组名)/sizeof(数组元素类型)" << endl;
    cout << "例子：int it[4][3]; sizeof(it)/sizeof(it[0]); sizof(it[0]/sizeof(int))" << endl;
}

//一个数组不能被另外一个数组初始化，也不能被赋值给另外一个数组。
//注意数组越界

//泛型程序设计(generic programming)
template <typename elemType> //要在使用的上一行写这个定义
void print(elemType *pbegin, elemType *pend)
{
    std::cout << "泛型设计：" << endl;
    cout << "template <typename elemType> //要在使用的上一行写这个定义" << std::endl;
    cout << "void print(elemType *pbegin, elemType *pend)" << std::endl;
    while(pbegin != pend)
    {
        std::cout << *pbegin << ' ';
        ++pbegin;
    }
    std::cout << std::endl;
}
