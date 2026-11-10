#include "monel/interpreter/op_code.hpp"
#include "monel/interpreter/runtime.hpp"
#include <cstdint>

bool Runtime::step()
{
    std::uint8_t byte = read_byte();

    OpCode op_code = op_code_from_u8(byte);

    switch (op_code)
    {
    case OpCode::LDI:
    {
        std::uint8_t target_register = read_byte();
        std::uint64_t value = read_word();

        int_registers[target_register] = value;
        break;
    }

    case OpCode::HALT:
        return false;

    case OpCode::CLEAR:
    {
        std::uint8_t target_register = read_byte();
        int_registers[target_register] = 0;
        break;
    }

    case OpCode::MOV:
    {
        std::uint8_t first_register = read_byte();
        std::uint8_t target_register = read_byte();

        std::uint64_t value = int_registers[first_register];
        int_registers[target_register] = value;
        break;
    }

    case OpCode::ADD:
    {
        std::uint8_t first_register = read_byte();
        std::uint8_t second_register = read_byte();

        std::uint64_t first_value = int_registers[first_register];
        std::uint64_t second_value = int_registers[second_register];

        int_registers[first_register] = (first_value + second_value);

        break;
    }

    case OpCode::SUB:
    {
        std::uint8_t first_register = read_byte();
        std::uint8_t second_register = read_byte();

        std::uint64_t first_value = int_registers[first_register];
        std::uint64_t second_value = int_registers[second_register];

        int_registers[first_register] = (first_value - second_value);

        break;
    }

    case OpCode::MUL:
    {
        std::uint8_t first_register = read_byte();
        std::uint8_t second_register = read_byte();

        std::uint64_t first_value = int_registers[first_register];
        std::uint64_t second_value = int_registers[second_register];

        int_registers[first_register] = (first_value * second_value);

        break;
    }

    case OpCode::DIV:
    {
        std::uint8_t first_register = read_byte();
        std::uint8_t second_register = read_byte();

        std::uint64_t first_value = int_registers[first_register];
        std::uint64_t second_value = int_registers[second_register];

        int_registers[first_register] = (first_value / second_value);

        break;
    }

    default:
        return false;
    }

    return true;
}