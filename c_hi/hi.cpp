#include "hi.hpp"

void yingshaoxo() {
    printf("cpp: 'hi, yingshaoxo!'\n");
}

void take_a_bytes_string(const char text[]) {
    printf("%s\n", text);
}

void take_another_bytes_string(std::string text) {
    printf("%s\n", text.c_str());
}

void take_an_string_array(std::vector<std::string> text_array) {
    for(auto text: text_array){
        printf("%s\n", text.c_str());
    }
}

void take_an_int_array(std::vector<int> int_array){
    for(auto x: int_array){
        printf("%d\n", x);
    }
}

std::vector<std::vector<int>> split_int_array(std::vector<int> int_array){
    int s = int_array[0];
    std::vector<std::vector<int>> res;
    std::vector<int> tmp;
    for(auto x: int_array){
        if (s!=x){
            std::vector<int> tmp2(tmp);
            res.push_back(tmp2);
            tmp.clear();
        }
        s = x;
        tmp.push_back(x);
    }
    res.push_back(tmp);
    return res;
}
