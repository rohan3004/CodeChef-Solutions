#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(((x1+y1)%2 == 0) && ((x2+y2)%2 == 0) || ((x1+y1)%2 != 0) && ((x2+y2)%2 != 0)) cout << "YES" << "\n";
        else cout << "NO"  << "\n";
    }
    return 0;
}