/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#ifndef CP5_ex13_27_h
#define CP5_ex13_27_h

#include <string>

class HasPtr {

    public:
        HasPtr(const std::string &s = std::string()) : ps(new std::string()),i(0),use(new size_t(1)) {}


    private:
        std::string *ps;
        int i;
        size_t *use;

};
#endif
