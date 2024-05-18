/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#include <iostream>
#include "ex7_53_2.h" 

using std::cout, std::endl;

int main()
{
    Debug debug = Debug(false,false,false);
    Debug* debug2 = new Debug(false,false,false);
    cout << std::boolalpha << debug.any() << endl;
    // cout << std::boolalpha << debug.err << endl;
    cout << std::boolalpha << debug2 -> any() << endl;
}
