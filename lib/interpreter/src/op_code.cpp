#include "monel/interpreter/op_code.hpp"
#include <cstdint>

OpCode op_code_from_u8(std::uint8_t number)
{
    OpCode opcode = static_cast<OpCode>(number);
    return opcode;
}