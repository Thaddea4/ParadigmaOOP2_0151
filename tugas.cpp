#include <iostream>
using namespace std;

class RekeningBank {
protected:
    int biayaAdmin = 15000;

public:
    virtual void potongAdmin() = 0;
};

class RekeningSyariah : public RekeningBank {
public:

    void potongAdmin() {
        cout << "Rekening Syariah tidak dikenakan biaya admin" << endl;
    }
};

class RekeningKonvensional : public RekeningBank {
public:

    void potongAdmin() {
        cout << "Rekening Konvensional terkena biaya admin Rp "
             << biayaAdmin << endl;
    }
};