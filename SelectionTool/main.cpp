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

//读取配置文件
bool getConfig(string fileName)
{
    ifstream in(fileName);
    string line;
    if(in) // 有该文件
    {
        bool isPeople = false;
        bool isDate = false;
        while (getline(in,line)) // line中不包括每行的换行符
        {
            char lines[100];
            strcpy(lines, line.c_str());    //.c_str() 返回的是const char*
            line = trim_lc(lines);  //去掉首尾空格
            if(line.length() < 1)   //空行也要读出来
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

//读取配置文件有误
void getConfigErro(string fileName)
{
    ofstream fout(fileName);
    if (fout) { // 如果创建成功
        fout << "严格按照格式写!!!" << endl;
        fout << "#people //下面写人名（一行一个）" << endl << endl; // 使用与cout同样的方式进行写入
        fout << "#date //下面写时间（一行一个）" << endl;
        fout.close();  // 执行完操作后关闭文件句柄
    }
    cout << "配置config.txt文件内容(并重启程序)：" << endl;
    cout << "#people" << endl;
    cout << "人名" << endl;
    cout << "人名" << endl;

    cout << "..." << endl;
    cout << "#date" << endl;
    cout << "时间" << endl;
    cout << "时间" << endl;
    cout << "..." << endl;
    getch();
}

//业务
void business()
{
    int mId;
    while(1) {
        system("cls");  //清屏控制台
        cin.clear(); //清除std::cin的错误状态
        cin.sync();  //清空输入缓冲区

        cout << "选择" << endl;
        cout << "1.轮休" << endl;
        cout << "2.点餐" << endl;
        cout << "0.退出" << endl;
        while(cout << "输入选项进入：", cin >> mId, !((mId >= 0 && mId < 5) || (mId == 99)) || cin.fail()) {
            cout << "值不对!" << endl;
            cin.clear(); //清除std::cin的错误状态
            cin.sync();  //清空输入缓冲区
        }
        if(mId != 0)
            system("cls");  //清屏控制台
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

void rest() //轮休
{
    cout << "轮休人：";
    coutVector(names);
    cout << "轮休时间：";
    coutVector(date);
    if(names.size() > date.size())
    {
        cout << endl << "警告：轮休时间不够分！" << endl;
    }
    cout << endl << endl;
    cout << "轮休安排：" << endl;
    vector<string> nns = names;
    int max = nns.size();
    for(int i = 0; i < nns.size(); max--, i++)  //排序
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
        else    //时间不够分了
        {
            for(; max > 0; max--)
            {
                cout << "无休：" << nns[max-1] << endl;
            }
            break;
        }
    }
    waitRet();
}

void order()    //点餐
{
    cout << "参与点餐人选：";
    coutVector(names);
    cout << endl << "TA 点餐-> ";
    srand((unsigned)time(NULL));
    int index = rand() % names.size();
    cout << names[index] << endl;
    waitRet();
}

void waitRet()
{
    cout << endl << endl << "按0返回" << endl;
    int ex;
    while(1) {
        cin >> ex;
        if(cin.fail()) {
            cin.clear();
            cin.sync();  //清空输入缓冲区
            continue;
        }
        if(ex == 0) {
            return;
        }
    }
}


//获取exe路径
string getExePath()
{
    TCHAR exeFullPath[MAX_PATH]; // Full path
    string strPath = "";
    GetModuleFileName(NULL,exeFullPath,MAX_PATH);
    Wchar_tToString(strPath, exeFullPath);
    int pos = strPath.find_last_of('\\', strPath.length()); //去掉文件名
    return strPath.substr(0, pos);
}

//转类型
void Wchar_tToString(std::string& szDst, wchar_t *wchar)
{
    wchar_t * wText = wchar;
    DWORD dwNum = WideCharToMultiByte(CP_OEMCP,NULL,wText,-1,NULL,0,NULL,FALSE);// WideCharToMultiByte的运用
    char *psText; // psText为char*的临时数组，作为赋值给std::string的中间变量
    psText = new char[dwNum];
    WideCharToMultiByte (CP_OEMCP,NULL,wText,-1,psText,dwNum,NULL,FALSE);// WideCharToMultiByte的再次运用
    szDst = psText;// std::string赋值
    delete []psText;// psText的清除
}

//去掉字符串首(左)空格函数
char* ltrim_lc(char* s)
{
    char* s_s = new char[strlen(s)+1];
    strcpy(s_s, s);
    char* s_rev = strrev(s_s);
    s_rev = rtrim_lc(s_rev);
    char* d_s = strrev(s_rev);
    return d_s;
}
//去掉字符串尾(右)空格函数
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
//去掉字符串首尾空格函数
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
