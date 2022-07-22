#pragma once
#include "ASTNode.h"

class ReturnStatement : ASTNode
{
private:
    int value;
public:
    ReturnStatement(std::string name, int val);
    ~ReturnStatement();
};