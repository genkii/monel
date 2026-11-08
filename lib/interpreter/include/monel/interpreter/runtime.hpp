#include <cstdint>

class Runtime
{
  private:
    std::uint16_t pc;

  public:
    void step();
};
