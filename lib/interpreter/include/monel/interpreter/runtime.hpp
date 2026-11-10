#include <array>
#include <cstdint>
#include <filesystem>
#include <vector>

class Runtime
{
  private:
    std::uint16_t pc = 0;
    std::vector<std::uint8_t> program;

    std::array<std::uint64_t, 16> int_registers;

    bool step();

    std::uint8_t read_byte();
    std::uint64_t read_word();

  public:
    Runtime(std::filesystem::path path);
    void run();
};
