#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>

class Parser{
public:
    Parser();
    ~Parser();
    void print();
    void parse(std::string text);
};

#endif