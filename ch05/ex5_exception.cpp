#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using std::vector; using std::string; using std::cout; using std::endl; using std::cin; using std::runtime_error;

int main()
{


    int a[2] = {1, 2};


    cout << sizeof(a) << endl;
    cout << a[3] << endl; // c++ 原始数组不会越界报错，会去下一块内存

try
{
    throw runtime_error("Hi");
}
catch(runtime_error& e)
{
   cout << e.what() << "\n";
}
    
    return 0;
}
