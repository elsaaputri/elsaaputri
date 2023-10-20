#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Negatif";
    }
    else if (n % 2 == 0)
    {
        cout << "Positif Genap";
    }
    else
    {
        cout << "Positif Ganjil";
    }
}
