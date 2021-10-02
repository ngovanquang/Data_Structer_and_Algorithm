#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int* arr;
    arr = (int*)malloc(n*sizeof(int));
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int MAX = arr[0];
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = arr[i];

        if (sum > MAX)
        {
            MAX = sum;
        }
        
        for (size_t j = i+1; j < n; j++)
        {
            sum += arr[j]; 

            if (sum > MAX)
            {
                MAX = sum;
            }
        }
        
    }

    delete[] arr;
    arr = NULL;

    cout << MAX;
    
    return 0;
}