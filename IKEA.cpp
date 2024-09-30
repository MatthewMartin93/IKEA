// Shane, Matthew, and Chris
// Ikea Kiosk Project
// 9/30/2024
// Extra: Methods

#include <iostream>
#include <cmath>
#include <cctype>
#include <tgmath.h>
using namespace std;

void startup();
void items();
void lines(int num);
void desk();
void curt();
void ttop();
void tleg();
void bill();

double total;

int main()
{
    //calls the startup function
    startup();
    items();
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
    int Dnum;
    cin >> Dnum;
    if(Dnum == 1)
    {
        cout << "Small size selected: $199.99" << endl;
        total += 199.99;
    }
    if(Dnum == 2)
    {
        cout << "Medium size selected: $249.99" << endl;
        total += 249.99;
    }
    if(Dnum == 3)
    {
        cout << "Large size selected $299.99" << endl;
        total += 299.99;
    }
    char answer;
    cout << "Would you like to buy more items? (y/n)" << endl;
    cin >> answer;
    answer = tolower(answer);
    if (answer == 'y'){
        items();
    }
    else {
        bill();
    }
    
}

void curt()
{
    cout << "|         Pick a size for your curtains     |" << endl;
    lines(1);
    cout << "|                     45 - 54               |" << endl;
    lines(1);
    int Cnum;
    cin >> Cnum;
    if(Cnum == 45)
    {
        cout << "45 inch size selected: $19.99" << endl;
        total += 19.99;
    }
    if(Cnum == 46)
    {
        cout << "46 inch size selected: $22.49" << endl;
        total += 22.99;
    }
    if(Cnum == 47)
    {
        cout << "47 inch size selected $24.99" << endl;
        total += 24.99;
    }
    if(Cnum == 48)
    {
        cout << "48 inch size selected $27.49" << endl;
        total += 27.49;
    }
    if(Cnum == 49)
    {
        cout << "49 inch size selected $29.99" << endl;
        total += 29.99;
    }
    if(Cnum == 50)
    {
        cout << "50 inch size selected $32.49" << endl;
        total += 32.49;
    }
    if(Cnum == 51)
    {
        cout << "51 inch size selected $34.99" << endl;
        total += 34.99;
    }
    if(Cnum == 52)
    {
        cout << "52 inch size selected $37.49" << endl;
        total += 37.49;
    }
    if(Cnum == 53)
    {
        cout << "53 inch size selected $39.99" << endl;
        total += 39.99;
    }
    if(Cnum == 54)
    {
        cout << "54 inch size selected $42.49" << endl;
        total += 42.49;
    }
    char answer;
    cout << "Would you like to buy more items? (y/n)" << endl;
    cin >> answer;
    answer = tolower(answer);
    if (answer == 'y'){
        items();
    }
    else {
        bill();
    }
}

void ttop()
{
    cout << "|         Pick a tabletop material          |" << endl;
    lines(1);
    cout << "|                1.  Wooden                 |" << endl;
    lines(1);
    cout << "|                2.  Marble                 |" << endl;
    lines(1);
    cout << "|                3.  Granite                |" << endl;
    lines(1);
    int num;
    cin >> num;
    if (num == 1){
        cout << "Wooden tabletop selected: $59.99" << endl;
        total += 59.99;
    }
    if (num == 2){
        cout << "Marble tabletop selected: $69.99" << endl;
        total += 69.99;
    }
    if (num == 3){
        cout << "Granite tabletop selected: $64.99" << endl;
        total += 64.99;
    }
    char answer;
    cout << "Would you like to buy more items? (y/n)" << endl;
    cin >> answer;
    answer = tolower(answer);
    if (answer == 'y'){
        items();
    }
    else {
        bill();
    }
    
    
}

void tleg()
{
    cout << "|         Pick a tableleg material          |" << endl;
    lines(1);
    cout << "|                1.  Wooden                 |" << endl;
    lines(1);
    cout << "|                2.  Marble                 |" << endl;
    lines(1);
    cout << "|                3.  Granite                |" << endl;
    lines(1);
    int num;
    cin >> num;
    if (num == 1){
        cout << "Wooden tableleg selected: $59.99" << endl;
        total += 59.99;
    }
    if (num == 2){
        cout << "Marble tableleg selected: $69.99" << endl;
        total += 69.99;
    }
    if (num == 3){
        cout << "Granite tableleg selected: $64.99" << endl;
        total += 64.99;
    }
    char answer;
    cout << "Would you like to buy more items? (y/n)" << endl;
    cin >> answer;
    answer = tolower(answer);
    if (answer == 'y'){
        items();
    }
    else {
        bill();
    }
}

void startup()
//the startup function prints out a welcome message and uses the lines function
{
    cout << "---------------------------------------------" << endl;
    lines(5);
    cout << "|         Welcome to the Ikea Kiosk         |" << endl;
    lines(5);
    cout << "---------------------------------------------" << endl;
}
//Prints out the options for items you can buy
void items()
{
    cout << "---------------------------------------------" << endl;
    cout << "|    Here are the items we have for sale    |" << endl;
    lines(1);
    cout << "|  1  Standing Desk: Small Medium or Large  |" << endl;
    lines(1);
    cout << "|  2  Blackout Curtains: 45 to 54 inches    |" << endl;
    lines(1);
    cout << "|  3  Tabletops: Wooden, Marble, or Granite |" << endl;
    lines(1);
    cout << "|  4  Tablelegs: Wooden, Marble, or Granite |" << endl;
        lines(1);
    cout << "|   Enter the number of the item you want   |" << endl;
    cout << "---------------------------------------------" << endl;
    int num;
    //once the user inputs what they want, runs a switch statemennt to figure out what the user wants.
    cin >> num;
    switch(num)
    {
        case 1: desk();
            break;
        case 2: curt();
            break;
        case 3: ttop();
            break;
        case 4: tleg();
            break;
    }
}


void bill() {
    double subtotal = total;
    cout << "Your subtotal amount is: $" << subtotal << "." << endl;
    double tax = subtotal * 1.06625;
    tax -= subtotal;
    subtotal *= 1.06625;
    total += tax;
    cout << "Please tip. 🥺👉👈" << endl;
    cout << "How much would you like to tip?" << endl;
    cout << "0: 0%" << endl;
    cout << "1: 15%" << endl;
    cout << "2: 20%" << endl;
    cout << "3: 25%" << endl;
    double tip;
    cin >> tip;
    if (tip == 1){
        tip = total*1.15;
        tip -= total;
        total *= 1.15;
    }
    else if (tip == 2){
        tip = total*1.2;
        tip -= total;
        total *= 1.2;
    }
    else if (tip == 3){
        tip = total*1.25;
        tip -= total;
        total *= 1.25;
    }
    else if (tip == 0){
        cout << "Since you have decided not to tip, we have added a 50 percent gratutity fee :)" << endl;
        tip = total*1.5;
        tip -= total;
        total *= 1.5;
    }
    subtotal *= 100;
    subtotal = ceil(subtotal);
    subtotal/=100;
    tax *= 100;
    tax = ceil(tax);
    tax/=100;
    tip *= 100;
    tip = ceil(tip);
    tip/=100;
    total*=100;
    total = ceil(total);
    total/=100;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;
    cout << "Have a good day!" << endl;
}
//the lines function prints out a line per time it is called
void lines(int num)
{
    for(int i = 0; i < num; i++)
    {
            cout << "|                                           |" << endl;
    }
}
