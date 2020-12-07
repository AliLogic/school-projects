#include <iostream>
using namespace std;

int main()
{
    for (int rows = 0; rows < 5; rows ++)
    {
        for (int column = 0; column < 5; column ++)
        {
            if (column >= 1 && column <= 3 && rows >= 1 && rows <= 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
	
	return 0;
}
