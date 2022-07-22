
#pragma once
#include <string>

using namespace std;

class ASTNode
{
private:
    string name_token;
public:
    ASTNode(string name);
    ~ASTNode();
};
