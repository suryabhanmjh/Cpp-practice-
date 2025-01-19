/*Four path to reach destination. The destination is 4.
1, 2, 3 & 4. Starting with 1 in every ways.
The path is available are:
1) 1 to 2  then 2 to 3  then 3 to 4.
2) 1 to 2 then 2 to 4.
3) 1 to 3 then 3 to 2 the  2 to 4.
4) 1 to 3 then 3 to 4.
5) 1 to 4.
All the path input taken by users*/

#include <iostream>
using namespace std;
int main()
{
    int path;
    cout << "Enter the path (must be 1) to reach destination 4: ";
    cin >> path;

    if (path == 1)
    {
        cout << "Enter the path 2, 3, or 4: ";
        cin >> path;

        if (path == 2)
        {
            cout << "Entre the path 3 or 4: ";
            cin >> path;

            if (path == 3)
            {
                cout << "Entre the path 4: ";
                cin >> path;

                if (path == 4)
                {
                    cout << "You are on the right path (path followed:1->2->3->4) ";
                }
                else
                {
                    cout << "You are not on the right path";
                }
            }
            else if (path == 4)
            {
                cout << "You are on the right path (path followed:1->2->4) ";
            }
            else
            {
                cout << "You are not on the right path";
            }
        }
        else if (path == 3){
            cout << "Entre the path 2 or 4: ";
            cin >> path;

            if (path == 2){
                cout << "Entre the path 4: ";
                cin >> path;

                if (path == 4)
                {
                    cout << "You are on the right path (path followed:1->3->2->4) ";
                }
                else
                {
                    cout << "You are not on the right path";
                }
            }

            else if (path == 4){
                cout << "You are on the right path (path followed:1->3->4) ";
            }
            else{
                cout << "You are not on the right path";
            }
        }
        else if (path == 4){
            cout << "You are on the right path (path followed:1->4) ";
        }
        else{
            cout << "You are not on the right path";
        }
    }

    else{
        cout << "You are not on the right path";
    }
}