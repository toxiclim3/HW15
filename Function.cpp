
#include <iostream>
#include <ctime>
#include <random>
//#include <Windows.h>

#pragma region initializeArray

void initializeArrayInt(int arr[], const int size, int min = -16, int max = 16)
{
    static std::mt19937 mt{ static_cast<unsigned int>(time(0)) };
    std::uniform_int_distribution<> random{ min, max };

    for (int i = 0; i < size; i++)
    {
        arr[i] = random(mt);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void initializeArrayDbl(double arr[], const int size,int min = -16, int max = 16)
{
    static std::mt19937 mt{ static_cast<unsigned int>(time(0)) };
    std::uniform_real_distribution<> random_real{ min, max };

    for (int i = 0; i < size; i++)
    {
        arr[i] = random_real(mt);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void initializeArrayFlt(float arr[], const int size, int min = -16, int max = 16)
{
    static std::mt19937 mt{ static_cast<unsigned int>(time(0)) };
    std::uniform_real_distribution<> random_real{ min, max };

    for (int i = 0; i < size; i++)
    {
        arr[i] = random_real(mt);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void initializeArrayChr(char arr[], const int size, int min = 33, int max = 126)
{
    static std::mt19937 mt{ static_cast<unsigned int>(time(0)) };
    std::uniform_int_distribution<> random{ min, max };


    for (int i = 0; i < size; i++)
    {
        arr[i] = random(mt);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

#pragma endregion

#pragma region coutArr

void coutArrInt(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void coutArrDbl(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void coutArrFlt(float* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void coutArrChr(char* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

#pragma endregion

#pragma region min

void minInt(int* arr, int size)
{
    int min = arr[0];
    int minElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minElem = i;
        }
    }

    printf("The minimal element is %i at index %i", min, minElem);
}

void minDbl(double* arr, int size)
{
    double min = arr[0];
    int minElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minElem = i;
        }
    }

    printf("The minimal element is %f at index %i", min, minElem);
}

void minFlt(float* arr, int size)
{
    float min = arr[0];
    int minElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minElem = i;
        }
    }

    printf("The minimal element is %f at index %i", min, minElem);
}

void minChr(char* arr, int size)
{
    int min = arr[0];
    int minElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minElem = i;
        }
    }

    printf("The minimal element is %c at index %i", min, minElem);
}

#pragma endregion

#pragma region max

void maxInt(int* arr, int size)
{
    int max = arr[0];
    int maxElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxElem = i;
        }
    }

    printf("The maximum element is %i at index %i", max, maxElem);
}

void maxDbl(double* arr, int size)
{
    double max = arr[0];
    int maxElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxElem = i;
        }
    }

    printf("The maximum element is %f at index %i", max, maxElem);
}

void maxFlt(float* arr, int size)
{
    float max = arr[0];
    int maxElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxElem = i;
        }
    }

    printf("The maximum element is %f at index %i", max, maxElem);
}

void maxChr(char* arr, int size)
{
    int max = arr[0];
    int maxElem = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxElem = i;
        }
    }

    printf("The maximum element is %c at index %i", max, maxElem);
}

#pragma endregion

#pragma region sortArr

void sortArrInt(int arr[], int size)
{
    if (size <= 1)
    {
        return;
    }

    int left = 0, right = size - 1;
    int temp, pivot = 0;

    pivot = arr[(left + right) / 2];
    do {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);

    sortArrInt(arr, left);
    sortArrInt(arr + left, size - left);
}

void sortArrDbl(double arr[], int size)
{
    if (size <= 1)
    {
        return;
    }

    int left = 0, right = size - 1;
    int temp, pivot = 0;

    pivot = arr[(left + right) / 2];
    do {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);

    sortArrDbl(arr, left);
    sortArrDbl(arr + left, size - left);
}

void sortArrFlt(float arr[], int size)
{
    if (size <= 1)
    {
        return;
    }

    int left = 0, right = size - 1;
    int temp, pivot = 0;

    pivot = arr[(left + right) / 2];
    do {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);

    sortArrFlt(arr, left);
    sortArrFlt (arr + left, size - left);
}

void sortArrChr(char arr[], int size)
{
    if (size <= 1)
    {
        return;
    }

    int left = 0, right = size - 1;
    int temp, pivot = 0;

    pivot = arr[(left + right) / 2];
    do {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);

    sortArrChr(arr, left);
    sortArrChr(arr + left, size - left);
}

#pragma endregion

#pragma region edit

int* editArrInt(int* arr, int size)
{
    printf("Please enter which array element you want to edit:\n");

    bool validElem = 1;
    int select;
    do
    {
        
        std::cin >> select;

        if (select < size && select >= 0)
        {
            validElem = 1;
        }
        else
        {
            printf("Incorrect element, pls try again \n");
            validElem = 0;
        }
    } while (validElem == 0);
    

    printf("Please enter the new value:\n");
    std::cin >> arr[select];

    return arr;
}

double* editArrDbl(double* arr, int size)
{
    printf("Please enter which array element you want to edit:\n");

    bool validElem = 1;
    int select;
    do
    {

        std::cin >> select;

        if (select < size && select >= 0)
        {
            validElem = 1;
        }
        else
        {
            printf("Incorrect element, pls try again \n");
            validElem = 0;
        }
    } while (validElem == 0);

    printf("Please enter the new value:\n");
    std::cin >> arr[select];

    return arr;
}

float* editArrFlt(float* arr, int size)
{
    printf("Please enter which array element you want to edit:\n");

    bool validElem = 1;
    int select;
    do
    {

        std::cin >> select;

        if (select < size && select >= 0)
        {
            validElem = 1;
        }
        else
        {
            printf("Incorrect element, pls try again \n");
            validElem = 0;
        }
    } while (validElem == 0);

    printf("Please enter the new value:\n");
    std::cin >> arr[select];

    return arr;
}

char* editArrChr(char* arr, int size)
{
    printf("Please enter which array element you want to edit:\n");

    bool validElem = 1;
    int select;
    do
    {

        std::cin >> select;

        if (select < size && select >= 0)
        {
            validElem = 1;
        }
        else
        {
            printf("Incorrect element, pls try again \n");
            validElem = 0;
        }
    } while (validElem == 0);

    printf("Please enter the new value:\n");
    std::cin >> arr[select];

    return arr;
}

#pragma endregion
