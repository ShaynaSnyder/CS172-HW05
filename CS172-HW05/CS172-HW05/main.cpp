//Shayna Snyder
//CS172-1
//1 November, 2016
//HW05

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

//template prefix
template<typename T>
//declares int function linearSearch
int linearSearch(T list[], const T key, int arraySize);

//template prefix
template<typename T>
//declares bool function isSorted
bool isSorted(const T list[], int size);

int main()
{
    //12.2 Linear search
    //tests the function with an array of int values
    int intList[] = {1, 4, 4, 2, 5, -3, 6, 2};
    int i1 = linearSearch(intList, 4, 8); //returns 1
    int i2 = linearSearch(intList, -4, 8); //returns -1
    int i3 = linearSearch(intList, -3, 8); //returns 5
    cout << "Int array tests: \ni1: " << i1 << "\ni2: " << i2 << "\ni3: " << i3 << endl;
    //tests the function with an array of double values
    double doubleList[] = {3.5, 1.4, -4.1, 7.2, 5.1, -3.63, 6.54, 0.2};
    int d1 = linearSearch(doubleList, 4.3, 8); //returns -1
    int d2 = linearSearch(doubleList, -4.1, 8); //returns 2
    int d3 = linearSearch(doubleList, 0.2, 8); //returns 7
    cout << "Double array tests: \nd1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << endl;
    //tests the function with an array of string values
    string stringList[] = {"apple", "bear", "cacti", "dapper", "egg", "fortify"};
    int s1 = linearSearch(stringList, string("cacti"), 6); //returns 2
    int s2 = linearSearch(stringList, string("egg"), 6); //returns 4
    int s3 = linearSearch(stringList, string("zoo"), 6); //returns -1
    cout << "String array tests: \ns1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << endl;
    
    
    //12.4 Is sorted?
    //tests the isSorted function with an array of int values
    cout << "Int array sorted: " << isSorted(intList, 8) << endl; //returns 0
    //tests the isSorted function with an array of double values
    cout << "Double array sorted: " << isSorted(doubleList, 8) << endl; //returns 0
    //tests the isSorted function with an array of string values
    cout << "String array sorted: " << isSorted(stringList, 6) << endl; //returns 1
    
    
    //12.8 Implement vector class
    
    
    //12.20 Shuffle vector
    
    
    //12.25 New Account class
    
    
    return 0;
}

//template prefix
template<typename T>
//defines int function linearSearch
int linearSearch(T list[], const T key, int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        if(key==list[i])
            return i;
    }
    return -1;
}

//template prefix
template<typename T>
//defines bool function isSorted
bool isSorted(const T list[], int size)
{
    //uses for loops to evaluate whether the arrays are sorted
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size;j++)
        {
            if(list[j]<list[i])
                //returns false if a later value is smaller than a previous value
                return false;
        }
    }
    //returns true otherwise
    return true;
    
}
