#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class CofeeGrinder
{
private:
    bool CheckVoltage()
    {
        return true;
    }

public:
    void Start()
    {
        if (CheckVoltage())
        {
            fout << "VjuHHH!!" << endl;
        }
        else
        {
            fout << "Beep Beep" << endl;
        }
    }
};

int main()
{
    CofeeGrinder a;
    a.Start();

    return 0;
}