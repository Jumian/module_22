#include <iostream>
#include "map"

std::string inputs(std::string prompt){
    std::string input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

void enque(std::map<char,int> &map, char chr){
    std::map<char,int>::iterator find = map.find(chr);
    if(find!=map.end()) find->second++;
    else map.insert(std::make_pair(chr,1));
}

bool deque(std::map<char,int> &map,char chr){
    std::map<char,int>::iterator find = map.find(chr);
    if(find!=map.end()) {
        --find->second;
        if (find->second==0)  map.erase(find);
        return true;
    }
    return false;
}


bool compare(std::string input1,std::string input2){
    std::map<char,int> characters;
    if(input1.size()!=input2.size()) return false;
    for(int i=0;i<input1.size();++i){
        enque(characters,input1[i]);
    }
    for(int i=0;i<input2.size();++i){
        if(!deque(characters,input2[i])) return false;
    }
    if (characters.empty()) return true;
    return false;
}

int main() {
    std::string input1 = inputs("1st string:"),
                input2 = inputs("2nd string:");
    if(input1.size()!=input2.size()) {
        std::cout << "Words sizes are not same" <<std::endl;
        return 0;
    } else if (input1==input2) {
        std::cout << "Words are same"<<std::endl;
    } else {
        std::cout << (compare(input1,input2)?"Anagram":"No Anagram") << std::endl;
    }
}
