#include "infra/util/BoundedVector.hpp"

struct Test
{
    infra::BoundedVector<std::uint8_t>::WithMaxSize<10> numbers;
};
