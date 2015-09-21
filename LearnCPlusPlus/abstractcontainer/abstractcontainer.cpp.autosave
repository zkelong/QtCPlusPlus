#include "abstractcontainer.h"

string TextQuery::filt_elems("\",.;:!<<)(\\/");

int textQuery_test()
{
    TextQuery tq;
    tq.doit();
    tq.query_text();
    tq.display_map_text();
}

//检索
void TextQuery::retrieve_text()
{
    string file_name;
    cout << "please enter file name: ";
    cin >> file_name;
    ifstream infile(file_name.c_str(), ios::in);
    if(!infile)
    {
        cerr << "oops! unable to open file"
             << file_name << " --bailing out!\n";
        exit(-1);
    }
    else cout << "\n";
    lines_of_text = new vector<string ,allocator>;
    string textline;
    while(getline(jinfile, textline, '\n'))
        lines_of_text -> push_back(textline);
}

void TextQuery::separate_words()
{
    vector<string, allocator> *words = new vector<string, allocator>;
    vector<location, allocator> *locations = new vector<location, allocator>;

    for(short line_pos = 0; line_pos < lines_of_text->size(); line_pos++)
    {
        short word_pos = 0;
        string textline = (*lines_of_text)[line_pos];
        string::size_type eol = textline.length();
        string::size_type pos = 0, prev_pos = 0;
        while((pos = textline.find_first_of(' ', pos)) != string::npos)
        {
            wordds->push_back(textline.substr(prev_pos, pos - prev_pos));
            locatons->push_back(make_pair(line_pos, word_pos));
            word_pos++;
            pos++;
            prev_pos = pos;
        }
        words->push_back(textline.substr(prev_pos, pos - prev_pos));
        locations->push_back(make_pair(line_pos, word_pos));
    }
    text_locatons = new text_loc(words, locations);
}

void TextQuery::filter_text()
{
    if(filt_elems.empty())
        return;
    vector<string, allocator> *words = text_locations->first;
    vector<string, allocator>::iterator iter = words->begin();
    vector<string, allocator>::iterator iter_end = words->end();

    while(iter != iter_end)
    {
        string::size_type pos = 0;
        while((pos = (*iter).find_firs_of(filt_elems, pos)) != string::npos)
            (*iter).erase(pos,1);
        ++iter;
    }
}

void TextQuery::suffix_text()
{
    vector<string, allocator> *words = text_locations->first;
    vector<string, allocator>::iterator iter = words->begin();
    vecotr<string, allocator>::iterator iter_end = words->end();
    while(iter != iter_end)
    {
        if((*iter).size() <=3)
        {
            iter++; continue;
        }
        if((*iter[(*iter).size()-1]) == 's')
            suffix_s(*iter);
        //其他后缀处理放在这里
        iter++;
    }
}


void TextQuery::suffix_s(string &word)
{
    string::size_type spos = 0;
    string::size_type pos3 = word.size() - 3;
    //"ous", "ss", "is", "ius"
    string suffixes("oussisius");
    if(!word.compare(pos3, 3, suffixes, spos, 3) ||
       !word.compare(pos3, 3, suffixes, spos+6, 3) ||
       !word.compare(pos3+1, 2, suffixes, spos+2, 2) ||
       !word.compare(pos3+1, 2, suffixes, spos+4, 2))
        return;
    string ies("ies");
    if(!word.compare(pos3, 3, ies))
    {
        word.replace(pos3, 3, 1, 'y');
        return;
    }
    string ses("ses");
    if(!word.compare(pos,3,ses))
    {
        word.erase(pos3+2);
        return;
    }
    //去掉尾部的's'
    word.erase(pos3+2);
    //watch out for "s"
    if(word[pos3+1] == '\'')
        word.erase(pos3+1);
}
