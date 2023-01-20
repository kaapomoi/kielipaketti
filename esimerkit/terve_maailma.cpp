#include "../sisällys/kielipaketti.h"


käyttäen nimiavaruus normi;

nimiavaruus
{
    sapluuna<tyyppinimi T> mitätön tulosta(T vakio & tulostettava) epäpoikkeuksellinen
    {
        ulos << normi::merkkijonoksi(tulostettava) << "\n";
    }

    sapluuna<> mitätön tulosta<merkkijono>(normi::merkkijono vakio & tulostettava)
        epäpoikkeuksellinen
    {
        normi::ulos << tulostettava << "\n";
    }
}

luokka Avaruusalus
{
julkinen:
    Avaruusalus(merkkijono vakio & nimi) epäpoikkeuksellinen : m_nimi(nimi) {}

    mitätön aja(liuku vakio matka) epäpoikkeuksellinen
    {
        ulos << m_nimi << "::Sit mentiin\n";
        m_kuljettu_matka += matka;
    }

    luku ajettu_matka() epäpoikkeuksellinen { palauta m_kuljettu_matka / 1; }

yksityinen:
    merkkijono const m_nimi;
    liuku m_kuljettu_matka{0.0f};
};

staattinen vakioekspr tupla nopeus{1.56};

luku pää()
{
    luku valmisteluaika{2};
    luku aikataulun_säätövara{1};
    luku lähtölaskenta{valmisteluaika + aikataulun_säätövara};

    tupla vakio aika{3};

    Avaruusalus alus{"Rakettispagetti"};

    kun(lähtölaskenta >= 0)
    {
        jos(lähtölaskenta == 2) { ulos << "Joo...kohta mennään\n"; }
        muuten
        {
            mikä(lähtölaskenta)
            {
                keissi 0:
                {
                    merkkijono vakio terve_maailma{"Tervemenoa, maailma!"};
                    tulosta(terve_maailma);
                    riko;
                }
                keissi 1:
                {
                    alus.aja(nopeus * aika);
                    riko;
                }
            oletus : {
                tulosta(merkkijono("Vautsivau"));
                riko;
            }
            }
        }
        lähtölaskenta--;
    }

    palauta alus.ajettu_matka();
}
