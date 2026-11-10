#include "monel/interpreter/runtime.hpp"

void Runtime::run()
{
    while (true)
    {
        if (!this->step())
        {
            break;
        }
    }
}