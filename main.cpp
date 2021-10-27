#include <iostream>
#include "nlohmann/json.hpp"
#include <map>
#include <fstream>

struct Film
{
    std::string name;
    std::map<std::string, std::string> actors;
    int year;
    std::string country;
    std::string studio;
    std::string director;
    std::string screenwriter;
    std::string producer;
};

int main() {

    const std::string INPUT_PATH = "..\\films.json";
    std::cout << "Reading film data...\n";
    std::cout << "Opening file...\n";
    std::ifstream file(INPUT_PATH);

    nlohmann::json filmsDictionary;
    if (file.is_open())
    {
        std::cout << "Reading from JSON file [" << INPUT_PATH << "]...\n";
        file >> filmsDictionary;
        std::cout << "Reading is finished.\n";
        file.close();
        std::cout << "File is closed.\n";
    }

    std::cout << filmsDictionary["What We Do in the Shadows"]["actors"] << "\n";
    std::cout << filmsDictionary["Thor: Ragnarok"]["actors"] << "\n";

    return 0;
}
