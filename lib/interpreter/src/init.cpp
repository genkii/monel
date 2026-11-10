#include "monel/interpreter/runtime.hpp"
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <vector>

Runtime::Runtime(std::filesystem::path path)
{
    std::ifstream file(path);

    for (auto i = 0; i < 16; i++)
    {
        int_registers[i] = 0;
    }

    program = {std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
}