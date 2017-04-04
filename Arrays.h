/*
Arrays.h
version 1.1
© 2017 Dark Tornado, All rights reserved.

<Function List>
void icopy(int* arr1, int* arr2, int, leng);
int iquals(int* arr1, int* arr2, int leng);
void isort(int* arr, int leng);
void ireverse(int* arr, int leng);
void ishuffle(int* arr, int leng);
int iindexOf(int* arr, int leng, int value);
int igetMax(int* arr, int leng);
int igetMin(int* arr, int leng);

void lcopy(long* arr1, long* arr2, int, leng);
int lquals(long* arr1, long* arr2, int leng);
void lsort(long* arr, int leng);
void lreverse(long* arr, int leng);
void lshuffle(long* arr, int leng);
int lindexOf(long* arr, int leng, long value);
long lgetMax(long* arr, int leng);
long lgetMin(long* arr, int leng);

void lcopy(float* arr1, float* arr2, int, leng);
int fquals(float* arr1, float* arr2, int leng);
void fsort(float* arr, int leng);
void freverse(float* arr, int leng);
void fshuffle(float* arr, int leng);
int findexOf(float* arr, int leng, float value);
float fgetMax(float* arr, int leng);
float fgetMin(float* arr, int leng);

void dcopy(double* arr1, double* arr2, int, leng);
int dquals(double* arr1, double* arr2, int leng);
void dsort(double* arr, int leng);
void dreverse(double* arr, int leng);
void dshuffle(double* arr, int leng);
int dindexOf(double* arr, int leng, double value);
double dgetMax(double* arr, int leng);
double dgetMin(double* arr, int leng);
*/

#include <stdlib.h>
#include <time.h>

//Integer Array

void icopy(int* arr1, int* arr2, int leng){
    for (int n = 0; n < leng; n++)
        arr2[n] = arr1[n];
}

int iquals(int* arr1, int* arr2, int leng){
    for (int n = 0; n < leng; n++){
        if (arr1[n] != arr2[n]) return 0;
    }
    return 1;
}

void isort(int* arr, int leng){
    int value, index;
    for (int n = 0; n < leng; n++){
        value = arr[n];
        index = n;
        for (int m = n + 1; m < leng; m++){
            if (value > arr[m]){
                value = arr[m];
                index = m;
            }
        }
        if (value < arr[n]){
            arr[index] = arr[n];
            arr[n] = value;
        }
    }
}

void ireverse(int* arr, int leng){
    int* arr2 = (int*)malloc(sizeof(int) * leng);
    for (int n = 0; n < leng; n++)
        *(arr2 + n) = arr[n];
    for (int n = 0; n < leng; n++)
        arr[leng - n - 1] = *(arr2 + n);
    free(arr2);
}

void ishuffle(int* arr, int leng){
    int cache;
    int r;
    srand((int)time(NULL));
    for (int n = 0; n < leng; n++){
        r = rand() % leng;
        cache = arr[n];
        arr[n] = arr[r];
        arr[r] = cache;
    }
}

int iindexOf(int* arr, int leng, int value){
    for (int n = 0; n < leng; n++){
        if (arr[n] == value) return n;
    }
    return -1;
}

int igetMax(int* arr, int leng){
    int max = arr[0];
    for (int n = 1; n < leng; n++){
        if (max < arr[n]) max = arr[n];
    }
    return max;
}

int igetMin(int* arr, int leng){
    int min = arr[0];
    for (int n = 1; n < leng; n++){
        if (min > arr[n]) min = arr[n];
    }
    return min;
}


//Long Array

void lcopy(long* arr1, long* arr2, int leng){
    for (int n = 0; n < leng; n++)
        arr2[n] = arr1[n];
}

long lquals(long* arr1, long* arr2, int leng){
    for (int n = 0; n < leng; n++){
        if (arr1[n] != arr2[n]) return 0;
    }
    return 1;
}

void lsort(long* arr, int leng){
    long value;
    int index;
    for (int n = 0; n < leng; n++){
        value = arr[n];
        index = n;
        for (int m = n + 1; m < leng; m++){
            if (value > arr[m]){
                value = arr[m];
                index = m;
            }
        }
        if (value < arr[n]){
            arr[index] = arr[n];
            arr[n] = value;
        }
    }
}

void lreverse(long* arr, int leng){
    long* arr2 = (long*)malloc(sizeof(long) * leng);
    for (int n = 0; n < leng; n++)
        *(arr2 + n) = arr[n];
    for (int n = 0; n < leng; n++)
        arr[leng - n - 1] = *(arr2 + n);
    free(arr2);
}

void lshuffle(long* arr, int leng){
    long cache;
    int r;
    srand((int)time(NULL));
    for (int n = 0; n < leng; n++){
        r = rand() % leng;
        cache = arr[n];
        arr[n] = arr[r];
        arr[r] = cache;
    }
}

int lindexOf(long* arr, int leng, long value){
    for (int n = 0; n < leng; n++){
        if (arr[n] == value) return n;
    }
    return -1;
}

long lgetMax(long* arr, int leng){
    long max = arr[0];
    for (int n = 1; n < leng; n++){
        if (max < arr[n]) max = arr[n];
    }
    return max;
}

long lgetMin(long* arr, int leng){
    long min = arr[0];
    for (int n = 1; n < leng; n++){
        if (min > arr[n]) min = arr[n];
    }
    return min;
}


//Float Array

void fcopy(float* arr1, float* arr2, int leng){
    for (int n = 0; n < leng; n++)
        arr2[n] = arr1[n];
}

float fquals(float* arr1, float* arr2, int leng){
    for (int n = 0; n < leng; n++){
        if (arr1[n] != arr2[n]) return 0;
    }
    return 1;
}

void fsort(float* arr, int leng){
    float value;
    int index;
    for (int n = 0; n < leng; n++){
        value = arr[n];
        index = n;
        for (int m = n + 1; m < leng; m++){
            if (value > arr[m]){
                value = arr[m];
                index = m;
            }
        }
        if (value < arr[n]){
            arr[index] = arr[n];
            arr[n] = value;
        }
    }
}

void freverse(float* arr, int leng){
    float* arr2 = (float*)malloc(sizeof(float) * leng);
    for (int n = 0; n < leng; n++)
        *(arr2 + n) = arr[n];
    for (int n = 0; n < leng; n++)
        arr[leng - n - 1] = *(arr2 + n);
    free(arr2);
}

void fshuffle(float* arr, int leng){
    float cache;
    int r;
    srand((int)time(NULL));
    for (int n = 0; n < leng; n++){
        r = rand() % leng;
        cache = arr[n];
        arr[n] = arr[r];
        arr[r] = cache;
    }
}

int findexOf(float* arr, int leng, float value){
    for (int n = 0; n < leng; n++){
        if (arr[n] == value) return n;
    }
    return -1;
}

float fgetMax(float* arr, int leng){
    float max = arr[0];
    for (int n = 1; n < leng; n++){
        if (max < arr[n]) max = arr[n];
    }
    return max;
}

float fgetMin(float* arr, int leng){
    float min = arr[0];
    for (int n = 1; n < leng; n++){
        if (min > arr[n]) min = arr[n];
    }
    return min;
}


//Double Array

void dcopy(double* arr1, double* arr2, int leng){
    for (int n = 0; n < leng; n++)
        arr2[n] = arr1[n];
}

double dquals(double* arr1, double* arr2, int leng){
    for (int n = 0; n < leng; n++){
        if (arr1[n] != arr2[n]) return 0;
    }
    return 1;
}

void dsort(double* arr, int leng){
    double value;
    int index;
    for (int n = 0; n < leng; n++){
        value = arr[n];
        index = n;
        for (int m = n + 1; m < leng; m++){
            if (value > arr[m]){
                value = arr[m];
                index = m;
            }
        }
        if (value < arr[n]){
            arr[index] = arr[n];
            arr[n] = value;
        }
    }
}

void dreverse(double* arr, int leng){
    double* arr2 = (double*)malloc(sizeof(double) * leng);
    for (int n = 0; n < leng; n++)
        *(arr2 + n) = arr[n];
    for (int n = 0; n < leng; n++)
        arr[leng - n - 1] = *(arr2 + n);
    free(arr2);
}

void dshuffle(double* arr, int leng){
    double cache;
    int r;
    srand((int)time(NULL));
    for (int n = 0; n < leng; n++){
        r = rand() % leng;
        cache = arr[n];
        arr[n] = arr[r];
        arr[r] = cache;
    }
}

int dindexOf(double* arr, int leng, double value){
    for (int n = 0; n < leng; n++){
        if (arr[n] == value) return n;
    }
    return -1;
}

double dgetMax(double* arr, int leng){
    double max = arr[0];
    for (int n = 1; n < leng; n++){
        if (max < arr[n]) max = arr[n];
    }
    return max;
}

double dgetMin(double* arr, int leng){
    double min = arr[0];
    for (int n = 1; n < leng; n++){
        if (min > arr[n]) min = arr[n];
    }
    return min;
}

