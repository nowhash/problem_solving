#include<bits/stdc++.h>
#include <clocale>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    setlocale(LC_ALL, "en_US.UTF-8");

    for (int t = 1; t <= T; ++t)
    {
        double total = 0, current;

        for (int i = 0; i < 12; ++i)
        {
            scanf("%lf", &current);
            total += current;
        }

        printf("%d $%'.2lf\n", t, total / 12.0);
    }
}
