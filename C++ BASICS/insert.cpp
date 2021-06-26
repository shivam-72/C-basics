#include <iostream>
using namespace std;
int main()
{
    int n, length, index, i, x;
    int A[n];
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "no. of element you want to insert:" << endl;
    cin >> length;
    if (length <= n)
    {
        cout << "elements of array" << endl;
        for (i = 0; i < length; i++)
        {
            cin >> A[i];
        }
        cout << "at which index want to delete the value";
        cin >> index;
        if (index >= 0 || index < length){
        x = A[index];
        cout << "the value i deleted: ";
        cout << x <<endl;
        cout << "new array is";
        for (i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
        for (i = 0; i < length; i++)
        {
            cout << A[i];
        } }
    }
    else
    {
        cout << "length is more reduce ur length length cant be more than size of array";
    }

    return 0;
}
