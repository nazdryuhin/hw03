#include <map>
#include <iostream>

int main() {
    std::map <int, int> factorial;
    factorial[0] = 1;
    for(int i = 1; i < 10; ++i) {
        factorial[i] = factorial[i-1]*i;
    }
    for(const auto& f : factorial) {    
        std::cout << f.first << ' ' << f.second << '\n' ;
    }
    return 0;
}
