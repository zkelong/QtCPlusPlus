#include "keywordsIntroduce.h"
#include <iostream>
#include <conio.h>

using namespace std;

//�ؼ��ֽ���
void cIntroduction()
{
    cout << "C����32���ؼ���" << endl;
    cout << "���ؼ��־����ѱ�C���Ա���ʹ�ã�������������;ʹ�õ��֡�����ؼ��ֲ����������������������� " << endl;
    cout << "����ANSI��׼�����C���Թؼ��ֹ�32����" << endl;
    cout << "����auto double int struct break else long switch" << endl;
    cout << "����case enum register typedef char extern return union" << endl;
    cout << "����const float short unsigned continue for signed void" << endl;
    cout << "����default goto sizeof volatile do if while static" << endl;
    cout << "�������ݹؼ��ֵ����ã����Խ��ؼ��ַ�Ϊ�������͹ؼ��ֺ����̿��ƹؼ��������ࡣ" << endl;
    cout << "��1 �������͹ؼ���" << endl;
    cout << "��A.�����������ͣ�5����" << endl;
    cout << "����void �����������޷���ֵ���޲���������������ָ�룬��ʽ����������" << endl;
    cout << "����char ���ַ����������ݣ������������ݵ�һ��" << endl;
    cout << "����int ���������ݣ�ͨ��Ϊ������ָ���Ļ����ֳ�" << endl;
    cout << "����float �������ȸ��������ݣ����ڸ������ݵ�һ��" << endl;
    cout << "����double ��˫���ȸ��������ݣ����ڸ������ݵ�һ��" << endl;
    cout << "��B .�������ιؼ��֣�4����" << endl;
    cout << "����short ������int�����������ݣ���ʡ�Ա����ε�int��" << endl;
    cout << "����long ������int�����������ݣ���ʡ�Ա����ε�int��" << endl;
    cout << "���ssigned �������������ݣ��з�����������" << endl;
    cout << "���uunsigned �������������ݣ��޷�����������" << endl;
    cout << "��C .�������͹ؼ��֣�5����" << endl;
    cout << "���sstruct ���ṹ������" << endl;
    cout << "���uunion ������������" << endl;
    cout << "���eenum ��ö������" << endl;
    cout << "���ttypedef ���������ͱ���" << endl;
    cout << "���ssizeof ���õ��ض����ͻ��ض����ͱ����Ĵ�С" << endl;
    cout << "��D .�洢����ؼ��֣�6����" << endl;
    cout << "���aauto ��ָ��Ϊ�Զ��������ɱ������Զ����估�ͷš�ͨ����ջ�Ϸ���" << endl;
    cout << "���sstatic ��ָ��Ϊ��̬�����������ھ�̬�����������κ���ʱ��ָ������������Ϊ�ļ��ڲ�" << endl;
    cout << "���rregister ��ָ��Ϊ�Ĵ�������������������������洢���Ĵ�����ʹ�ã�Ҳ�������κ����βΣ����������ͨ���Ĵ��������Ƕ�ջ���ݲ���" << endl;
    cout << "���eextern ��ָ����Ӧ����Ϊ�ⲿ����������ʾ�������ߺ����Ķ����ڱ���ļ��У���ʾ�����������˱����ͺ���ʱ������ģ����Ѱ���䶨�塣" << endl;
    cout << "���cconst ����volatile�ϳơ�cv���ԡ���ָ���������ɱ���ǰ�߳�/���̸ı䣨���п��ܱ�ϵͳ�������߳�/���̸ı䣩" << endl;
    cout << "���vvolatile ����const�ϳơ�cv���ԡ���ָ��������ֵ�п��ܻᱻϵͳ����������/�̸߳ı䣬ǿ�Ʊ�����ÿ�δ��ڴ���ȡ�øñ�����ֵ" << endl;
    cout << "��2 ���̿��ƹؼ���" << endl;
    cout << "��E .��ת�ṹ��4����" << endl;
    cout << "���rreturn �����ں������У������ض�ֵ��������voidֵ����������ֵ��" << endl;
    cout << "���ccontinue ��������ǰѭ������ʼ��һ��ѭ��" << endl;
    cout << "���bbreak ��������ǰѭ����switch�ṹ" << endl;
    cout << "���ggoto ����������ת���" << endl;
    cout << "��3 .��֧�ṹ��5����" << endl;
    cout << "��F .������䣬���治��Ҫ�ŷֺ�" << endl;
    cout << "���eelse ���������񶨷�֧����if���ã�" << endl;
    cout << "���switch ��������䣨���ط�֧��䣩" << endl;
    cout << "���ccase ����������еķ�֧���" << endl;
    cout << "���ddefault ����������еġ���������֧����ѡ��" << endl;
    cout << "��G .ѭ���ṹ��3����" << endl;
    cout << "���ffor��forѭ���ṹ��for(1;2;3)4;��ִ��˳��Ϊ1->2->4->3->2...ѭ��������2Ϊѭ��������" << endl;
    cout << "		������forѭ�������У����ʽ1ֻ����һ�Σ����ʽ2�ͱ��ʽ3����ܼ����Σ�Ҳ����һ��Ҳ�����㡣ѭ������ܶ��ִ�У�Ҳ����һ�ζ���ִ�С�" << endl;
    cout << "���ddo ��doѭ���ṹ��do 1 while(2); ��ִ��˳����1->2->1...ѭ����2Ϊѭ������" << endl;
    cout << "���wwhile ��whileѭ���ṹ��while(1) 2; ��ִ��˳����1->2->1...ѭ����1Ϊѭ������" << endl;
    cout << "		����ѭ����䣬��ѭ���������ʽΪ�������ѭ����Ϊ��������ѭ����" << endl;
}

void cPlusIntroduction() {
    cout << "C++98/03 �ؼ���" << endl;
    cout << "ISO C++98/03�ؼ��ֹ�63��:" << endl;
    cout << "	asm do if return typedef auto double inline short typeid" << endl;
    cout << "	bool dynamic_cast int signed typename break else long sizeof union" << endl;
    cout << "	case enum mutable static unsigned catch explicit namespace static_cast using " << endl;
    cout << "	char export new struct virtual class extern operator switch void " << endl;
    cout << "	const false private template volatile const_cast float protected this wchar_t" << endl;
    cout << "	continue for public throw while default friend register true delete" << endl;
    cout << "	goto reinterpret_cast try" << endl;

    cout << "C++11 �ؼ��ֹ�73����" << endl;
    cout << "�����ؼ��֣�alignas��alignof��char16_t��char32_t��constexpr��decltype��noexcept��nullptr\n��static_assert��thread_local��" << endl;
    cout << "auto ������ı䡣" << endl;
    cout << "register ����Ϊ��ʱ�ģ�������δ����׼�Ƴ�����" << endl;
    cout << "export ��Ϊʵ��֧��̫�٣���Edison Design Group��ǰ��֧�֣�������Ч�ʵ��£�ȡ��ԭ������\n�����ǹؼ��֣���ʹ�����ĳ����Ǵ���ģ�����Ϊ������δ����׼ʹ�á�" << endl;
}
