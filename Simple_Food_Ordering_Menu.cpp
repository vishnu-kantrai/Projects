/*A simple food ordering user interactive menu system*/

#include<iostream>
#include<cstdlib>
using namespace std;

int take_qty();

int main()
{
    int Done=0,total_price=0, qty, decision;
    char ch;
    while(Done == 0)
    {
        decision=0;
        cout << "--------MENU---------\n"
          << "Choose\n" 
          << "'B'= Burger..100rs\n" 
          << "'P'=Pizza..250rs\n" 
          << "'F'=French Fries..20rs\n" 
          << "'S'=Sandwich..30rs\n" << endl;
      
        cout << "Current BILL : " << total_price << "rs only\n" << endl;
        cin >> ch;
        switch(toupper(ch))
        {
        case 'B':
        {
            total_price += (take_qty()*100);
            break;
        }
        case 'P':
        {
            total_price += (take_qty()*250);
            break;
        }
        case 'F':
        {
            total_price += (take_qty()*20);
            break;
        }
        case 'S':
        {
            total_price += (take_qty()*30);
            break;
        }
        default:
        {
            cout << "Invalid" << endl;
            break;
        }
        }
        cout << "\nTo add more press '1'\nTo Confirm press any other key" << endl;
        cin >> decision;
        switch(decision)
        {
        case 1:
            break;
        default:
        {
            Done = 1;
            break;
        }
        }
        system("clear");

    }
    cout << "\nTotal price is : ";
    cout << total_price;
    
    cin.ignore();
    cin.get();
    return 0;
}

int take_qty()
{
    int qty;
    cout << "Enter quantity: ";
    cin >> qty;
    return qty;
}
