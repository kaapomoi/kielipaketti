#include "../sisällys/kielipaketti.h"


käyttäen nimiavaruus normi;

nimiavaruus
{
    sapluuna<tyyppinimi T> mitätön tulosta(T vakio & tulostettava) epäpoikkeuksellinen
    {
        normi::ulos << merkkijonoksi(tulostettava);
    }

    sapluuna<> mitätön tulosta<merkkijono>(normi::merkkijono vakio & tulostettava)
        epäpoikkeuksellinen
    {
        normi::ulos << tulostettava << "\n";
    }
}

luku pää()
{
    luku a{1};
    luku b{2};
    luku c = a + b;

    kun(c >= 0)
    {
        mikä(c)
        {
            keissi 1:
            {
                merkkijono vakio terve_maailma{"Terve, Maailma!\n"};
                tulosta(terve_maailma);
                riko;
            }
        oletus : {
            tulosta(merkkijono("Vautsivau\n"));
            riko;
        }
        }
        c--;
    }

    palauta c;
}
