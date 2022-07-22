
#include"Function.h"

Function::Function(std::string name, std::vector<std::string> args, std::vector<std::string> body) : ASTNode(name)
{
    argument_tokens = args;
    CreateBody(body);
}

Function::~Function()
{
    bodyNode.~Body();
}

 bool Function::CreateBody(std::vector<std::string> body)
 {
    return true;
 }