/**
 * @author teaho2015@gmail.com
 * @date 2024-05
*/
#include "ex12_32.h"
#include <sstream>
#include <algorithm>

TextQuery::TextQuery(std::ifstream &ifs)
{


}

QueryResult TextQuery::query(const string& str) const
{


}

std::ostream& print(std::ostream &out, const QueryResult& qr) {

    out << qr.word << " occurs " << qr.nos-> size() << (qr.nos->size() > 1 ? " times": " time") << std::endl;

    return out;
}
