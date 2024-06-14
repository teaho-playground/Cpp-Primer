/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#include <string>
#include <iostream>
#include "template_class.h"

using std::cout, std::cin, std::endl;

template<class T> A<T>::A() {
    cout << "construct" << endl;
}

template<class T> T A<T>::g(T a, T b) {
    return a + b;
}

int main() {

    A<std::string> a;

    cout << a.g("abc", "abc") << endl;


}