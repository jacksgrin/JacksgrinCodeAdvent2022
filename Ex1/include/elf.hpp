#include <vector>

class Elf
{
public:
    Elf(std::vector<size_t>);
    
    ~Elf();

    size_t get_calorie_total();
private:
    std::vector<std::size_t> _snacks;
}