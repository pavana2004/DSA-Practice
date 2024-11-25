#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 4
void modify(bool mat[R][C])
{
    bool row[R];
    bool col[C];
    int i, j;
    for (i = 0; i < R; i++)
        row[i] = 0;
    for (i = 0; i < C; i++)
        col[i] = 0;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (mat[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if (row[i] == 1 || col[j] == 1)
                mat[i][j] = 1;
}
void print(bool mat[R][C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            cout << mat[i][j];
        cout << endl;
    }
}

int main()
{
    bool mat[R][C] = {{1, 0, 0, 1},
                      {0, 0, 1, 0},
                      {0, 0, 0, 0}};

    cout << "Input" << endl;
    print(mat);
    modify(mat);
    cout << "output" << endl;
    print(mat);

    return 0;
}
