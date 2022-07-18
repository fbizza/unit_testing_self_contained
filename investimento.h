#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H
#include <string>
#include "contocorrente.h"
#include "transazione.h"

class Investimento : public Transazione {
public:

    Investimento(ContoCorrente &cc, int importo = 0, std::string azione = "MSFT") : contoCorrente(cc), Importo(importo), CodiceAzione(azione) {};

    void esegui() override;

    void annulla() override;

    void compraAzioni();

    void vendiAzioni();

    int getImporto() const {
        return Importo;
    }

    std::string getCodiceAzione() const {
        return CodiceAzione;
    }


private:
    int Importo;
    ContoCorrente &contoCorrente;
    std::string CodiceAzione;
};
#endif // INVESTIMENTO_H
