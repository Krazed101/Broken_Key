#pragma once
#include"ASTNode.h"
#include"Body.h"
#include<vector>

class Function : ASTNode
{
private:
    std::vector<string> argument_tokens;
    Body bodyNode = Body("Default");

    bool CreateBody(std::vector<std::string> body);
public:
    Function(std::string name, std::vector<std::string> args, std::vector<std::string> body);
    ~Function();
};



