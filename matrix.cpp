#include <iostream>
using namespace std;
int main()
{
    const int i = 3, j = 3;
    int arr[i][j] = {{1, 2, 3}, {4, 5, 6}, {5, 9, 10}};
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}
