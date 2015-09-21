/*******************************************************************************************

------------------------C++从入门到精通------------------------

******************3 C++基本数据类型******************
1. 文字常量  //basicDataTypes/literalConstants
2. 变量     //basicDataTypes/variable
3. 指针类型  //basicDataTypes/pointer
4. 字符串类型  //basicDataTypes/stringtype
5. const限定修饰符 //basicDataTypes/constkeywords
6. 引用类型     //basicDataTypes/referencetype
7. 布尔类型     //basicDataTypes/booltype
8. 枚举类型难改  //basicDataTypes/enumerationtype
9. 数组类型     //basicDataTypes/arraytype
10. vector容器类型      //basicDataTypes/vectorytype
11. 复数类型            //basicDataTypes/complexnumbertype
12. typedef名字       //basicDataTypes/typedefkeywords
13. volatitle限定修饰符      //basicDataTypes/volatitlekeywords
14. pair类型          //basicDataTypes/pairtype
15. 类类型             //basicDataTypes/classtype

******************4 表达式******************
1. 什么是表达式    //expression/whatsexpression
2. 算术操作符        //expression/arithmeticoperator
3. 等于、关系和逻辑操作符    //expression/logicaloperator
4. 赋值操作符        //expression/assinmentoperator
5. 递增和递减操作符     //expression/null
6. 复数操作符        //expression/complexnumberoperator
7. 条件操作符        //expression/null--expr1 ? expr2 : expr3
8. sizeof操作符        //expression/szieofoperator
9. new和delete表达式    //expression/newdeleteexpression
10. 逗号操作符       //expression/null int ival = (ia != 0) ? ix = get_value(), ia[index] = ix : ia[sz] = ix, ia[index] = 0;
11. 位操作符    //expression/bitoperator
12. bitset操作    //expression/bitsetoperator
13. 优先级     //expression/null--操作符具有优先级和结合性。赋值操作符是右结合的，算数操作符是左结合的。
14. 类型转换   //expression/typeconversion--算术转换(arithmetic conversions);隐式类型转换(implicit type conversion)/显示转换
15. 栈类实例    //expression/

******************5 语句******************
1.简单语句和复合语句 //statement/null--空语句  ;
2.声明语句        //statement/null--声明语句(declaration statement)，对象的定义(定义语句definition)，
3.if语句          //statement/judgment
4.switch语句      //statement/judgment
5.for循环语句     //statement/loopstatement
6.while语句       //statement/loopstatement
7.do while语句    //statement/loopstatement
8.break语句      //statement/loopstatement
9.continue语句   //statement/loopstatement
10.goto语句      //statement/loopstatement
11.链表实例      //statement
******************6 抽象容器类型**************+****
顺序容器(sequence container)：拥有由单一类型元素组成的一个有序集合。
关联容器(associative container)：支持查询一个元素是否存在，并可以有效地获取元素。
1.文本查询系统
2.vector还是list
    //vector表示一段连续的内存区域，每个元素被顺序存储在这段内存中。
        //对其随机访问效率高；但在任意位置，而不是在vector末尾插入/删除元素，则效率很低。

    //list表示非连续的内存区域，并通过一对指向首尾的指针双向连接起来。
        //任意位置插入、删除效率高。
    //小型数据vector效率高于list，反之list效率高于vector。

    //为提高效率，实际上vector并不是随每一个元素的插入而增长自己，而是当vector需要增长自己是，

    //它实际分配的空间比当前所需的空间要多一些。这个策略是容器的增长效率更高。

3.vector怎样自己增长
   //容量指在容器下一次需要增长自己之前能够被加入到容器中的元素的总数(容量只与连续存储器有关：
   //如vector、deque、或string。list不要求容量)。长度指容器当前拥有元素的个数。
4.定义一个顺序容器
5.迭代器(iterator)
6.顺序容器操作
7.存储文本行
8.找到一个子串
9.处理标点符号
10.任意其他格式的字符串
11.其他string操作
12.生成文本位置map
13.穿件单词排除集
14.完整的程序
15.multimap和multiset
16.栈
17.队列和优先级队列
18.回顾iStack类









1. 文件操作 #include <fstream>
    从一个文件写到另一个文件

2. 数组 int fibon[9]   斐波那契数列

3. 动态内存分配和指针 int *pint;    //example: pointer.cpp
    指针的算术运算

4. const

5. 类，公有接口（public interface),私有成员提供私有实现代码（private implementation）。
    成员访问操作符（member access operator）：类对象点操作符（.），类对象指针箭头操作符。
    类域操作符（class scope operator）IntArray::
    类的拷贝构造函数（copy constructor）
    析构成员函数（destructor member function）~  析构函数会释放在类对象使用和构造过程中所获得的资源。
    类继承，继承类
    protected级别
    派生类构造函数的语法提供了向基类构造函数传递参数的接口
    多继承（multiple inheritance，也叫多重继承）
    类模板

6. 内联函数：inline关键字修饰的函数。

7. 函数重载（function overloading）：同名，参数类型或参数的数目不同。

8. 虚拟函数（virtual function）

9. 泛型设计

10. 数据类型
    文字常量：不能改变，不能寻址
    十进制、八进制、十六进制
    变量，c++关键字
    对象定义
    指针类型：空(void*)类型指针，可以被任何数据指针类型的地址值赋值(函数指针不能赋值给它)

11. 字符串类型

12. const限定修饰符  //example: constusing.cpp

13. 引用类型：引用(reference)有时候又称为别名(alias)，类似指针

14. 枚举类型 //



*/
