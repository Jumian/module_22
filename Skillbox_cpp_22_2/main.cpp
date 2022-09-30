#include <iostream>
#include "map"

std::string inputs(std::string prompt){
    std::string input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

void enque(std::map<std::string,int> &map, std::string new_val){
    std::map<std::string,int>::iterator find = map.find(new_val);
    if(find!=map.end()) find->second++;
    else map.insert(std::make_pair(new_val,1));
}
std::string deque(std::map<std::string,int> &map){
    std::map<std::string,int>::iterator find = map.begin();
    if(find!=map.end()) {
        --find->second;
        if (find->second==0)  map.erase(find);
        return find->first;
    }
    return "que is empty";
}

int main() {
    std::map<std::string,int> queMap;
    std::string command;
    do {
        command= inputs("<<");
        if (command == "Next")std::cout <<">>"<< deque(queMap) << std::endl;
        else enque(queMap,command);
    }while(command!="END");
}
