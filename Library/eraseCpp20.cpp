// eraseCpp20.cpp

#include <iostream>
#include <numeric>
#include <deque>
#include <list>
#include <string>
#include <vector>
#include <experimental/deque>
#include <experimental/forward_list>
#include <experimental/list>
#include <experimental/map>
#include <experimental/set>
#include <experimental/string>
#include <experimental/unordered_map>
#include <experimental/unordered_set>
#include <experimental/vector>

template <typename Cont>                                        
void eraseVal(Cont& cont, int val) {
    std::experimental::erase(cont, val);
}

template <typename Cont, typename Pred>                         
void erasePredicate(Cont& cont, Pred pred) {
    std::experimental::erase_if(cont, pred);
}

template <typename Cont>
void printContainer(Cont& cont) {
    for (auto c: cont) std::cout << c << " ";
    std::cout << '\n';
}

template <typename Cont>                                         
void doAll(Cont& cont) {
    printContainer(cont);
    eraseVal(cont, 5);
    printContainer(cont);
    erasePredicate(cont, [](auto i) { return i >= 3; } );
    printContainer(cont);
}

int main() {

    std::cout << '\n';
    
    std::string str{"A Sentence with an E."};
    std::cout << "str: " << str << '\n';
    std::experimental::erase(str, 'e');
    std::cout << "str: " << str << '\n';
    std::experimental::erase_if( str, [](char c){ return std::isupper(c); });
    std::cout << "str: " << str << '\n';
    
    std::cout << "\nstd::vector " << '\n';
    std::vector vec{1, 2, 3, 4, 5, 6, 7, 8, 9};                 
    doAll(vec);
    
    std::cout << "\nstd::deque " << '\n';
    std::deque deq{1, 2, 3, 4, 5, 6, 7, 8, 9};                   
    doAll(deq);
    
    std::cout << "\nstd::list" << '\n';
    std::list lst{1, 2, 3, 4, 5, 6, 7, 8, 9};                    
    doAll(lst);
    
}