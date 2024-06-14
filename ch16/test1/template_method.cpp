/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#include <string>
#include <iostream>

using std::cout, std::cin, std::endl;


template<typename T>
int compare(const T &left, const T &right) {
    if (left < right) {
        return -1;
    }
    if (right < left) {
        return 1;
    }
    return 0;

}

int main() {
    //use template method
    cout << compare<int>(1, 2) << endl;

}



