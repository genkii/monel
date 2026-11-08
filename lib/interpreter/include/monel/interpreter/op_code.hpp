#include <cstdint>

enum class OpCode : std::uint8_t
{
    LDI = 0x01,
    HALT = 0x02,
};