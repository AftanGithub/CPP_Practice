#include <stdio.h>
#include <stdlib.h>

// Function to multiply two polynomials
int* multiplyPolynomials(const int poly1[], int n, const int poly2[], int m) {
    int* result = (int*)malloc(sizeof(int) * (n + m - 1));
    for (int i = 0; i < n + m - 1; i++) {
        result[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(const int poly[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", poly[i]);
        } else {
            if (poly[i] >= 0) {
                printf(" + %dx^%d", poly[i], i);
            } else {
                printf(" - %dx^%d", -poly[i], i);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &n);
    int* poly1 = (int*)malloc(sizeof(int) * (n + 1));

    printf("Enter the coefficients of the first polynomial (from x^0 to x^%d): ", n);
    for (int i = 0; i <= n; i++) {
        scanf("%d", &poly1[i]);
    }

    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &m);
    int* poly2 = (int*)malloc(sizeof(int) * (m + 1));

    printf("Enter the coefficients of the second polynomial (from x^0 to x^%d): ", m);
    for (int i = 0; i <= m; i++) {
        scanf("%d", &poly2[i]);
    }

    int* result = multiplyPolynomials(poly1, n + 1, poly2, m + 1);

    printf("Resultant Polynomial after multiplication: ");
    displayPolynomial(result, n + m - 1);

    free(poly1);
    free(poly2);
    free(result);

    return 0;
}
