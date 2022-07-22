#include"Body.h"


Body::Body(std::string name, std::vector<std::string> body) : ASTNode(name)
{
    body_tokens = body;
}

Body::Body(std::string name) : ASTNode(name)
{
    
}

Body::~Body()
{

}