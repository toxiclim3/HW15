#pragma once

#include "Prog.cpp"

#ifdef INT
//зачем это делать??? через перегрузки можно было сделать вместо этого
#define init initializeArrayInt
#define cout coutArrInt
#define min minInt
#define max maxInt
#define sort sortArrInt
#define edit editArrInt
#endif

#ifdef FLOAT
#define init initializeArrayFlt
#define cout coutArrFlt
#define min minFlt
#define max maxFlt
#define sort sortArrFlt
#define edit editArrFlt
#endif

#ifdef DOUBLE
#define init initializeArrayDbl
#define cout coutArrDbl
#define min minDbl
#define max maxDbl
#define sort sortArrDbl
#define edit editArrDbl
#endif

#ifdef CHAR
#define init initializeArrayChr
#define cout coutArrChr
#define min minChr
#define max maxChr
#define sort sortArrChr
#define edit editArrChr
#endif



#pragma region initializeArray

void initializeArrayInt(int arr[], const int size, int min, int max);

void initializeArrayDbl(double arr[], const int size, int min, int max);

void initializeArrayFlt(float arr[], const int size, int min, int max);

void initializeArrayChr(char arr[], const int size, int min, int max);

#pragma endregion

#pragma region coutArr

void coutArrInt(int* arr, int size);

void coutArrDbl(double* arr, int size);

void coutArrFlt(float* arr, int size);

void coutArrChr(char* arr, int size);

#pragma endregion

#pragma region min

void minInt(int* arr, int size);

void minDbl(double* arr, int size);

void minFlt(float* arr, int size);

void minChr(char* arr, int size);

#pragma endregion

#pragma region max

void maxInt(int* arr, int size);

void maxDbl(double* arr, int size);

void maxFlt(float* arr, int size);

void maxChr(char* arr, int size);

#pragma endregion

#pragma region sortArr

void sortArrInt(int arr[], int size);

void sortArrDbl(double arr[], int size);

void sortArrFlt(float arr[], int size);

void sortArrChr(char arr[], int size);

#pragma endregion

#pragma region editArr

int* editArrInt(int* arr, int size);

double* editArrDbl(double* arr, int size);

float* editArrFlt(float* arr, int size);

char* editArrChr(char* arr, int size);

#pragma endregion

