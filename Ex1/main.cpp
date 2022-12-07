#include <algorithm>
#include <iostream>
#include <inttypes.h>
#include <fstream>
#include <string>
#include <sstream>
#include <elf.hpp>

int main()
{
    std::ifstream list_file("input.txt");
    std::vector<std::vector<size_t>> snack_bags;
    std::vector<Elf> elves;
    std::string line;
    
    // read snack inventories from file
    int bag_index = 0;
    while(list_file.good())
    {
        std::getline(list_file, line);
        if (!line.empty())
        {
            size_t snack;
            std::stringstream stream(line);
            stream >> snack;
            snack_bags[bag_index].push_back(snack);
        }
        else
        {
            snack_bags.push_back(std::vector<size_t>());
            bag_index++;
        }

    }

    // create elves with snack inventory
    for (int i = 0; i < snack_bags.size(); i++)
    {
        Elf elf = Elf(snack_bags[i]);
        elves.push_back(elf);
    }

    std::cout << 
    return 0;
}