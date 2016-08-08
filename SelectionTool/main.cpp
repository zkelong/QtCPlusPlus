#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <vector>


using namespace std;
void Wchar_tToString(std::string& szDst, wchar_t *wchar);
string getExePath();
bool getConfig(string fileName);
void getConfigErro(string fileName);
void rest();
void order();
char* ltrim_lc(char* s);
char* rtrim_lc(char* s);
char* trim_lc(char* s);
void coutVector(vector<string> vec);
void business();
void waitRet();

vector<std::string> names;
vector<std::string> date;

int main()
{
    string configFileName = getExePath() + string("\\config.txt");
    if(!getConfig(configFileName)) {
        getConfigErro(configFileName);
        return 0;
    }
    business();
}

//��ȡ�����ļ�
bool getConfig(string fileName)
{
    ifstream in(fileName);
    string line;
    if(in) // �и��ļ�
    {
        bool isPeople = false;
        bool isDate = false;
        while (getline(in,line)) // line�в�����ÿ�еĻ��з�
        {
            char lines[100];
            strcpy(lines, line.c_str());    //.c_str() ���ص���const char*
            line = trim_lc(lines);  //ȥ����β�ո�
            if(line.length() < 1)   //����ҲҪ������
                continue;
            if(line.find("#people") == 0)
            {
                isPeople = true;
                isDate = false;
                continue;
            }
            else if(line.find("#date") == 0)
            {
                isPeople = false;
                isDate = true;
                continue;
            }
            if(isPeople)
            {
                names.push_back(line);
            }
            if(isDate)
            {
                date.push_back(line);
            }
        }
        in.close();
        if(names.size())
            return true;
    }
    return false;
}

//��ȡ�����ļ�����
void getConfigErro(string fileName)
{
    ofstream fout(fileName);
    if (fout) { // ��������ɹ�
        fout << "�ϸ��ո�ʽд!!!" << endl;
        fout << "#people //����д������һ��һ����" << endl << endl; // ʹ����coutͬ���ķ�ʽ����д��
        fout << "#date //����дʱ�䣨һ��һ����" << endl;
        fout.close();  // ִ���������ر��ļ����
    }
    cout << "����config.txt�ļ�����(����������)��" << endl;
    cout << "#people" << endl;
    cout << "����" << endl;
    cout << "����" << endl;

    cout << "..." << endl;
    cout << "#date" << endl;
    cout << "ʱ��" << endl;
    cout << "ʱ��" << endl;
    cout << "..." << endl;
    getch();
}

//ҵ��
void business()
{
    int mId;
    while(1) {
        system("cls");  //��������̨
        cin.clear(); //���std::cin�Ĵ���״̬
        cin.sync();  //������뻺����

        cout << "ѡ��" << endl;
        cout << "1.����" << endl;
        cout << "2.���" << endl;
        cout << "0.�˳�" << endl;
        while(cout << "����ѡ����룺", cin >> mId, !((mId >= 0 && mId < 5) || (mId == 99)) || cin.fail()) {
            cout << "ֵ����!" << endl;
            cin.clear(); //���std::cin�Ĵ���״̬
            cin.sync();  //������뻺����
        }
        if(mId != 0)
            system("cls");  //��������̨
        switch (mId) {
        case 1:
            rest();
            break;
        case 2:
            order();
            break;
        case 0:
            goto re;
            break;
        default:
            break;
        }
    }
re:;
}

void rest() //����
{
    cout << "�����ˣ�";
    coutVector(names);
    cout << "����ʱ�䣺";
    coutVector(date);
    if(names.size() > date.size())
    {
        cout << endl << "���棺����ʱ�䲻���֣�" << endl;
    }
    cout << endl << endl;
    cout << "���ݰ��ţ�" << endl;
    vector<string> nns = names;
    int max = nns.size();
    for(int i = 0; i < nns.size(); max--, i++)  //����
    {
        srand((unsigned)time(NULL));
        int index = rand() % max;
        string ex = nns[max-1];
        nns[max-1] = nns[index];
        nns[index] = ex;
        if(i < date.size())
        {
            cout << date[i] << ": " << nns[max-1] << endl;
        }
        else    //ʱ�䲻������
        {
            for(; max > 0; max--)
            {
                cout << "���ݣ�" << nns[max-1] << endl;
            }
            break;
        }
    }
    waitRet();
}

void order()    //���
{
    cout << "��������ѡ��";
    coutVector(names);
    cout << endl << "TA ���-> ";
    srand((unsigned)time(NULL));
    int index = rand() % names.size();
    cout << names[index] << endl;
    waitRet();
}

void waitRet()
{
    cout << endl << endl << "��0����" << endl;
    int ex;
    while(1) {
        cin >> ex;
        if(cin.fail()) {
            cin.clear();
            cin.sync();  //������뻺����
            continue;
        }
        if(ex == 0) {
            return;
        }
    }
}


//��ȡexe·��
string getExePath()
{
    TCHAR exeFullPath[MAX_PATH]; // Full path
    string strPath = "";
    GetModuleFileName(NULL,exeFullPath,MAX_PATH);
    Wchar_tToString(strPath, exeFullPath);
    int pos = strPath.find_last_of('\\', strPath.length()); //ȥ���ļ���
    return strPath.substr(0, pos);
}

//ת����
void Wchar_tToString(std::string& szDst, wchar_t *wchar)
{
    wchar_t * wText = wchar;
    DWORD dwNum = WideCharToMultiByte(CP_OEMCP,NULL,wText,-1,NULL,0,NULL,FALSE);// WideCharToMultiByte������
    char *psText; // psTextΪchar*����ʱ���飬��Ϊ��ֵ��std::string���м����
    psText = new char[dwNum];
    WideCharToMultiByte (CP_OEMCP,NULL,wText,-1,psText,dwNum,NULL,FALSE);// WideCharToMultiByte���ٴ�����
    szDst = psText;// std::string��ֵ
    delete []psText;// psText�����
}

//ȥ���ַ�����(��)�ո���
char* ltrim_lc(char* s)
{
    char* s_s = new char[strlen(s)+1];
    strcpy(s_s, s);
    char* s_rev = strrev(s_s);
    s_rev = rtrim_lc(s_rev);
    char* d_s = strrev(s_rev);
    return d_s;
}
//ȥ���ַ���β(��)�ո���
char* rtrim_lc(char* s)
{
    char* s_s=new char[strlen(s)+1];
    strcpy(s_s,s);
    //
    int s_len=strlen(s_s);
    for(int i = s_len-1; i>=0; i--)
    {
        if(s_s[i]==' ')
        {
            s_s[i]='\0';
        }
    }
    char* d_s = new char[strlen(s_s)];
    strcpy(d_s,s_s);
    return d_s;
}
//ȥ���ַ�����β�ո���
char* trim_lc(char* s)
{
    return ltrim_lc(rtrim_lc(s));
}


void coutVector(vector<string> vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "   ";
    }
    cout << endl;
}
