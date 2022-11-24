#include <pybind11/pybind11.h>
#include "parser.h"

Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::print()
{
    std::cout << "Hello World!" << std::endl;
}

void Parser::parse(std::string text)
{
    std::cout << text << std::endl;
}

namespace py = pybind11;



PYBIND11_MODULE(parser, m) {
    m.doc() = "parse text-editor"; // optional module docstring

    py::class_<Parser>(m, "Parser")
        .def(py::init<>())
        .def("print", &Parser::print)
        .def("parse", &Parser::parse);
}

