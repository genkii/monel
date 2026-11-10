#include "monel/interpreter/op_code.hpp"
#include "monel/interpreter/runtime.hpp"
#include <cstdint>

bool Runtime::step()
{
    std::uint8_t byte = read_byte();

    OpCode op_code = static_cast<OpCode>(byte);

    switch (op_code)
    {
    case OpCode::LDI:
    {
        std::uint8_t register_name = read_byte();
        std::uint64_t value = read_word();

        int_registers[register_name] = value;
        break;
    }

    case OpCode::HALT:
        return false;

    case OpCode::CLEAR:
    {
        std::uint8_t register_name = read_byte();
        int_registers[register_name] = 0;
        break;
    }

    default:
        return false;
    }
}