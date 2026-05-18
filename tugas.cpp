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
class RekeningPremium : public RekeningBank {
private:
    int saldoAkhir;

public:
    RekeningPremium(int saldo) : saldoAkhir(saldo) {

    }

    void potongAdmin() {
        if (saldoAkhir > 10000000) {
            cout << "Rekening Premium bebas biaya admin" << endl;
        }
        else {
            cout << "Rekening Premium terkena biaya admin Rp 50000" << endl;
        }
    }
};

int main() {

    RekeningBank* rekening1;
    RekeningBank* rekening2;
    RekeningBank* rekening3;

    rekening1 = new RekeningSyariah();
    rekening2 = new RekeningKonvensional();
    rekening3 = new RekeningPremium(8000000);

    rekening1->potongAdmin();

    cout << "====================" << endl;

    rekening2->potongAdmin();

    cout << "====================" << endl;

    rekening3->potongAdmin();

    return 0;
}