#include "vectortype.h"
#include <vector>
#include <conio.h>

using namespace std;
void vector_type()
{
    bool quit(false);
    int mId;
    while(1) {
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "vector����: " << endl;
        cout << "1.vector����" << endl;
        cout << "2.vector����" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !(mId >= 0 && mId <= 3) || cin.fail()) {
            cout << "ֵ����!" << endl;
            cin.clear(); //���std::cin�Ĵ���״̬
            cin.sync();  //������뻺����
        }
        if(mId != 0)
            system("cls");  //��������̨
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
        getch(); //��windowsƽ̨�´ӿ���̨�޻��Ե�ȡһ���ַ�����linux�����л��Եġ�--ͷ�ļ�#include <conio.h>
        if(quit) {
            break;
        }
    }
}

void vector_define()
{
    cout << "�����С������const������std::vector<int> ivec(const����);" << endl;
    const int elem_size = 10;
    std::vector<int> ivec(elem_size);

    cout << "���鶨���СҲ������const������int ia[const����];" << endl;
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

    //��ʾ�ĳ�ʼֵ����ʼ��
    cout << "��ʾ�ĳ�ʼֵ����ʼ���� std::vector<int> vec1(10, -1); //����Ϊ10����ʼ��Ϊ-1" << endl;
    std::vector<int> vec1(10, -1); //����Ϊ10����ʼ��Ϊ-1
    if(!vec1.empty())
    {
        for(int i = 0; i < vec1.size(); i++)
            std::cout << vec1[i] << "  ";
        std::cout << std::endl;
    }

    //����������ʼ��
    int ia1[6] = {-2, -1, 0, 1, 2, 1024};
    cout << "����������ʼ����std::vector<int> ivec2(ia1, ia1+6); //��ia1��6��Ԫ�ص�ivec2��" << endl;
    std::vector<int> ivec2(ia1, ia1+6); //��ia1��6��Ԫ�ص�ivec2��
    if(!ivec2.empty())
    {
        for(int i = 0; i < ivec2.size(); i++)
        {
            std::cout << ivec2[i] << "  ";
        }
        std::cout << std::endl;
    }
    //vector�໥��ֵ
    cout << "vector������໥��ֵ��std::vector<int> ivec3 = ivec2;" << endl;
    std::vector<int> ivec3 = ivec2;
    std::cout << ivec3.size() << std::endl;
}

void vector_operator()
{
    cout << "����vectorʱ���Բ�ָ����С��std::vector<std::string> svec; //�յ�vector" << endl;
    std::vector<std::string> svec; //�յ�vector
    cout << "�ж��Ƿ�Ϊ�գ�.empty()" << svec.empty() << endl;

    cout << "ĩβ׷�����ݣ�.push_back(param)" << endl;
    std::cout <<"use \'*\' end input operator: " << std::endl;
    std::string word;
    while(std::cin >> word)
    {
        if(word == "*")
            break;
        svec.push_back(word);
    }
    cout << "ɾ������Ԫ�أ�vec.erase(vec.begin()+2);ɾ����3��Ԫ��" << endl;
    svec.erase(svec.end());
    cout << "����Ԫ�أ�vec.insert(vec.begin()+i,a);�ڵ�i+1��Ԫ��ǰ�����a;" << endl;
    svec.insert(svec.begin()+1, "insert���������");
    for(std::vector<std::string>::iterator it = svec.begin();
        it != svec.end(); it++)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    cout << "�鿴��С��.size()" << endl;
    cout << "ʹ���±����Ԫ�أ�cout<<vec[0]<<endl;��ס�±��Ǵ�0��ʼ�ġ�" << endl;
    for(int ix = 0; ix < svec.size(); ix++)
    {
        std::cout << svec[ix] << "  ";
    }
    std::cout << std::endl;

    //������(iterator)����
    std::cout << "iterator operator: for(std::vector<std::string>::iterator it = svec.begin(); it != svec.end(); it++)" << std::endl;
    for(std::vector<std::string>::iterator it = svec.begin();
        it != svec.end(); it++)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    cout << "���:vec.clear();" << endl;
    cout << "vec.erase(vec.begin()+i,vec.end()+j);ɾ������[i,j-1];�����0��ʼ" << endl;
    cout << "ʹ��reverse��Ԫ�ط�ת����Ҫͷ�ļ�#include<algorithm>" << endl;

    cout << "reverse(vec.begin(),vec.end());��Ԫ�ط�ת(��vector�У����һ����������Ҫ������������һ���һ����������.)" << endl;
    cout << "ʹ��sort������Ҫͷ�ļ�#include<algorithm>��sort(vec.begin(),vec.end());(Ĭ���ǰ���������,����С����)." << endl;

    cout << "����ͨ����д����ȽϺ������ս���Ƚϣ�����: \
            \n��������ȽϺ�����\
            \nbool Comp(const int &a,const int &b) \
            \n{   \
            \n    return a>b;  \
            \n}   \
            \n����ʱ:sort(vec.begin(),vec.end(),Comp)�������ͽ�������" << endl;

}
