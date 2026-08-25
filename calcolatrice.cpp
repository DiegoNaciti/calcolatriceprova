

#include <iostream>
using namespace std;


double somma(double a, double b);
double sottrazione(double a, double b);
double moltiplicazione(double a, double b);
double divisione(double a, double b);
double areaRettangolo(double base, double altezza);
double areaCerchio(double raggio);
void stampaMenu();          
int main() {
    int scelta;
    double x, y, risultato;

    stampaMenu();
    cout << "Scegli un'operazione (1-6): ";
    cin >> scelta;

    switch (scelta) {
        case 1:
            cout << "Inserisci due numeri: ";
            cin >> x >> y;
            risultato = somma(x, y);
            cout << "Risultato: " << risultato << endl;
            break;

        case 2:
            cout << "Inserisci due numeri: ";
            cin >> x >> y;
            risultato = sottrazione(x, y);
            cout << "Risultato: " << risultato << endl;
            break;

        case 3:
            cout << "Inserisci due numeri: ";
            cin >> x >> y;
            risultato = moltiplicazione(x, y);
            cout << "Risultato: " << risultato << endl;
            break;

        case 4:
            cout << "Inserisci due numeri (il secondo diverso da 0): ";
            cin >> x >> y;
            if (y == 0) {
                cout << "Errore: divisione per zero non consentita." << endl;
            } else {
                risultato = divisione(x, y);
                cout << "Risultato: " << risultato << endl;
            }
            break;

        case 5:
            cout << "Inserisci base e altezza del rettangolo: ";
            cin >> x >> y;
            risultato = areaRettangolo(x, y);
            cout << "Area del rettangolo: " << risultato << endl;
            break;

        case 6:
            cout << "Inserisci il raggio del cerchio: ";
            cin >> x;
            risultato = areaCerchio(x);
            cout << "Area del cerchio: " << risultato << endl;
            break;

        default:
            cout << "Scelta non valida." << endl;
    }

    return 0;
}


void stampaMenu() {
    cout << "===== CALCOLATRICE CON FUNZIONI =====" << endl;
    cout << "1. Somma" << endl;
    cout << "2. Sottrazione" << endl;
    cout << "3. Moltiplicazione" << endl;
    cout << "4. Divisione" << endl;
    cout << "5. Area del rettangolo" << endl;
    cout << "6. Area del cerchio" << endl;
}


double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    return a / b;
}

double areaRettangolo(double base, double altezza) {
    return base * altezza;
}

double areaCerchio(double raggio) {
    const double PI = 3.14159265;
    return PI * raggio * raggio;
}
