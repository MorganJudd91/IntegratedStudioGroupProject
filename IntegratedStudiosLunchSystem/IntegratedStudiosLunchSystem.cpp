// IntegratedStudiosLunchSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// will combine code

#include <iostream>
using namespace std;

void weeklymenu();
void mainmenu();
void bookingdiscount();
void contactdetails();

int main() {
    int userchoice;
    mainmenu();
    cin >> userchoice;

    switch (userchoice) {
   
    case 1:
    weeklymenu();
    main();
    break;


    case 2:
    bookingdiscount();
    main();
    break;
    

    case 3:
    contactdetails();
    main();
    break;
        
    }
    return 0;
    



}

void mainmenu() {
    

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
   
}

void weeklymenu() {
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
}

void bookingdiscount() {
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
}

void contactdetails() {
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




//restaurant menu system
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int option, order, payment, complaint;
    char choice;

    cout << endl;
    cout << "\t\t\t\t-------------------Food Ordering System-------------------" << endl;
    cout << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t|                    Main Menu                                 |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t| 1. Order food/View Menu                                      |" << endl;
    cout << "\t\t\t\t| 2. Make Complaint Discounts                                  |" << endl;
    cout << "\t\t\t\t| 3. Bulk Payment                                              |" << endl;
    cout << "\t\t\t\t| 4. Update Details                                            |" << endl;
    cout << "\t\t\t\t| 5. Logout                                                    |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t Please input your choice: ";
    cin >> option;
    cout << endl;

    switch (option)
    {
    case 1:
    {
        // Weekly Menu
        cout << "\n\n\t\t\t\t\t\t-----Order food/View Menu-----" << endl;
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
        cout << "1. Order Meal" << endl;
        cout << "2. Print Meal Details" << endl;
        cout << "3. Checkout" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> order;
        cout << endl;

        switch (order)
        {
        case 1:
            cout << "Available Menu: ";
            cout << endl;
            cout << "1. Spinach Salad" << endl;
            cout << "2. Pulled Pork" << endl;
            cout << "3. Spaghetti Bolognese" << endl;
            cout << "4. Chicken Fried Rice" << endl;
            cout << "5. Veggie Burger" << endl;
            cout << "6. Grilled Cheese" << endl;
            cout << endl;
            cout << "Please select your preffered menu: ";
            cin >> order;
            cout << endl;
            break;
        case 2:
            cout << "You selected Spinach Salad, view details below: ";
            cout << endl;
            cout << "Spinach Salad:\nFrench spinach with mushrooms\nhard boiled egg and\nwarm bacon vinaigrette\n---------\nVegan:No Gluten Free:No\n$9.95\n" << endl;
            cout << endl;
            cout << "Proceed to checkout: ";
            cout << endl;
            break;
        case 3:
            cout << "You selected Spinach Salad, please pay: $9.95 only" << endl;
            cout << "=================Thank you for your order===========================" << endl;
            break;
        case 4:
            cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
            cout << "\t\t\t\t|                    Main Menu                                 |" << endl;
            cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
            cout << "\t\t\t\t| 1. Order food/View Menu                                      |" << endl;
            cout << "\t\t\t\t| 2. Make Complaint                                            |" << endl;
            cout << "\t\t\t\t| 3. Bulk Payment                                              |" << endl;
            cout << "\t\t\t\t| 4. Update Details                                            |" << endl;
            cout << "\t\t\t\t| 5. Logout                                                    |" << endl;
            cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
            cout << "\t\t Please input your choice: ";
            cin >> option;
            cout << endl;
            break;
        }
    }break;
    case 2:
    {
        cout << "\n\n\t\t\t\t\t\t\t-----------------Make Complaint------------------" << endl;
        cout << endl;
        cout << "Make complaint on :" << endl;
        cout << endl;
        cout << "1. Food related" << endl;
        cout << "2. Service related" << endl;
        cout << "3. Others" << endl;
        cout << "Choose an option: ";
        cin >> complaint;
        cout << endl;
        switch (complaint)
        {
        case 1:
            cout << "Please elaborate on your complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press Y to submit complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press N to ammend complaint: ";
            cin >> complaint;
            cout << endl;
            break;

        case 2:
            cout << "Please elaborate on your complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press Y to submit complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press N to ammend complaint: ";
            cin >> complaint;
            cout << endl;
            break;
        case 3:
            cout << "Please elaborate on your complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press Y to submit complaint: ";
            cin >> complaint;
            cout << endl;
            cout << "Press N to ammend complaint: ";
            cin >> complaint;
            cout << endl;
            break;
        }

    }break;
    case 3:
    {
        // Bulk Payment
        cout << "\n\n\t\t\t\t\t\t-----Bulk Booking Discount-----" << endl;
        cout << endl;
        cout << "1.\t\t\t\t\t\t\t2.\t\t\t\t\t\t\t\t3." << endl;
        cout << "Gold Ticket\t\t\t\t\t\tSilver Ticket\t\t\t\t\t\t\tBronze Ticket" << endl;
        cout << "-------------\t\t\t\t\t\t-------------\t\t\t\t\t\t\t--------------" << endl;
        cout << "Pay for 30 days and receive a \t\t\t\tPay for 15 days and receive a \t\t\t\t\tPay for 7 days and receive a" << endl;
        cout << "\n15% discount\t\t\t\t\t\t10% discount\t\t\t\t\t\t\t5% discount" << endl;
        cout << endl;
        cout << "\nWithout ticket : $175\t\t\t\t\tWithout ticket : $125\t\t\t\t\t\tWithout ticket : $75" << endl;
        cout << "\nWith ticket : $148.75\t\t\t\t\tWith ticket : $112.50\t\t\t\t\t\tWith ticket : $71.25" << endl;
        cout << "\nYou save: $26.25\t\t\t\t\tYou save: $12.50\t\t\t\t\t\tYou save: $3.75" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "1. Order Ticket" << endl;
        cout << "2. Print Ticket Details" << endl;
        cout << "3. Checkout" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> payment;
        cout << endl;

        switch (payment)
        {
        case 1:
            cout << "Order Ticket";
            cout << endl;
            cout << "1. Gold" << endl;
            cout << "2. Silver" << endl;
            cout << "3. Bronze" << endl;
            cout << endl;
            cout << "Please choose ticket you would like to purchase:  ";
            cin >> payment;
            cout << endl;
            break;
        case 2:
            cout << "Ticket details";
            cout << endl;
            cout << "Ticket Name: " << endl;
            cout << "Date: " << endl;
            cout << "Quantity: " << endl;
            cout << "Price: " << endl;
            cout << "Total: " << endl;
            cout << endl;
            cout << "Press any key to go back: ";
            cin >> payment;
            cout << endl;
            break;
        case 3:
            int menuId;
            map<int, map<string, int>> foods;
            foods[1]["Spinach Salad"] = 9.95;
            foods[2]["Pulled Pork"] = 7.95;
            foods[3]["Sphaghetti Bolognese"] = 6.50;
            foods[4]["Chicken Fried Rice"] = 8.00;
            foods[5]["Veggie Burger"] = 7.50;
            foods[6]["Grilled Cheese"] = 6.00;

            vector<int> orderedItems;
            int total = 0;
            cout << "Ticket details";
            cout << endl;
            cout << "Ticket Name ......... ........ " << endl;
            cout << "Quantity ........ " << endl;
            cout << "Price ........... " << endl;
            cout << "Total ........ " << endl;
            cout << endl;
            cout << "Press 1 to proceed: ";
            cin >> payment;
            cout << endl;

            int proceed;
            cout << "1. Pay now " << endl;
            cout << "2. Pay later " << endl;
            cout << "3. Exit" << endl;
            cout << "Choose option: ";
            cin >> proceed;
            cout << endl;

            cout << "*** CHECKOUT #1 ***\n";
            cout << "Order Items: ";
            for (int& i : orderedItems) {
                auto f = foods.find(i);
                map<string, int> y = f->second;
                cout << "[" << y.begin()->first << "]";
                total += y.begin()->second;
            }
            cout << "\nTotal Price: $" << total << "\n\n";

            int payMethod;
            cout
                << "Choose your payment method:\n"
                << "1. Visacard\n"
                << "2. Mastercard\n"
                << "3. Online Banking\n\n"
                << "Enter ID: ";
            cin >> payMethod;
            cout << "\n\n[Payment accepted] Happy meal!";

            menuId = 0; /* exit program */
            break;
        }
    } break;
    }
}
