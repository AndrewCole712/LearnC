#include <iostream>
#include <vector>
#include <map>

typedef struct {
    std::vector<int> blah; 
    std::map<std::string, int> blah2;

} crazy_boject;

void beta(const crazy_boject &c) {
    // c.blah = std::vector<int>(100);
    // c.blah[50] = 69;
}

int main() {

    crazy_boject obj;
    // std::cout << obj.blah[50] << std::endl;
    beta(obj);
    // std::cout << obj.blah[50] << std::endl;



}