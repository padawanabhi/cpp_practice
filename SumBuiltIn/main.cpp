#include <iostream>
#include <array>

using namespace std;

int sumArray(int numArray[], int sizeArray);
int sumArray(array<int, 10> numArray);
void sumArray(array<int, 10> theArray, int& sum);

int main()
{
    int myArray[]{2,3,5,6,7,8,9,3,6,45};
    array<int, 10> myArray2{2,3,5,6,7,8,9,3,6,45};
    int sumResult = 0;
    int sumResult2 = 0;
    int sumResult3 = 0;

    sumResult = sumArray(myArray, 10);
    sumResult2 = sumArray(myArray2);
    sumArray(myArray2, sumResult3);

    cout<<"The sum of the array is :"<<sumResult<<endl;
    cout<<"The sum of the array2 is :"<<sumResult2<<endl;
    cout<<"The sum of the array2 with reference is :"<<sumResult3<<endl;
    return 0;
}

int sumArray(int numArray[], int sizeArray)
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)
    {
        sum += numArray[i];
    }
    return sum;
}

int sumArray(array<int, 10> numArray)
{
    int sum = 0;
    for (auto num : numArray)
    {
        sum += num;
    }

    return sum;
}

void sumArray(array<int, 10> theArray, int& sum)
{
    for (auto num : theArray)
    {
        sum += num;
    }
}