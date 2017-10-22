#ifndef CLUEREADER_HPP
#define CLUEREADER_HPP
#include "engine/json.hpp"
#include <string>
#include <vector>

struct Item {
    std::string name;
    std::string type;
};

class ClueReader {
public:
    void readFile(std::string file);
    void selectItems();
    void populateClues();
    Item itemHigh;
    Item itemLow;
    // std::vector<std::string> info;
    // std::vector<std::string> cluesSpec;
    // std::vector<std::string> cluesVague;

private:
    nlohmann::json j;
};

#endif
