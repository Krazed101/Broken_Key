#pragma once
#include"ASTNode.h"
#include<vector>

class Body : ASTNode
{
private:
    std::vector<std::string> body_tokens;
public:
    Body(std::string name, std::vector<std::string> body);
    Body(std::string name);
    ~Body();
};