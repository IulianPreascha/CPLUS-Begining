#include <bits/stdc++.h>
using namespace std;
// #define DEBUG

ofstream fout("test.txt");

int main()
{

    // #ifdef DEBUG
    //     fout << "начало цикла";
    // #endif // DEBUG

    //     for (int i = 0; i < 4; i++)
    //     {
    //         fout << i << endl;
    //     }

    // #ifdef DEBUG
    //     fout << "конец цикла";
    // #endif // DEBUG

    //! =====================================

    // #ifdef DEBUG
    //     fout << "дебаг определен" << endl;
    // #else
    //     fout << "дебаг НЕ определен" << endl;
    // #endif // DEBUG

    //! =====================================

#ifndef DEBUG
    fout << "cout 1" << endl;
#else
    fout << "cout 2" << endl;
#endif // DEBUG

    return 0;
}