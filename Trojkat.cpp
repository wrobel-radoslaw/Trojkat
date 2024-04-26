#include <iostream>

using namespace std;

int main()
{
    //Kod tworzący trójkąt prostokątny od lewej strony
    int rozmiarTrojkataL = 0;
    cout << "Podaj wymiary trojkata powstajacego od lewej krawedzi: ";
    cin >> rozmiarTrojkataL;

    for (int i = 0; i < rozmiarTrojkataL; i++)
    {
        for (int j = 0; j < rozmiarTrojkataL; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }

    //Trójkąt prostokątny, tym razem powstający od prawej strony
    int rozmiarTrojkataP = 0;
    cout << "Podaj rozmiar trojkata powstajacego od prawej krawedzi: \n";
    cin >> rozmiarTrojkataP;

    for (int i = 0; i < rozmiarTrojkataP; i++)
    {
        for (int j = rozmiarTrojkataP - 1; j >=0; j--)
        {
            if (j<=i)
            {
                cout << ("*");
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }


    return 0;
}