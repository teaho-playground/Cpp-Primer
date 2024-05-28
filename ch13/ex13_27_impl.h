/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#ifndef CP5_ex13_27_h
#define CP5_ex13_27_h

#include <string>

class HasPtr {

    public:
        HasPtr(const std::string &s = std::string()) : ps(new std::string(s)),i(0),use(new size_t(1)) {}
        HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i), use(hp.use) {}

        HasPtr& operator=(const HasPtr &hs) {
            ++*hs.use;
            if (--*use == 0) {
                delete ps;
                delete use;
            }
            ps = hs.ps;
            i = hs.i;
            use = hs.use;
            return *this;
            

        }

        ~HasPtr() {
            if(--*use == 0) {
                delete ps;
                delete use;
            }
        }

        auto getPs() {
            return *ps;
        }

    private:
        std::string *ps;
        int i;
        size_t *use;

};
#endif
