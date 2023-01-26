#include <iostream>
#include <string>
using namespace std;

const int size = 10;
char word [size] = {};

int main ()
{
    cout << "Enter a word to rotate: ";
    cin >> word;

    int j = 0;
    while (word[j])
    {
        j++;
    }

    cout << endl;

    int right = j;
    int left = 0;

    char temp;

    while (left < right)
    {
        temp = word [left];
        word [left] = word[right];
        word [right] = temp;
        left ++;
        right --;
    }

    cout << "Reversed: ";

    for (int k = 0; k <= j; k++)
    {
        cout << word [k];
    }


}

