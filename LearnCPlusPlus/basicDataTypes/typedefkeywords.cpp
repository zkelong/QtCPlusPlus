#include "typedefkeywords.h"
#include <vector>

typedef double wages;
typedef std::vector<int> vec_int;

void typedef_type()
{
    typedef_define();
}

void typedef_define()
{
    wages td = 1.001;
    std::cout << td << std::endl;
    vec_int ivec(10, 4);
    if(!ivec.empty())
    {
        for(int i = 0; i < ivec.size(); i++)
        {
            std::cout << ivec[i] << "  ";
        }
        std::cout << std::endl;
    }
}

