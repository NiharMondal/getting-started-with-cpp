#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Calculate the area of rectangle
    int length = 4;
    int width = 8;
    int area;

    area = length * width; // 32
    // cout << area << "\n";

    int num1 = 30;
    int num2 = 20;
    int minNum = min(num1, num2); // 20
    int maxNum = min(num1, num2); // 30

    int sqrtOf = sqrt(49); // 7 sqrt requires cmath library. check line number 2;

    bool isCodingFun = false; // 0

    // condition
    int age = 18;
    int votingAge = 18;

    if (age >= votingAge)
    {
        // cout << "You are valid candidate to vote";
    }
    else
    {
        // cout << "You can not cast vote!";
    }

    // while loop
    int i = 0;
    while (i < 5)
    {
        // cout << i << endl;
        i++;
    }

    // for loop
    for (int i = 5; i < 10; i++)
    {
        // cout << i  << endl;
    }

    // do while loop
    int count = 8;
    do
    {
        // cout  << "do while loop " << count << endl;
        count++;
    } while (count < 5);

    // nested loop

    for (int i = 0; i < 2; i++)
    {
        cout << "outer loop : " << i << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << "   inner loop: " << j << endl;
        }
    }

    // foreach loop
    int nArr[] = {
        1,
        2,
        3,
        4,
        5
    };
    for (int i : nArr)
    {
        // cout << i << endl;
    }


    //contineu statement
    for(int i=0; i<5; i++){
        if(i==3){
            continue;
        }
        // cout << i << endl;
    }

    //break statement
    int num = 1;
    while(num <5){
        
        // cout << num << endl;
        num++;
        if (num == 3)
        {
            break;
            num++;
        }
    }


    string cars[4] = {"Volvo", "BMW", "Ford","Mazda"};
    cars[2] = "Toyata";
    for(int i = 0; i<4; i++){
        // cout << cars[i] << endl;
    }



    //calculate the avarage of different ages and also sum of all ages

    int ages[8] = {30, 32, 17, 27, 71, 23, 28, 39};
    int lg = sizeof(ages) / sizeof(int);
    float sum, avg = 0;

    for(int age: ages){
        sum += age;
    }
    avg = sum / lg;

    cout << "sum age = " << sum << endl;
    cout << "avarage age = " << avg << endl;
    return 0;
}