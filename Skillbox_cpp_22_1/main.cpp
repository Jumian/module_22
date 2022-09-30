#include <iostream>
#include "map"
#include "sstream"

std::string inputs(std::string prompt){
    std::string input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

bool withNumber(std::string &str){
    for(int i=0;i<str.size();++i) if (!str.empty()&&str[i]>='0'&&str[i]<='9') return true;
    return false;
}

void insert_pair(std::map<std::string, std::string> &map,std::string &number,std::string &name){
    std::pair<std::string,std::string> new_pair= std::make_pair(number, name);
    map.insert(new_pair);
}

void find_name(std::map<std::string, std::string> &map, std::string name,std::string &result){
    std::map<std::string, std::string>::iterator it;
    for (it=map.begin();it!=map.end();++it){
        if (it->second==name) break;
    }
    if (it!=map.end()) result="phone:"+it->first;
    else result="Not found";
}

void find_number(std::map<std::string, std::string> &map, std::string number,std::string &result){
    std::map<std::string, std::string>::iterator it;
    it= map.find(number);
    if (it!=map.end()) result="name:"+it->second;
    else result="Not found";
}

void print_list(std::map<std::string, std::string> &map){
    for(std::map<std::string, std::string>::iterator it =map.begin();
    it!=map.end();++it){
        std::cout<<"Phone: "<<it->first<<" Name: "<<it->second<<std::endl;
    }
}

void work(std::map<std::string, std::string> &map){
    std::string result;
    std::stringstream stream;
    std::string input1,input2;
    std::cout<<"Phone book. Input phone, name or pair of name and phone:"<<std::endl;
    do {
        input1=input2= result="";
        std::getline(std::cin,result);
        stream.clear();
        stream << result;
        stream >> input1;
        if (!input1.empty()) stream >>input2;
        else input1 = result;
        if (input2.empty() && withNumber(input1)){
            find_number(map, input1, result);
        }
        else if (input2.empty() && !withNumber(input1)) {
            find_name(map, input1, result);
        }
        else if (!input1.empty()&&!input2.empty()) {
            result="new line saved";
            insert_pair(map, input1, input2);
        }
        if(!result.empty()) std::cout << result <<std::endl;
    } while (!input1.empty()||!input2.empty());

}

int main() {
    std::map<std::string, std::string> phoneMap;
    work(phoneMap);
    print_list(phoneMap);
}
