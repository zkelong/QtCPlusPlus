#ifndef ABSTRACTCONTAINER
#define ABSTRACTCONTAINER

//��׼��ͷ�ļ�
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <set>
//��׼C++֮ǰ��iostreamͷ�ļ�
#include <fstream>
//��׼Cͷ�ļ�
#include <stddef.h>
#include <ctype.h>

using namespace std;

//typedefsʹ��������
typedef pair<short, short> location;
//typedef vector<location, allocator> loc;
//typedef vector<string, allocator> text;
//typedef pair<text*, loc*> text_loc;

class TextQuery
{
   public:
//    TextQuery() {memset(this, 0, sizeof(TextQuery));}
    static void filter_elements(string felems) {filt_elems = felems;}
    void query_text();
//    void display_map_text();
//    void display_map_text();
    void display_text_loacations();
    void doit() {
        retrieve_text();
//        separete_words();
        filter_text();
        build_word_map();
    }
private:
    void retrieve_text();
    void separate_words();
    void filter_text();
    void strip_caps();
    void suffix_text();
    void suffix_s(string&);
    void build_word_map();
private:
//    vector<string, allocator> *lines_of_text;
//    text_loc *text_locations;
//    map<string, loc*, less<string>, allocator> *word_map;
    static string filt_elems;
};


void textQuery_test();
#endif // ABSTRACTCONTAINER

