#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin >> cadena; Lee hasta un espacio o \n
    getline(cin, cadena); //lee hasta el \n
    cout << cadena.size();

    return 0;
}