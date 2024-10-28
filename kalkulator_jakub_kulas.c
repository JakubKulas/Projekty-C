#include<math.h>
#include<stdio.h>

#define PI 3.14

int main() {

    printf("========Kalkulator=========\n 1.Dodawanie\n 2.Odejmowanie\n 3.Mnozenie\n 4.Dzielenie\n 5.Pierwiastek kwadratowy\n 6.Potengowanie\n 7.Wartosc bezwzgledna\n 8.Funkcje trygonometryczne (sin, cos, tg, ctg)\n =================================\n");

    float a, b, degrees, radians, sine, cosine, tangent, cotangent;
    int d;
    printf("Wybierz opcje: ");
    scanf_s("%d", &d);
    if (d <= 4 || d == 6) {
        printf("Podaj liczbe : ");
        scanf_s("%f", &a);
        printf("Podaj liczbe : ");
        scanf_s("%f", &b);

        switch (d)
        {
        case 1: printf("Wynik dodawania: %f", a + b);
            break;
        case 2: printf("Wynik odejmowania: %f", a - b);
            break;
        case 3: printf("Wynik mnozenia: %f", a * b);
            break;
        case 4: printf("Wynik dzielenia: %f", a / b);
            break;
        case 6: printf("Wynika potengowania: %f", pow(a, b));
            break;
        default:
            break;
        }
    }
    else if (d > 4 && d != 6) {
        switch (d)
        {
        case 5:
            printf("Podaj liczbe : ");
            scanf_s("%f", &b);
            printf("Wynik pierwiastka: %f", sqrt(b));
            break;
        case 7:
            printf("Podaj liczbe : ");
            scanf_s("%f", &b);
            printf("wartosc bezwzgledna: %f", fabs(b));
            break;
        case 8:
            printf("Podaj kat w stopniach: ");
            scanf_s("%f", &degrees);
            radians = degrees * (PI / 180.0);
            cosine = cos(radians);
            sine = sin(radians);
            if (cosine != 0) {
                tangent = tan(radians);
                cotangent = 1.0 / tangent;
            }
            else {
                tangent = cotangent = NAN;
            }
            printf("sin(%.2f°) = %.4f\n", degrees, sine);
            printf("cos(%.2f°) = %.4f\n", degrees, cosine);
            if (!isnan(tangent)) {
                printf("tg(%.2f°) = %.4f\n", degrees, tangent);
                printf("ctg(%.2f°) = %.4f\n", degrees, cotangent);
            }
            else {
                printf("Tangens i cotangens s¹ nieokreœlone dla k¹ta %.2f°\n", degrees);
            }
            break;
        default:
            break;
        }

    }
    else
    {
        return 0;
    }
}