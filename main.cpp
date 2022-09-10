#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hiányzik az "_" az NELEMENTS-ből
    std::cout << "1-100 ertekek duplazasa"<<std::endl; // string-eket " -al használjuk, nem pedig ' -el, illetve hiányzik a pontosvessző (;)
    for (int i = 0; i<N_ELEMENTS; i++) //hiányzó feltétel, lépésköz és a végén nincs pontosvessző (;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //nem elegendő feltétel (i<N_ELEMENTS)
    {
        std::cout << "Ertek: " <<b[i]<<std::endl; //kiírja hogy érték, de azt nem, hogy mi az az érték
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag=0; // az átlag nem egy egész szám (double)
    for (int i = 0; i < N_ELEMENTS; i++) // a második vessző helyére pontos vessző kell
    {
        atlag += b[i]; //hiányzó pontosvessző,
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Ready for pull request"<< std::endl;
    return 0;
}
