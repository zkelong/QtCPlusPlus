#include "referencetype.h"

void reference_type()
{
    reference_define();
}

void reference_define()
{
    int ival = 1024;
    int &reval = ival; //引用必须被初始化
    int *pi = &ival;
    int *&preVal = pi;  //指向指针的引用

    reval += 2; //引用所有的操作实际上都被运用在它所指的对象上

    std::cout << "ival: " << ival << "\t"
              << "&reval: " << &reval << "\t"
              << "*pi: " << *pi << "\t"
              << "*preVal: " << *preVal << std::endl;
}

//引用类型主要被用作函数形式参数


//一般运算符重载
//...
/*
c++的一大特性就是重载(overload)，通过重载可以把功能相似的几个函数合为一个，使得程序更加简洁、高效。在c++中不止函数可以重载，运算符也可以重载。由于一般数据类型间的运算符没有重载的必要，所以运算符重载主要是面向对象之间的。
1.一般运算符重载
在进行对象之间的运算时，程序会调用与运算符相对应的函数进行处理，所以运算符重载有两种方式：成员函数和友元函数。成员函数的形式比较简单，就是在类里面定义了一个与操作符相关的函数。友元函数因为没有this指针，所以形参会多一个。

    class A
    {
    public:
     A(int d):data(d){}
     A operator+(A&);//成员函数
     A operator-(A&);
     A operator*(A&);
     A operator/(A&);
     A operator%(A&);
     friend A operator+(A&,A&);//友元函数
     friend A operator-(A&,A&);
     friend A operator*(A&,A&);
     friend A operator/(A&,A&);
     friend A operator%(A&,A&);
    private:
     int data;
    };
    //成员函数的形式
    A A::operator+(A &a)
    {
     return A(data+a.data);
    }
    A A::operator-(A &a)
    {
     return A(data-a.data);
    }
    A A::operator*(A &a)
    {
     return A(data*a.data);
    }
    A A::operator/(A &a)
    {
     return A(data/a.data);
    }
    A A::operator%(A &a)
    {
     return A(data%a.data);
    }
    //友元函数的形式
    A operator+(A &a1,A &a2)
    {
     return A(a1.data+a2.data);
    }
    A operator-(A &a1,A &a2)
    {
     return A(a1.data-a2.data);
    }
    A operator*(A &a1,A &a2)
    {
     return A(a1.data*a2.data);
    }
    A operator/(A &a1,A &a2)
    {
     return A(a1.data/a2.data);
    }
    A operator%(A &a1,A &a2)
    {
     return A(a1.data%a2.data);
    }
    //然后我们就可以对类的对象进行+、-、*、/了。
    void main(void)
    {
     A a1(1),a2(2),a3(3);
     a1=a2+a3;
     //或者
     a1=a2.operator+(a3);
    }

注意：在进行a2+a3的时候会出错，因为我们在上面对+定义了两种方法，去掉一种即可。
2.关系运算符重载
因为函数体比较简单，后面我就只给出成员函数形式的函数声明了，关系运算符有==,!=,<,>,<=,>=。

    bool operator == (const A& );
    bool operator != (const A& );
    bool operator < (const A& );
    bool operator <= (const A& );
    bool operator > (const A& );
    bool operator >= (const A& );

3.逻辑运算符重载

    bool operator || (const A& );
    bool operator && (const A& );
    bool operator ! ();

4.单目运算符重载

这里的+、-是正负的意思，放在对象前面。

    A& operator + ();
    A& operator - ();
    A* operator & ();
    A& operator * ();

5.自增减运算符重载

++和--根据位置的不同有四种情况，都可以重载。

    A& operator ++ ();//前置++
    A operator ++ (int);//后置++
    A& operator --();//前置--
    A operator -- (int);//后置--

6.位运算符重载

按位操作。

    A operator | (const A& );
    A operator & (const A& );
    A operator ^ (const A& );
    A operator << (int i);
    A operator >> (int i);
    A operator ~ ();

7.赋值运算符重载

没有=哦。

    A& operator += (const A& );
    A& operator -= (const A& );
    A& operator *= (const A& );
    A& operator /= (const A& );
    A& operator %= (const A& );
    A& operator &= (const A& );
    A& operator |= (const A& );
    A& operator ^= (const A& );
    A& operator <<= (int i);
    A& operator >>= (int i);

8.内存运算符重载

    void *operator new(size_t size);
    void *operator new(size_t size, int i);
    void *operator new[](size_t size);
    void operator delete(void*p);
    void operator delete(void*p, int i, int j);
    void operator delete [](void* p);

9.特殊运算符重载

上面的运算符重载都有两种方式，而下面的运算符只能用一种，特殊吧。 这些运算符的重载只能是成员函数。

    A& operator = (const A& );
    char operator [] (int i);//返回值不能作为左值
    const char* operator () ();
    T operator -> ();
    //类型转换符
    operator char* () const;
    operator int ();
    operator const char () const;
    operator short int () const;
    operator long long () const;
    //还有很多就不写了

而这些只能以友元函数的形式重载

    friend inline ostream &operator << (ostream&, A&);//输出流
    friend inline istream &operator >> (istream&, A&);//输入流

10.总结

两种重载方式的比较：

    一般情况下，单目运算符最好重载为类的成员函数；双目运算符则最好重载为类的友元函数。
    以下一些双目运算符不能重载为类的友元函数：=、()、[]、->。
    类型转换函数只能定义为一个类的成员函数而不能定义为类的友元函数。 C++提供4个类型转换函数：reinterpret_cast（在编译期间实现转换）、const_cast（在编译期间实现转换）、stactic_cast（在编译期间实现转换）、dynamic_cast（在运行期间实现转换，并可以返回转换成功与否的标志）。
    若一个运算符的操作需要修改对象的状态，选择重载为成员函数较好。
    若运算符所需的操作数（尤其是第一个操作数）希望有隐式类型转换，则只能选用友元函数。
    当运算符函数是一个成员函数时，最左边的操作数（或者只有最左边的操作数）必须是运算符类的一个类对象（或者是对该类对象的引用）。如果左边的操作数必须是一个不同类的对象，或者是一个内部 类型的对象，该运算符函数必须作为一个友元函数来实现。
    当需要重载运算符具有可交换性时，选择重载为友元函数。

注意事项：

    除了类属关系运算符"."、成员指针运算符".*"、作用域运算符"::"、sizeof运算符和三目运算符"?:"以外，C++中的所有运算符都可以重载。
    重载运算符限制在C++语言中已有的运算符范围内的允许重载的运算符之中，不能创建新的运算符。
    运算符重载实质上是函数重载，因此编译程序对运算符重载的选择，遵循函数重载的选择原则。
    重载之后的运算符不能改变运算符的优先级和结合性，也不能改变运算符操作数的个数及语法结构。
    运算符重载不能改变该运算符用于内部类型对象的含义。它只能和用户自定义类型的对象一起使用，或者用于用户自定义类型的对象和内部类型的对象混合使用时。
    运算符重载是针对新类型数据的实际需要对原有运算符进行的适当的改造，重载的功能应当与原有功能相类似，避免没有目的地使用重载运算符。

*/
