#include "newdeleteexpression.h"
#include <string>

typedef std::string string;

void newdelete_expression()
{
    newdelete_example();
}

void newdelete_example()
{
    int *ip1 = new int; //没有初始化
    *ip1 = 100;
    std::cout << "*ip1: " << *ip1 << std::endl;
    delete ip1;

    int *ip2 = new int(1024);
    std::cout << "*ip2: " << *ip2 << std::endl;
    delete ip2;

    int *iap = new int[10];
    std::cout << "*iap[9]: " << *iap + 1 << std::endl;
    delete [] iap;

    string *sp = new string;
    *sp = "test ok!!!";
    std::cout << "*sp: " << *sp << "sizeof *sp: " << sizeof(*sp) <<  std::endl;
    delete sp;

    string *sap = new string[10];
    std::cout << "*sap: " << *sap  << "sizeof *sap: " << sizeof(*sap) << "  sizeof sap: " << sizeof(sap) << std::endl;
    delete [] sap;
}

/*
系统为每个程序都提供了一个在程序执行时可用的内存池。
这个可用内存池被称为程序的空闲存储区(free store)或堆(heap)；
动态内存分配(dynamic memory allocation);;类型指示符(specifier)

//////////
回收用new分配的单个对象的内存空间的时候用delete，
回收用new[]分配的一组对象的内存空间的时候用delete[]
new[]和delete[]，分两种情况：1.为基本数据类型分配和回收空间；2.位自定义类型分配和回收空间
如果用 delete[]，则在回收空间之前所有对象都会首先调用自己的析构函数。
基本类型的对象没有析构函数，所以回收基本类型组成的数组空间用 delete 和 delete[] 都是应该可以的；
但是对于类对象数组，只能用 delete[]。对于 new 的单个对象，只能用 delete 不能用 delete[] 回收空间。
所以一个简单的使用原则就是：new 和 delete、new[] 和 delete[] 对应使用。
*/
