//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.6 -------------------------

#include <iostream>
struct CandyBar
{
    char brand[20];
    float weight;
    int cal;
};
int main()
{
    using namespace std;
    CandyBar snack[3]
    {
        {"Mocha Munch", 2.3, 350},
        {"Bambi", 2.5, 390},
        {"Godzilla", 3.4, 400}
    };
    cout << "First content\n Brand name: " << snack[0].brand
         << "\n Weight: " << snack[0].weight
         << "\n Calores: " << snack[0].cal << endl;
    cout << "Second content\n Brand name: " << snack[1].brand
         << "\n Weight: " << snack[1].weight
         << "\n Calores: " << snack[1].cal << endl;
    cout << "Third content\n Brand name: " << snack[2].brand
         << "\n Weight: " << snack[2].weight
         << "\n Calores: " << snack[2].cal << endl;
    return 0;
}
