// IntegratedStudiosLunchSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int option;

    cout << endl;
    cout << "\t\t\t\t-------------------Lunch Ordering System-------------------" << endl;
    cout << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t|                    SouthView High School                     |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t| 1. Weekly Menu                                               |" << endl;
    cout << "\t\t\t\t| 2. Booking Discounts                                         |" << endl;
    cout << "\t\t\t\t| 3. Contact Details and Office Locations                      |" << endl;
    cout << "\t\t\t\t| 4. Login or Register                                         |" << endl;
    cout << "\t\t\t\t| 5. Exit Program                                              |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t Please input your choice: ";
    cin >> option;
    cout << endl;
    switch (option)
    {
    case 1:
    {
        // Weekly Menu
        cout << "\n\n\t\t\t\t\t\t-----Weekly Menu-----" << endl;
        cout << endl;
        cout << "1.\t\t\t\t\t\t2.\t\t\t\t\t\t3." << endl;
        cout << "Spinach Salad\t\t\t\t\tPulled Pork\t\t\t\t\tSpaghetti Bolognese" << endl;
        cout << "-------------\t\t\t\t\t-------------\t\t\t\t\t--------------" << endl;
        cout << "French spinach with mushrooms\t\t\tRoasted pork simmered in\t\t\tServe with a sauce\nhard boiled egg and\t\t\t\ttangy BBQ sauce and\t\t\t\tmade from tomatoes minced\nwarm bacon vinaigrette.\t\t\t\tserved on a toasted\t\t\t\tbeef, garlic and herb" << endl;
        cout << "-------------\t\t\t\t\t-------------\t\t\t\t\t--------------" << endl;
        cout << "Vegan:No Gluten Free:No\t\t\t\tVegan:No Gluten Free:No\t\t\t\tVegan:No Gluten Free:No\n$9.95\t\t\t\t\t\t$7.95\t\t\t\t\t\t$6.50" << endl;
        cout << endl;
        cout << "4.\t\t\t\t\t\t5.\t\t\t\t\t\t6." << endl;
        cout << "Chicken Fried Rice\t\t\t\tVeggie Burger\t\t\t\t\tGrilled Cheese" << endl;
        cout << "-------------\t\t\t\t\t-------------\t\t\t\t\t--------------" << endl;
        cout << "Rice with chicken eggs\t\t\t\tPatty made with herbs\t\t\t\tAmerican Cheddar and Mozzarella\nonions carrots and peas.\t\t\ttofu and mushroom topped\t\t\t\t\n\t\t\t\t\t\twith caramelised onions.\t\t\t\t" << endl;
        cout << "-------------\t\t\t\t\t-------------\t\t\t\t\t--------------" << endl;
        cout << "Vegan:No Gluten Free:No\t\t\t\tVegan:Yes Gluten Free:No\t\t\tVegan:No Gluten Free:No\n$ 8.00\t\t\t\t\t\t$7.50\t\t\t\t\t\t$6.00" << endl;
        cout << endl;
        

    }break;

    case 2:
    {
        // Bulk Booking Discount
        cout << "\n\n\t\t\t\t\t\t-----Bulk Booking Discount-----" << endl;
        cout << endl;
        cout << "1.\t\t\t\t\t\t2.\t\t\t\t\t\t3." << endl;
        cout << "Gold Ticket\t\t\t\t\tSilver Ticket\t\t\t\t\tBronze Ticket" << endl;
        cout << "-------------\t\t\t\t\t-------------\t\t\t\t\t--------------" << endl;
        cout << "Pay for 30 days and receive a \t\t\tPay for 15 days and receive a \t\t\tPay for 7 days and receive a";
        cout << "\n15% discount\t\t\t\t\t10% discount\t\t\t\t\t5% discount";
        cout << endl;
        cout << "\nWithout ticket : $175\t\t\t\tWithout ticket : $125\t\t\t\tWithout ticket : $75";
        cout << "\nWith ticket : $148.75\t\t\t\tWith ticket : $112.50\t\t\t\tWith ticket : $71.25";
        cout << "\nYou save: $26.25\t\t\t\tYou save: $12.50\t\t\t\tYou save: $3.75";
        cout << endl;
        cout << endl;


    }break;

    case 3:
    {
        // Contact Details
        cout << "\n\n\t\t\t\t\t-----Contact Details and Locations-----" << endl;
        cout << endl;
        cout << "1.\t\t\t\t\t\t2." << endl;
        cout << "Street: 41 Orbell Street\t\t\tStreet: 153 Chester Road\nCity: Parkside\t\t\t\t\tCity:  Tawhero\nState/province/area: Timaru\t\t\tState/province/area: Wanganui\nPhone number (026) 2189-117\t\t\tPhone number (028) 5332-683\nZip code 7910\t\t\t\t\tZip code 4501\n " << endl;
        cout << endl;
        cout << "3.\t\t\t\t\t\t4." << endl;
        cout << "Street: 141 Hudson Avenue\t\t\tStreet: 101 Jenkin Street\nCity: Haywards\t\t\t\t\tCity: Clifton\nState/province/area: Lower Hutt\t\t\tState/province/area: Invercargill\nPhone number (020) 2147-717\t\t\tPhone number (027) 7566-067\nZip code 5018\t\t\t\t\tZip code 9812" << endl;
        cout << endl;
    }
    }
}

