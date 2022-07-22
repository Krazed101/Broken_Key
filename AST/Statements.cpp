#include"Statements.h"

ReturnStatement::ReturnStatement(std::string name, int val) : ASTNode(name)
{
    value = val;
}

ReturnStatement::~ReturnStatement()
{

}