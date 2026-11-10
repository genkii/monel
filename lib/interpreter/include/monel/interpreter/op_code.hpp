#include <cstdint>

enum class OpCode : std::uint8_t
{
    LDI = 0x01,
    CLEAR = 0x02,
    MOV = 0x04,
    HALT = 0x03,
    ADD = 0x05,
    SUB = 0x06,
    DIV = 0x07,
    MUL = 0x08
};

OpCode op_code_from_u8(std::uint8_t number);