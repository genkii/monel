#include <cstdint>
#include <monel/interpreter/runtime.hpp>

std::uint8_t Runtime::read_byte()
{
    std::uint8_t byte = program[pc];

    pc += 1;

    return byte;
}