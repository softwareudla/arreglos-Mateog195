#include <stdio.h>

int main (int argc, char *argv[]) {
    float calificaciones[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            
        printf("Introduce la calificación del estudiante %d para la asignatura %d (0 a 10)----->: ", i + 1, j + 1);  
        scanf("%f", &calificaciones[i][j]);
         
        }
    }

    for (int i = 0; i < 5; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += calificaciones[i][j];
        }
        float promedio = suma / 3;
        printf("Promedio del estudiante %d: %.2f\n", i + 1, promedio);
    }

    for (int j = 0; j < 3; j++) {
        float suma = 0;
        for (int i = 0; i < 5; i++) {
            suma += calificaciones[i][j];
        }
        float promedio = suma / 5;
        printf("Promedio de la asignatura %d: %.2f\n", j + 1, promedio);
    }

    for (int i = 0; i < 5; i++) {
        float max = calificaciones[i][0], min = calificaciones[i][0];
        for (int j = 1; j < 3; j++) {
            if (calificaciones[i][j] > max) max = calificaciones[i][j];
            if (calificaciones[i][j] < min) min = calificaciones[i][j];
        }
        printf("Estudiante %d - Calificación más alta: %.2f, más baja: %.2f\n", i + 1, max, min);
    }

    for (int j = 0; j < 3; j++) {
        int aprobados = 0, reprobados = 0;
        for (int i = 0; i < 5; i++) {
            if (calificaciones[i][j] >= 6) {
                aprobados++;
            } else {
                reprobados++;
            }
        }
        printf("Asignatura %d - Aprobados: %d, Reprobados: %d\n", j + 1, aprobados, reprobados);
    }
    return 0;
     
}