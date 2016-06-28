#include "referencetype.h"

void reference_type()
{
    reference_define();
}

void reference_define()
{
    int ival = 1024;
    int &reval = ival; //���ñ��뱻��ʼ��
    int *pi = &ival;
    int *&preVal = pi;  //ָ��ָ�������

    std::cout << "int &reval = ival; //���ñ��뱻��ʼ��" << std::endl;
    std::cout << "int *&preVal = pi;  //ָ��ָ�������" << std::endl;
    std::cout << "�������еĲ���ʵ���϶�������������ָ�Ķ�����" << std::endl;

    reval += 2; //�������еĲ���ʵ���϶�������������ָ�Ķ�����

    std::cout << "ival: " << ival << "\t"
              << "&reval: " << &reval << "\t"
              << "*pi: " << *pi << "\t"
              << "*preVal: " << *preVal << std::endl;
}

//����������Ҫ������������ʽ����


//һ�����������
//...
/*
c++��һ�����Ծ�������(overload)��ͨ�����ؿ��԰ѹ������Ƶļ���������Ϊһ����ʹ�ó�����Ӽ�ࡢ��Ч����c++�в�ֹ�����������أ������Ҳ�������ء�����һ���������ͼ�������û�����صı�Ҫ�����������������Ҫ���������֮��ġ�
1.һ�����������
�ڽ��ж���֮�������ʱ��������������������Ӧ�ĺ������д���������������������ַ�ʽ����Ա��������Ԫ��������Ա��������ʽ�Ƚϼ򵥣������������涨����һ�����������صĺ�������Ԫ������Ϊû��thisָ�룬�����βλ��һ����

    class A
    {
    public:
     A(int d):data(d){}
     A operator+(A&);//��Ա����
     A operator-(A&);
     A operator*(A&);
     A operator/(A&);
     A operator%(A&);
     friend A operator+(A&,A&);//��Ԫ����
     friend A operator-(A&,A&);
     friend A operator*(A&,A&);
     friend A operator/(A&,A&);
     friend A operator%(A&,A&);
    private:
     int data;
    };
    //��Ա��������ʽ
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
    //��Ԫ��������ʽ
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
    //Ȼ�����ǾͿ��Զ���Ķ������+��-��*��/�ˡ�
    void main(void)
    {
     A a1(1),a2(2),a3(3);
     a1=a2+a3;
     //����
     a1=a2.operator+(a3);
    }

ע�⣺�ڽ���a2+a3��ʱ��������Ϊ�����������+���������ַ�����ȥ��һ�ּ��ɡ�
2.��ϵ���������
��Ϊ������Ƚϼ򵥣������Ҿ�ֻ������Ա������ʽ�ĺ��������ˣ���ϵ�������==,!=,<,>,<=,>=��

    bool operator == (const A& );
    bool operator != (const A& );
    bool operator < (const A& );
    bool operator <= (const A& );
    bool operator > (const A& );
    bool operator >= (const A& );

3.�߼����������

    bool operator || (const A& );
    bool operator && (const A& );
    bool operator ! ();

4.��Ŀ���������

�����+��-����������˼�����ڶ���ǰ�档

    A& operator + ();
    A& operator - ();
    A* operator & ();
    A& operator * ();

5.���������������

++��--����λ�õĲ�ͬ��������������������ء�

    A& operator ++ ();//ǰ��++
    A operator ++ (int);//����++
    A& operator --();//ǰ��--
    A operator -- (int);//����--

6.λ���������

��λ������

    A operator | (const A& );
    A operator & (const A& );
    A operator ^ (const A& );
    A operator << (int i);
    A operator >> (int i);
    A operator ~ ();

7.��ֵ���������

û��=Ŷ��

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

8.�ڴ����������

    void *operator new(size_t size);
    void *operator new(size_t size, int i);
    void *operator new[](size_t size);
    void operator delete(void*p);
    void operator delete(void*p, int i, int j);
    void operator delete [](void* p);

9.�������������

�������������ض������ַ�ʽ��������������ֻ����һ�֣�����ɡ� ��Щ�����������ֻ���ǳ�Ա������

    A& operator = (const A& );
    char operator [] (int i);//����ֵ������Ϊ��ֵ
    const char* operator () ();
    T operator -> ();
    //����ת����
    operator char* () const;
    operator int ();
    operator const char () const;
    operator short int () const;
    operator long long () const;
    //���кܶ�Ͳ�д��

����Щֻ������Ԫ��������ʽ����

    friend inline ostream &operator << (ostream&, A&);//�����
    friend inline istream &operator >> (istream&, A&);//������

10.�ܽ�

�������ط�ʽ�ıȽϣ�

    һ������£���Ŀ������������Ϊ��ĳ�Ա������˫Ŀ��������������Ϊ�����Ԫ������
    ����һЩ˫Ŀ�������������Ϊ�����Ԫ������=��()��[]��->��
    ����ת������ֻ�ܶ���Ϊһ����ĳ�Ա���������ܶ���Ϊ�����Ԫ������ C++�ṩ4������ת��������reinterpret_cast���ڱ����ڼ�ʵ��ת������const_cast���ڱ����ڼ�ʵ��ת������stactic_cast���ڱ����ڼ�ʵ��ת������dynamic_cast���������ڼ�ʵ��ת���������Է���ת���ɹ����ı�־����
    ��һ��������Ĳ�����Ҫ�޸Ķ����״̬��ѡ������Ϊ��Ա�����Ϻá�
    �����������Ĳ������������ǵ�һ����������ϣ������ʽ����ת������ֻ��ѡ����Ԫ������
    �������������һ����Ա����ʱ������ߵĲ�����������ֻ������ߵĲ���������������������һ������󣨻����ǶԸ����������ã��������ߵĲ�����������һ����ͬ��Ķ��󣬻�����һ���ڲ� ���͵Ķ��󣬸����������������Ϊһ����Ԫ������ʵ�֡�
    ����Ҫ������������пɽ�����ʱ��ѡ������Ϊ��Ԫ������

ע�����

    ����������ϵ�����"."����Աָ�������".*"�������������"::"��sizeof���������Ŀ�����"?:"���⣬C++�е�������������������ء�
    ���������������C++���������е��������Χ�ڵ��������ص������֮�У����ܴ����µ��������
    ���������ʵ�����Ǻ������أ���˱���������������ص�ѡ����ѭ�������ص�ѡ��ԭ��
    ����֮�����������ܸı�����������ȼ��ͽ���ԣ�Ҳ���ܸı�������������ĸ������﷨�ṹ��
    ��������ز��ܸı������������ڲ����Ͷ���ĺ��塣��ֻ�ܺ��û��Զ������͵Ķ���һ��ʹ�ã����������û��Զ������͵Ķ�����ڲ����͵Ķ�����ʹ��ʱ��
    �����������������������ݵ�ʵ����Ҫ��ԭ����������е��ʵ��ĸ��죬���صĹ���Ӧ����ԭ�й��������ƣ�����û��Ŀ�ĵ�ʹ�������������

*/
