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
using Set = std::set<std::string>;

int main()
{   
    //set 

    string word;
    Set setStr;
    
    while (cin >> word) {
        setStr.insert(word);
    } 

    for (const auto &s : setStr) {
        cout << s << endl;
    }



    return 0;
}
