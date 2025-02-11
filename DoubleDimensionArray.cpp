#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3,4}, {4, 5, 6,7}, {7, 8, 9,87}};
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            cout << arr[i][j];
        }
    }
    return 0;
}
