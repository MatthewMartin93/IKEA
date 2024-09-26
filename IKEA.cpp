        #include <iostream>
#include <cmath>
using namespace std;


//Prototype for gui
void startup();
void items();
void lines(int num);
void desk();
void curt();
void ttop();
void tleg();
void bill();

int main()
{
    startup();
    cout << "---------------------------------------------" << endl;
    cout << "|    Here are the items we have for sale    |" << endl;
    lines(1);
    items();
    lines(1);
    cout << "|   Enter the number of the item you want   |" << endl;
    int num;
    cin >> num;
    switch(num)
    {
        case 1: desk();
        case 2: curt();
        case 3: ttop();
        case 4: tleg();
    }
    return 0;
}

void desk()
{
    cout << "|         Pick a size for your desk         |" << endl;
    lines(1);
    cout << "|          1        Small                   |" << endl;
    lines(1);
    cout << "|          2        Medium                  |" << endl;
    lines(1);
    cout << "|          3        Large                   |" << endl;
    lines(1);
    int num;
    cin >> num;
    if(num == 1)
    {
        
    }
}

void curt()
{

}

void ttop()
{

}

void tleg()
{

}

void startup()
{
    cout << "---------------------------------------------" << endl;
    lines(5);
    cout << "|         Welcome to the Ikea Kiosk         |" << endl;
    lines(5);
    cout << "---------------------------------------------" << endl;
}

void items()
{
    cout << "|  1  Standing Desk: Small Medium or Large  |" << endl;
    lines(1);
    cout << "|  2  Blackout Curtains: 45 to 54 inches    |" << endl;
    lines(1);
    cout << "|  3  Tabletops: Wooden, Marble, or Granite |" << endl;
    lines(1);
    cout << "|  4  Tablelegs: Wooden, Marble, or Granite |" << endl;
}

void lines(int num)
{
    for(int i = 0; i < num; i++)
    {
            cout << "|                                           |" << endl;
    }
}h(num0)
