#include <algorithm>
#include <iostream>
#include <inttypes.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

size_t bag_calories(std::vector<size_t> snack_bag)
{
    size_t sum = 0;
    for(size_t snack_calories: snack_bag)
    {
        sum += snack_calories;
    }
}

size_t get_max_calories(std::vector<std::vector<size_t>> snack_bags){
    size_t max_calories = 0;
    for(int i=0; i<snack_bags.size(); i++)
    {
        size_t sum = bag_calories(snack_bags[i]);
        if (sum > max_calories)
        {
            max_calories = sum;
        }
        
    }
    return max_calories;
}

std::vector<size_t> top_three(std::vector<size_t> bag)
{
    //sort
    std::sort(bag.s)
    //remove all but three from the lowest to the highest
    
}

int main()
{
    std::vector<std::vector<size_t>> snack_bags;
    snack_bags.push_back(std::vector<size_t>());
    std::ifstream list_file("input.txt");
    
    // read snack inventories from file
    bool next_bag = true;
    int bag_index = 0;
    while(list_file.good())
    {
        std::string line;
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
    
    size_t max_calories = get_max_calories(snack_bags);

    std::cout << std::to_string(max_calories) << std::endl;
    return 0;
}