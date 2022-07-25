
#ifndef CONTO_CORRENTE_VERSAMENTO_H
#define CONTO_CORRENTE_VERSAMENTO_H

#include "transazione.h"
#include "contocorrente.h"
class ContoCorrente;

class Versamento : public Transazione {
public:
    Versamento(ContoCorrente &cc, int importo = 0) : Transazione(importo), contoCorrente(cc) {};

    void esegui() override;

    void annulla() override;

    Versamento& operator=(const Versamento& v) {
        return *this;
    }

private:
    ContoCorrente &contoCorrente;
};

#endif //CONTO_CORRENTE_VERSAMENTO_H
