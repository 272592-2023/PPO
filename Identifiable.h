#include <string>

using namespace std;

class Identifiable {
    virtual string getType()=0;
    virtual string getId()=0;
};