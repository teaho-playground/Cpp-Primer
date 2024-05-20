
/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cctype>

using std::string;
using std::cin, std::cout, std::endl;
using std::remove_if;
using Map = std::map<std::string, std::size_t>;
using Set = std::set<std::string>;

int main()
{   
    //map 

    Map word_count;

    string word;
    while (cin >> word) {
        ++word_count[word];
    }
    for(const auto &w : word_count) {
        cout << w.first << ", count: " << w.second << endl;
    }
    return 0;
}
