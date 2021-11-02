// Example program
#include <iostream>
#include <string>

using namespace std;

void myfunk(void);          // прототип
void funk2(int, float);
float funk3(int, float);

int main()
{
    
    int t;
    float t2;
    cout << "Enter t ";
    cin >> t;
    cout << "Enter t2 ";
    cin >> t2;
    float o = funk3(t, t2);
    cout << funk3(3 + t, t2) << endl;
}


void myfunk(void)       // заголовок 
{
    int t, y;
    cout << "Enter t ";
    cin >> t;
    cout << "Enter y ";
    cin >> y;
    cout << (t + y) << endl;
}

void funk2(int x, float y)
{
    cout << (x * y) << endl;
}

float funk3(int t1, float t2)
{
    t2++;
    return t1 * t2;
}



