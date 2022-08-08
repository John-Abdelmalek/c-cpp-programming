// A program that copies elements from one array into another after static
// casting them from floats to ints.

#include <iostream>
using namespace std;

template <class T1, class T2>
void copy_print (const T1 source[], T2 destination[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        destination[i] = static_cast<T2>(source[i]);
    }

    cout << "Destination:\n" <<endl;

    for(int j = 0; j < size; ++j)
    {
        cout << destination[j] << "\t";
    }
    cout << endl;
}

int main()
{
    int size = 4;
    float original[6] = {2.3, 3.4, 4.5, 5.6, 6.7, 7.8};
    int copies[4];

    copy_print(original, copies, size);
    
    return 0;
}
