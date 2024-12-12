#include <iostream>
using namespace std;

int main() {

    // ----------------------[Randoms]------------------------

    //int arr[5] = { 1,3,2,1,4 };
    //cout << "Endex\t" << "Element\t" << "Address\t" << endl;
    //for (int i = 0; i < 5; i++) {
    //    cout << i << "\t" << arr[i] << "\t" << &arr[i] << endl;
    //}

    //int arr[5] = { 1,2,3,4,5 };
    //arr[4] = 8;

    //cout << arr[4];

    //int n; 
    //cin >> n;
    //int arrayyy[n];
    
    string names[] = { "Ahmed", "Ali", "aaaaaaaaaaaaaaaaaa"};
    int names2[] = {1222222,2,3};


    cout << sizeof(names) << endl;
    cout << sizeof(names[0]) << endl;
    cout << sizeof(names[1]) << endl;
    cout << sizeof(names[2]) << endl;
    cout << sizeof(names2) << endl;
    cout << sizeof(names2[0]) << endl;
    cout << sizeof(names2[1]) << endl;
    cout << sizeof(names2[2]) << endl; 

    // -------------------------------------------------------

    // -------------------[Applications]----------------------

    /*
        1- Using the Nested Loop Write a program to print the Prime numbers
                    from Starting Point = > End Point
        notes : Take the start & end points from the user.
    */

    // First Way: Not the Best Approch : 

            //int n; cin >> n;
            //for (int i = n; i > 2; i--) {
            //    bool allNotDivisible = true;
            //    for (int j = i - 1; j > 1; j--) {
            //        if (i % j == 0) {
            //           allNotDivisible = false;
            //           break;
            //        }
            //    }

            //    if (allNotDivisible)
            //        cout << i << endl;
            //}

            //cout << "2";
    

    // Second Way: It's the Best Approch :
    //int endPoint;
    //cout << "Enter ur End Point: ";
    //cin >> endPoint;

    //for (int number = 2; number <= endPoint; number++)
    //{
    //    bool isDevisable = true;
    //    for (int d = 2; d * d <= number; d++) {
    //        if (number % d == 0) {
    //            isDevisable = false;
    //            break;
    //        }
    //    }

    //    if (isDevisable)
    //        cout << number << endl;
    //}

    // -------------------------------------------------------
    
    return 0;
}
