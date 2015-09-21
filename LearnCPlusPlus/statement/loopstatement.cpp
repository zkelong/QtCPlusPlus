#include "loopstatement.h"
#include <stdio.h>

void loopsatetement()
{
    forStatement();
    whileStatement();
    doWhileStatement();
}

void forStatement()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
            continue;
        char str[10];
        sprintf(str, "%d", i);
        std::cout <<  "for statement " << str << std::endl;
    }
}

void whileStatement()
{
    int i = 11;
    while(i > 1)
    {
        i--;
        if(i == 5)
            continue;
        char str[10];
        sprintf(str, "%d", i);
        std::cout << "while statement " << str << std::endl;
    }
    std::cout << std::endl;
}

void doWhileStatement()
{
    int i = 0;
    do
    {
        i++;
        if(i == 5)
            continue;
        char str[10];
        sprintf(str, "%d", i);
        std::cout << "do while statement " << str << std::endl;
    } while(i < 10);
}
