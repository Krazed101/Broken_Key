#include<iostream>
#include<list>
#include<fstream>
#include<sstream>
#include"broken-key.h"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> lexxer;

    if(argc != 2)
    {
        cout << "USAGE:\n\tbroken-key.exe <File-To-Compile>" << '\n';
        return 1;
    }
    //cout << "Herro!" << endl;
    lexxer = lex(argv[1]);

    if(lexxer.empty())
    {
        cout << "Uh-Oh Lex function failed" << '\n';
    }
    else
    {
        vector<string>::iterator it;
        for (it = lexxer.begin(); it != lexxer.end(); ++it)
        {
            cout << *it << '\n';
        }
    }

    return 0;
}

vector<string> lex(string fileName)
{
    vector<string> ret;
    string word;
    size_t location = string::npos;
    ifstream fileStream (fileName);
    if(fileStream.is_open())
    {
        while(fileStream >> word)
        {
            location = word.find_first_of("(){};");
            do
            {
                
                if( location != string::npos)
                {
                    if(location == 0)
                    {
                        ret.push_back(word.substr(location,1));
                        word = word.substr(location+1);
                    }
                    else
                    {
                        ret.push_back(word.substr(0,location));
                        ret.push_back(word.substr(location,1));
                        word = word.substr(location+1);
                    }
                }
                else
                {
                    ret.push_back(word);
                }
                location = word.find_first_of("(){};");
            }while(string::npos != location);
        }
        fileStream.close();
    }
    else
        cout << "Unable to open file" << '\n';

    return ret;
}
