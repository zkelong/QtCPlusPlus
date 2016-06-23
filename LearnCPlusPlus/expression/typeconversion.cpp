#include "typeconversion.h"

class B
{
public:
    B(){}
public:
    int m_iNum;
};


void typeVersion()
{
    int i;
    float f = 166.7;
    i = static_cast<int>(f);  //执行非多态的转换，用于代替C中通常的转换操作
    std::cout << i << std::endl;

    char *p = "Thisisanexample.";
    i = reinterpret_cast<int>(p);  //将指针p的值以二进制（位模式）的方式被解释为整型
    std::cout << i << std::endl;

    const B b1;
    //b1.m_iNum = 100; //compile error
    // 可以做如下转换，体现出转换为指针类型
    B *b2 = const_cast<B*>(&b1);
    // 或者左侧也可以用引用类型，如果对b2或b3的数据成员做改变，就是对b1的值在做改变
    B &b3 = const_cast<B&>(b1);
    b2->m_iNum = 200;    //fine
    b3.m_iNum = 300;    //fine
    std::cout << b1.m_iNum << "\t" << b2->m_iNum << "\t" << b3.m_iNum << std::endl;
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

static_cast < type-id > ( expression )
①用于类层次结构中基类（父类）和派生类（子类）之间指针或引用的转换。
进行上行转换（把派生类的指针或引用转换成基类表示）是安全的；
进行下行转换（把基类指针或引用转换成派生类表示）时，由于没有动态类型检查，所以是不安全的。
②用于基本数据类型之间的转换，如把int转换成char，把int转换成enum。这种转换的安全性也要开发人员来保证。
③把空指针转换成目标类型的空指针。
④把任何类型的表达式转换成void类型。

dynamic_cast <type-id> (expression)
  Type-id 必须是类的指针、类的引用或者void*
  如果 type-id 是类指针类型，那么expression也必须是一个指针，如果 type-id 是一个引用，那么 expression 也必须是一个引用。
  dynamic_cast运算符可以在执行期决定真正的类型。如果 downcast 是安全的（也就说，如果基类指针或者引用确实指向一个派生类对象）这个运算符会传回适当转型过的指针。
      如果 downcast 不安全，这个运算符会传回空指针（也就是说，基类指针或者引用没有指向一个派生类对象）。
  dynamic_cast主要用于类层次间的上行转换和下行转换，还可以用于类之间的交叉转换。
  在类层次间进行上行转换时，dynamic_cast和static_cast的效果是一样的；

const_cast<type_id> (expression)
  该运算符用来修改类型的const或volatile属性。除了const或volatile修饰之外，type_id和expression的类型是一样的。
  ①常量指针被转化成非常量的指针，并且仍然指向原来的对象；
  ②常量引用被转换成非常量的引用，并且仍然指向原来的对象；

reinterpret_cast<type-id> (expression)
  type-id 必须是一个指针、引用、算术类型、函数指针或者成员指针。
  它可以把一个指针转换成一个整数，也可以把一个整数转换成一个指针（先把一个指针转换成一个整数，再把该整数转换成原类型的指针，还可以得到原先的指针值）。
*/
