#include <iostream>
using namespace std;

class RekeningBank {
protected:
    int biayaAdmin = 15000;

public:
    virtual void potongAdmin() = 0;
};