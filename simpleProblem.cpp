#include <iostream>
#include <vector>
using namespace std;

// find minimum number
void minNumber(int arr[], int len)
{
    // Q.1 => Find the lowest number among different ages
    // Input should be an array of integer.

    // suppose num[0] value is the lowest number
    int minNumber = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }
    cout << "Lowest number is: " << minNumber << endl;
}

// find max number
void maxNumber(int arr[], int len)
{
    // Q.1 => Find the maximum number among different ages
    // Input should be an array of integer.

    // suppose num[0] value is the maximum number
    int maxNumber = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }
    cout << "Max number is: " << maxNumber << endl;
}

// number is prime or not
void isPrime(int number)
{
    bool result = true;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            result = false;
            break;
        }
    }

    if (result == true)
    {
        cout << number << " is prime";
    }
    else
    {
        cout << number << " is not prime";
    }

    cout << endl;
}

// find factors of non prime number

void findFactors(int count)
{
    vector<int> resultArr = {};
    for (int i = 2; i <= count - 1; i++)
    {
        if (count % i == 0)
        {
            resultArr.push_back(i);
        }
    }

    for (int result : resultArr)
    {
        cout << result << " ";
    }
}

// main function

int main()
{
    int numArr[] = {48, 24, 93, 39, 37, 27, 29, 63, 73, 37};
    int len = sizeof(numArr) / sizeof(int);

    // lowest number
    minNumber(numArr, len);

    // highest number
    maxNumber(numArr, len);

    isPrime(13);

    findFactors(24);
    return 0;
}