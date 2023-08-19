//This is the Production I created  program:
//3
//S->eAg
//A->ij
//A->i

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, i, r = 0, m = 0;
    char input[100][100];
    char p[100], pb[100][100], re[100][100], pbb[100][100];

    cout << "enter no of produtions:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the production:";
        cin >> p[i];
        cout << "Enter the production body:" << p[i] << "->";
        cin >> pb[i];
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < strlen(pb[0]); j++)
        {
            pbb[i][j] = pb[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {

        for (int j = 0; j < strlen(pb[0]); j++)
        {
            if (p[i] == pb[0][j])
            {
                for (int k = (strlen(pb[0]) + strlen(pb[i])) - 2; k > i; k--)
                {
                    pb[0][k] = pb[0][i + 1];
                }
                int l = 0;
                for (int t = 1; t < strlen(pb[i]) + 1; t++)
                {
                    pb[0][t] = pb[i][l];

                    l++;
                }

                for (int y = 0; y < strlen(pb[0]); y++)
                {
                    re[m][y] = pb[0][y];
                }

                m++;
            }
        }
        for (int b = 0; b < strlen(pb[0]); b++)
        {
            pb[0][b] = pbb[0][b];
        }

        r++;
    }
    cout << r;
    cout << "\nEnter String:";
    cin >> input[0];
    int c = 0;
    for (i = 0; i < r - 1; i++)
    {
        for (int j = 0; j < strlen(input[0]); j++)
        {
            if (input[0][j] == re[i][j])
            {
                c++;
            }
        }
        if (c == strlen(input[0]))
        {
            cout << "Accepted";
            break;
        }
        c = 0;
    }
    if (c == 0)
    {
        cout << "Not Accepted";
    }
    return 0;
}
