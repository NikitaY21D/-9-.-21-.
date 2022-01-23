// задание 9 Яковлев Н 21Д
//Задание 9
//Вычислить значениеy(n)  = √1 + √2...√n (sqrt(1 + sqrt(2 + ... + sqrt(n))))

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double sum;
    cout << "Enter the number: n = ";
    cin >> n;
    sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sqrt(i + sum);

    }

    cout << "Sum  = " << sum;

    return 0;
}