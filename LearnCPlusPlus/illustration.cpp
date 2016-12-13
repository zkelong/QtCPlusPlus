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
3.if语句          //statement/judgment/null--if-else语句的替代结构是switch语句
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
   //实际上 vector 并不是随每一个元素的插入而增长自己 而是当 vector 需
   //要增长自身时 它实际分配的空间比当前所需的空间要多一些 也就是说 它分配了一些额
   //外的内存容量(或者说它预留了这些存储区)分配的额外容量的确切数目由具体实现定义这个策略使容器的增长效率更高
4.定义一个顺序容器
5.迭代器(iterator)
    //提供了一种一般化的方法，对顺序或关联容器类型中的每个元素进行连续访问。
    //提供begin()和end()成员函数，分别指向第一个和末尾元素的下一个位置。
    for(iter = container.begin(); iter != container.end(); ++iter){}

6.顺序容器操作
    //尾部追加（push_back()），插入（insert()），查询（find()），删除（delete()），
    //赋值（slist1 = slist2）和对换(slist1.swap(slist2))，泛型运算

7.存储文本行
8.找到一个子串
9.处理标点符号
10.任意其他格式的字符串
11.其他string操作
12.生成文本位置map
13.穿件单词排除集
14.完整的程序       //abstractontainer/abstractcontainer
15.multimap和multiset
    //map和list只能包含每个键的单个实例，而multiset和multimap允许要被存储的键出现多次。
    //要使用multimap和mulitest，需包含map和set投文件。
16.栈
    //栈容器支持的操作：empty(), size(), pop(), top(), push(item)--放入新的栈顶元素
17.队列和优先级队列
    //队列(queue)抽象体现了先进先出(FIFO，即"firs in, first out")的存储和检索策略。
    //标准库提供了两种风格的队列：FIFO队列(queue)及priority_queue(优先级队列)。
    //队列支持的操作：empty(), size(), pop(),
    //front()--返回，但不删除队首元素，只能应用在一般队列上
    //back()--返回，但不删除队尾元素，只能应用在一般队列上
    //top(), push(item)。
18.回顾iStack类

******************7 函数******************
1.概述
    //四种特殊的函数类型：内联(inline)函数、递归函数、用链接指示符(linkage directive)声明的非C++函数。
    //函数调用：如果函数已经声明为inline(内联)，则函数体可能在编译期间它的调用点撒花姑娘就被展开。否则在运行时才被盗调用。
2.函数原型
3.参数传递
    //C++是一种强类型(strong type)语言。每个函数调用的实参在编译期间都要经过类型检查(type-ched).
    //所有函数都使用在程序运行栈(run-time stack)中分配的存储区。该存储区一直与该函数关联，直到函数结束。该函数的整个存储区被称为活动记录(activation record)
    //指针和引用参数都允许函数修改实参指向的对象。两种类型的参数都允许有效地向函数传递大型类对象。
    //引用必须被初始化化为指定一个对象，一旦初始化就不能再指向其他对象；指针可能指向一个对象或没有任何对象，所以函数在确定指针指向一个有效的对象之前不能安全地解引用(dereference)一个指针。
    //数组参数：C++中，数组永远不会安值传递。它是传递第一个元素(准确地说是第0个)的指针。
    //抽象容器类型参数--当容器类型的参数按值传递时,容器以及全部元素都被拷贝到被调函数的本地拷贝中,因为拷贝的效率非常低 所以把容器类型的参数声明为引用参数比较好
    //缺省实参--char *screenInit( int height = 24, int width = 80, char background = ' ' );
    //省略号--无法列出传递给参数的所有实参的类型和数目；省略号挂起类型检查机制。
    //省略号有两种形式：void foo(parm_list, ...)<逗号是可选的>; void foo(...)。
4.返回一个值
    //函数的返回值是按值传递的(passed by value)
    //如果返回值是一个大型对象，用引用(或指针)返回类型比按值返回类对象效率要高得多。在某些情况下，编译器自动按值返回转换到按引用返回。该优化被称为命名返回值优化(named return value optimization).
    //声明一个指向局部对象的引用。局部对象的生命期随函数的结束而结束。函数返回一个左值，对返回值的任何修改都将改变被返回的实际对象。
    //一个程序中的各种函数可以通过两种机制进行通讯(值的交换)。
        1.全局对象（global object）。缺点：
            使用全局变量的函数依赖于全局变量对象的存在和类型，这使得在不同上下文环境中重用该函数更加困难。
            修改函数，全局依赖增加了引入错误的可能性；且只对局部做修改也要求程序员必须理解整个程序。
            如果全局变量的到一个不正确的值，则必须查找整个程序以判断错误发生的位置，也就是没有实现局部化。
            当一个函数使用全局对象时，递归更加难以正确完成。(递归函数在调用自身时才发生)
            在线程存在的情况下，必须做特殊的编码，以便同步各个线程对于全局对象的读和写操作。
5.递归
    //直接或间接调用自己的函数被称为递归函数(recursive function)。
    //必须定义一个停止条件(stoping condition)
6.inline函数
    //inline建议编译器将函数在节点展开。编译器可以忽略。
7.连接指示符：extern "C"
    //程序员用链接指示符(linkage directive)告诉编译器，该函数是用其他的程序设计语言编写的。链接指示符有两种形式：
        单一语句（single statement）形式，也可以是复合语句（compound statement）
    //链接指示符的第一种形式由关键字extern后跟一个字符串常量以及一个“普通”的函数声明构成。虽然函数是用另外一种语言编写的，但调用它仍然需要类型检查。

8.main()：处理命令行选项
    //处理命令行选项的基本步骤如下：
        1.按顺序从argv中取出每个选项。用for循环来完成，从1开始迭代。
            for(int ix = 1; ix < argc; ++ix) {
                char *pchar = argv[ix];
                //...
            }
        2.确定选项的类型。
            switch(pchar[0]) {
                case '-': {
                    //识别-h, -d, -v, -l, -o
                }
                default: {
                    //处理 -l后的限制
                    //-o 后面的输出文件
                    // 文件名...
                }
            }
        3.填写代码，处理第2项中的两个case
        如果存在“-”，则我们只是简单地切换到下一个字符，确定用户指定的选项。
        case '-': {
            swtch(pchar[1])
            {
            case 'd':
                //处理调试
                break;
            case 'v'"
                //处理版本请求
                break;
            case 'h':
                //处理帮助
                break;
            case '0':
                //准备处理输出文件
                break;
            case 'l':
                //准备处理输出文件
                break;
            default:
                //无法辨识的选项
                //报告并退出
            }
        }
    //处理命令行的类，把命令行选项的细节封装起来，使得它不会扰乱main()。
9.指向函数的指针
    //返回值类型 ( * 指针变量名) ([形参列表]);
        注1：“返回值类型”说明函数的返回类型，“(指针变量名 )”中的括号不能省，括号改变了运算符的优先级。
        若省略整体则成为一个函数说明，
        说明了一个返回的数据类型是指针的函数，后面的“形参列表”表示指针变量指向的函数所带的参数列表。例如：
        int func(int x); -- 声明一个函数
        int (*f) (int x); 声明一个函数指针
        f=func;  将func函数的首地址赋给指针f 或者 f = &func;
    //省略号也是函数类型的一部分。如果两个函数具有相同的参数表，但是一个函数在参数表末尾有省略号，则它们被视为不同的函数类型。
        int (*pfce)(const char*, ...); //可以指向printf()
        int (*pfc)(const char*);       //可以指向strlen()
    //调用：指向函数的指针可以被用来调用它所指向的函数。
        调用函数时，不需要解引用操作符。无论是用函数名直接调用函数，还是用指针间接调用函数，两种写法是一样的。

    //函数指针数组
    int (testCases[10])();

******************7 函数******************
******************7 函数******************







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
