#include "typeconversion.h"

void typeVersion()
{
    int i;
    float f = 166.7;
    i = static_cast<int>(f);  //执行非多态的转换，用于代替C中通常的转换操作
    std::cout << i << std::endl;

    char *p = "Thisisanexample.";
    i = reinterpret_cast<int>(p);  //将指针p的值以二进制（位模式）的方式被解释为整型
    std::cout << i << std::endl;
}

/*
算术转换：arithmetic conversions
隐式类型转换：implicit type conversion
显示类型转换：explicit type conversion--也叫强制类型转换(cast)
    强制类型转换操作符：static_cast、dynamic_cast、const_cast、reinterpret_cast
用一种类型的表达式赋值给另一种类型的对象。目标转换类型是被赋值对象的类型。
把一个表达式传递给一个函数调用，表达是的类型与形式参数的类型不相同。这种情况下，目标转换类型是形式参数的类型。
从一个函数返回一个表达式，表达式的类型与返回类型不相同。这种情况下，返回值类型转换成函数的返回类型。
算数转换-隐式转换：long double <- double <- float <- int <- char, signed char, unsigned char, short, int

void*型的指针被成为泛型(generic)指针，因为它可以指向任意数据类型的指针。
void*型指针不能直接解除引用，因为没有类型信息可用来指导编译器怎样解释底层的位模式。C++中不存在从void*型指针到特殊类型的指针之间的自动那个转换。

static_cast:
①用于类层次结构中基类（父类）和派生类（子类）之间指针或引用的转换。
进行上行转换（把派生类的指针或引用转换成基类表示）是安全的；
进行下行转换（把基类指针或引用转换成派生类表示）时，由于没有动态类型检查，所以是不安全的。
②用于基本数据类型之间的转换，如把int转换成char，把int转换成enum。这种转换的安全性也要开发人员来保证。
③把空指针转换成目标类型的空指针。
④把任何类型的表达式转换成void类型。

dynamic_cast <type-id> (expression)
  Type-id 必须是类的指针、类的引用或者void*
  如果 type-id 是类指针类型，那么expression也必须是一个指针，如果 type-id 是一个引用，那么 expression 也必须是一个引用。

*/
