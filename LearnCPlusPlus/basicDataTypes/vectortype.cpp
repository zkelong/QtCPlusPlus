#include "vectortype.h"
#include <vector>
#include <conio.h>

using namespace std;
void vector_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "vector类型: " << endl;
        cout << "1.vector定义" << endl;
        cout << "2.vector操作" << endl;
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
            vector_define();
            break;
        case 2:
            vector_operator();
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

void vector_define()
{
    cout << "定义大小可以用const变量：std::vector<int> ivec(const变量);" << endl;
    const int elem_size = 10;
    std::vector<int> ivec(elem_size);

    cout << "数组定义大小也可以用const变量：int ia[const变量];" << endl;
    int ia[elem_size];
    if(!ivec.empty())
    {
        for(int ix = 0; ix < elem_size; ++ix)
        {
            ia[ix] = ivec[ix];
            std::cout << ivec[ix] << "  ";
        }
        std::cout << std::endl;
    }
    for(int i = 0; i < elem_size; i++)
    {
        std::cout << ia[i] << "  ";
    }
    std::cout << std::endl;

    //显示的初始值来初始化
    cout << "显示的初始值来初始化： std::vector<int> vec1(10, -1); //长度为10，初始化为-1" << endl;
    std::vector<int> vec1(10, -1); //长度为10，初始化为-1
    if(!vec1.empty())
    {
        for(int i = 0; i < vec1.size(); i++)
            std::cout << vec1[i] << "  ";
        std::cout << std::endl;
    }

    //用数组来初始化
    int ia1[6] = {-2, -1, 0, 1, 2, 1024};
    cout << "用数组来初始化：std::vector<int> ivec2(ia1, ia1+6); //把ia1的6个元素到ivec2中" << endl;
    std::vector<int> ivec2(ia1, ia1+6); //把ia1的6个元素到ivec2中
    if(!ivec2.empty())
    {
        for(int i = 0; i < ivec2.size(); i++)
        {
            std::cout << ivec2[i] << "  ";
        }
        std::cout << std::endl;
    }
    //vector相互赋值
    cout << "vector间可以相互赋值：std::vector<int> ivec3 = ivec2;" << endl;
    std::vector<int> ivec3 = ivec2;
    std::cout << ivec3.size() << std::endl;
}

void vector_operator()
{
    cout << "定义vector时可以不指定大小：std::vector<std::string> svec; //空的vector" << endl;
    std::vector<std::string> svec; //空的vector
    cout << "判读是否为空：.empty()" << svec.empty() << endl;

    cout << "末尾追加数据：.push_back(param)" << endl;
    std::cout <<"use \'*\' end input operator: " << std::endl;
    std::string word;
    while(std::cin >> word)
    {
        if(word == "*")
            break;
        svec.push_back(word);
    }
    cout << "删除单个元素：vec.erase(vec.begin()+2);删除第3个元素" << endl;
    svec.erase(svec.end());
    cout << "插入元素：vec.insert(vec.begin()+i,a);在第i+1个元素前面插入a;" << endl;
    svec.insert(svec.begin()+1, "insert插入的数据");
    for(std::vector<std::string>::iterator it = svec.begin();
        it != svec.end(); it++)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    cout << "查看大小：.size()" << endl;
    cout << "使用下标访问元素，cout<<vec[0]<<endl;记住下标是从0开始的。" << endl;
    for(int ix = 0; ix < svec.size(); ix++)
    {
        std::cout << svec[ix] << "  ";
    }
    std::cout << std::endl;

    //迭代器(iterator)操作
    std::cout << "iterator operator: for(std::vector<std::string>::iterator it = svec.begin(); it != svec.end(); it++)" << std::endl;
    for(std::vector<std::string>::iterator it = svec.begin();
        it != svec.end(); it++)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    cout << "清空:vec.clear();" << endl;
    cout << "vec.erase(vec.begin()+i,vec.end()+j);删除区间[i,j-1];区间从0开始" << endl;
    cout << "使用reverse将元素翻转：需要头文件#include<algorithm>" << endl;

    cout << "reverse(vec.begin(),vec.end());将元素翻转(在vector中，如果一个函数中需要两个迭代器，一般后一个都不包含.)" << endl;
    cout << "使用sort排序：需要头文件#include<algorithm>，sort(vec.begin(),vec.end());(默认是按升序排列,即从小到大)." << endl;

    cout << "可以通过重写排序比较函数按照降序比较，如下: \
            \n定义排序比较函数：\
            \nbool Comp(const int &a,const int &b) \
            \n{   \
            \n    return a>b;  \
            \n}   \
            \n调用时:sort(vec.begin(),vec.end(),Comp)，这样就降序排序。" << endl;

}
