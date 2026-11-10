#include <cstdint>

enum class OpCode : std::uint8_t
{
    LDI = 0x01,
    CLEAR = 0x02,
    HALT = 0x03,
};