#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 5, 40, 15};

    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest= arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;

    return 0;
}