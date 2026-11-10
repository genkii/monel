#include "monel/interpreter/runtime.hpp"
#include <filesystem>

int main()
{

    Runtime runtime = Runtime{std::filesystem::path()};
    runtime.run();

    return 0;
}