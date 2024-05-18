
/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/

#ifndef ex7_53_h
#define ex7_53_h

class Debug {

private:
    bool rt;
    bool io;
    bool other;
    static bool err;

public:
    constexpr Debug(bool b) : rt(b), io(b), other(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), other(o) {}
    constexpr bool any() {return rt || io || other;}  

    void set_rt(bool b) {
        rt = b;
    }
};

#endif
