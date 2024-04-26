#include <iostream>

using namespace std;

int main()
{
    //Kod tworzący trójkąt prostokątny
    int rozmiarTrojkata = 0;
    cout << "Podaj wymiary trojkata: ";
    cin >> rozmiarTrojkata;

    for (int i = 0; i < rozmiarTrojkata; i++)
    {
        for (int j = 0; j < rozmiarTrojkata; j++)
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

    return 0;
}