#include <stdio.h>
#include <math.h>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центрів та радіуси двох кіл (x1 y1 r1 x2 y2 r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d == 0 && r1 == r2) {
        // Безкінечно багато точок перетину
        printf("-1\n");
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        // Немає точок перетину
        printf("0\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        // Одна точка перетину
        printf("1\n");
    } else {
        // Дві точки перетину
        printf("2\n");
    }

    return 0;
}
