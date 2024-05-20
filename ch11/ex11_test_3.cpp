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
// using Set = std::set<std::string>;
using std::multiset;

int main()
{   
    
    multiset<int> iset;

    iset.insert(1);
    iset.insert(2);
    iset.insert(3);
    iset.insert(3);
    iset.insert(3);
    iset.insert(3);


    cout << iset.size() << endl;

    
    multiset<int>::iterator iter;

    for (iter = iset.begin(); iter != iset.end(); ++iter) {
        cout << *iter << endl;
    }


    auto i = iset.find(3);
    cout << "hello" <<  std::distance(iset.begin(), i) << endl;
    
    return 0;
}
