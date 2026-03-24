#include <stdio.h>

int is_leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // Artık yıl
            } else {
                return 0; // Artık yıl değil
            }
        } else {
            return 1; // Artık yıl
        }
    } else {
        return 0; // Artık yıl değil
    }
}


int days_in_year(int year) {
    if (is_leap_year(year)) {
        return 366; // Artık yıl
    } else {
        return 365; // Normal yıl
    }
}


int between_years(int start_year, int end_year) {
    int total_days = 0;
    for (int year = start_year; year <= end_year; year++) {
        total_days += days_in_year(year);
    }
    return total_days;
}


int between_years_weeks(int start_year, int end_year) {
    return between_years(start_year, end_year) / 7;
}

int between_years_months(int start_year, int end_year) {
    return between_years(start_year, end_year) / 30; 
}

int weeks_in_year(int year) {
    return days_in_year(year) / 7;
}

int main() {
    int year;

    printf("Yıl girin: ");
    scanf("%d", &year);

    printf("%d yılı %d gün içerir.\n", year, days_in_year(year));
    printf("%d yılı %d hafta içerir.\n", year, weeks_in_year(year));

    int start_year, end_year;
    printf("Başlangıç yılını girin: ");
    scanf("%d", &start_year);
    printf("Bitiş yılını girin: ");
    scanf("%d", &end_year);
    printf("%d ile %d arasındaki yıllar toplam %d gün içerir.\n", start_year, end_year, between_years(start_year, end_year));


    return 0;
}

