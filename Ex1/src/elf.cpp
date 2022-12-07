#include <elf.hpp>

Elf::Elf(std::vector<size_t> snacks) :
    _snacks(snacks)
{}

size_t Elf::get_calorie_total()
{
    size_t sum = 0;
    
    for(size_t snack: _snacks)
    {
        sum += snack;
    }    
    
    return sum;
}