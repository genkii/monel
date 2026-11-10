#include "monel/interpreter/runtime.hpp"
#include <cstdint>

std::uint64_t Runtime::read_word()
{

    std::uint64_t result = 0;

    for (int i = 0; i < 8; ++i)
    {
        result = (result << 8) | read_byte();
    }

    return result;
}