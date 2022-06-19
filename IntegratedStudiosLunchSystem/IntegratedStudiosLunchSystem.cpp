// IntegratedStudiosLunchSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// will combine code

#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
using namespace std;


//Structs
//______________________________________________________________________________________________________________
struct carddetails { // credit card struct
    string cardnumber;
    string expiry;
    string cvv;

    carddetails(string c = "", string e = "", string cv = "") {
        cardnumber = c;
        expiry = e;
        cvv = cv;
    }
};

struct user { // user struct
    string type;
    string username;
    string password;
    string namefirst;
    string namelast;
    string gender;
    string dob;
    string contactnumber;
    string email;
    carddetails usercard;
};

//global user
//______________________________________________________________________________________________________________
user userloggedin;

//Functions templates
//______________________________________________________________________________________________________________
//main menu Functions templates
//______________________________________________________________________________________________________________
void weeklymenu();
void mainmenu();
void bookingdiscount();
void contactdetails();
//login/register Functions templates
//______________________________________________________________________________________________________________
void loginregmenu();
void userlogin(user& userlog, string searchusername, string password);
void login(user& loginuser);
//register functions templates
//______________________________________________________________________________________________________________
void writetofile(string stringinput, int intinput, long long int longintinput, int newline);
bool validestring(int validatetype, string checkstring);
bool valideint(int checkint, int checklow, int checkhigh);
bool validecard(long long int checkint, long long int checklow, long long int checkhigh);
bool validecardexp(int checkint);
int setusertype();
void reg();
//reset passwords templates
//______________________________________________________________________________________________________________
bool searchuser(string searchusername);
void passwordreset();
void setnewpasswoord(string checkusername, string newpassword);

//main()
//______________________________________________________________________________________________________________
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
        
    case 4:
        loginregmenu();
        break;
    }
    return 0;
    

}


//main menu functions
//______________________________________________________________________________________________________________
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


//Login/register functions
//______________________________________________________________________________________________________________
//Login/register menu
//______________________________________________________________________________________________________________
void loginregmenu() {
    int userselect = 0;

    cout << "\t\t\t\t ______________________\n"; // display menu
    cout << "\t\t\t\t| Login/Register       |\n";
    cout << "\t\t\t\t|______________________|\n";
    cout << "\t\t\t\t| 1. Login             |\n";
    cout << "\t\t\t\t| 2. Register          |\n";
    cout << "\t\t\t\t| 3. Forgot password   |\n";
    cout << "\t\t\t\t| 4. Back              |\n";
    cout << "\t\t\t\t|______________________|\n\n";
    cout << "\t\t\t\tPlease select the corresponding number: ";
    cin >> userselect;
    cin.clear();
    if (userselect == 1) {
        login(userloggedin); // go to login menu
        //after login will need to go to menu screen asks user to order/make complaint etc.
    }
    else if (userselect == 2) {
        int back = setusertype();
        if (back != 3) { // register new user
            reg();
            loginregmenu();
        }
        else {
            loginregmenu();
        }
    }
    else if (userselect == 3) {
        passwordreset(); // reset password
        loginregmenu();
    }
    else if (userselect == 4) {
        main();
    }
    else {
        cout << "invalid input.\n";
        loginregmenu();
    } // if user puts invalid entry
}

//Login option functions
//______________________________________________________________________________________________________________
void userlogin(user& userlog, string searchusername, string password) {
    ifstream readfile;
    readfile.open("user.csv"); // read file
    string type, username, passwd, fname, lname, gender, dob, contactnum, email, cardnum, cardexp, cardcvv; // strings to store each cell from csv file.
    bool userfound = false; // check if user exists

    while (getline(readfile, type, ',') && !userfound) {
        getline(readfile, username, ',');
        getline(readfile, passwd, ',');
        getline(readfile, fname, ',');
        getline(readfile, lname, ',');
        getline(readfile, gender, ',');
        getline(readfile, dob, ',');
        getline(readfile, contactnum, ',');
        getline(readfile, email, ',');
        getline(readfile, cardnum, ',');
        getline(readfile, cardexp, ',');
        getline(readfile, cardcvv, '\n');// loop through entries

        if (username == searchusername && passwd == password) {
            userfound = true; // can stop when user found
            userlog.type = type;
            userlog.username = username;
            userlog.password = passwd;
            userlog.namefirst = fname;
            userlog.namelast = lname;
            userlog.gender = gender;
            userlog.dob = dob;
            userlog.contactnumber = contactnum;
            userlog.email = email;
            userlog.usercard.cardnumber = cardnum;
            userlog.usercard.expiry = cardexp;
            userlog.usercard.cvv = cardcvv;
        }
    }
    if (!userfound) {
        cout << "Sorry that username does not exist.\n"; // if user not found
        readfile.close();
        login(userlog);
    }
    else if (passwd != password) {
        string newpassword;
        cout << "Incorrect password\n"; // if the password is not the same as the users password
        cout << "please enter your password or enter b to go back: ";
        cin >> newpassword;
        if (newpassword != "b") {
            readfile.close();
            userlogin(userlog, searchusername, newpassword);
        }
    }
    readfile.close();
}

void login(user& loginuser) {
    string username;
    string password;
    bool loginattempt = false; // false if attempt fails
    cout << "login or enter b to go back\n"; // gives user option to go back
    cout << "Enter your username: ";
    cin >> username;
    if (username == "b") { // don't run rest of code if user enters b
        main();
        return;
    }
    cout << "Enter your password: ";
    cin >> password;
    if (password == "b") {// don't run rest of code if user enters b
        main();
        return;
    }
    else {
        userlogin(loginuser, username, password); // check that login details are correct.
    }
    //main(); // change to other menu when code combined
}

//register option functions
//______________________________________________________________________________________________________________

void writetofile(string stringinput, int intinput, long long int longintinput, int newline) { // add details to user file when registering
    fstream readuserfile;
    readuserfile.open("user.csv", fstream::app);

    if (readuserfile.is_open()) {
        if (stringinput != "pass") {
            readuserfile << stringinput << ","; // allow for string input
        }
        else if (intinput != 0) { // allow for int input
            if (newline == 0) {
                readuserfile << intinput << ",";
            }
            else {
                readuserfile << intinput << "\n";
            }
        }
        else if (longintinput != 0) { // allow for long long int input
            readuserfile << longintinput << ",";

        }
        readuserfile.close();
    }
    else {
        cout << "error: could not write to file.";
    }
}

bool validestring(int validatetype, string checkstring) {
    if (validatetype == 1) {
        if (checkstring == "male" || checkstring == "female" || checkstring == "other") {
            return true;
        }
        else {
            return false;
        }
    }
    else if (validatetype == 2) {
        if (checkstring.find('@') != string::npos) {
            return true;
        }
        else {
            return false;
        }
    }
} // when registering check that inputs meet criteria

bool valideint(int checkint, int checklow, int checkhigh) {
    if (checkint > checklow && checkint < checkhigh) {
        return true;
    }
    else {
        return false;
    } // when registering check that int is within valid range of numbers
}

bool validecard(long long int checkint, long long int checklow, long long int checkhigh) {
    if (checkint > checklow && checkint < checkhigh) {
        return true;
    }
    else {
        return false;
    } // check that card number is valid (had to be long long int as cards use 16 digits
}

bool validecardexp(int checkint) { // check if expiry date input on card is valid
    if (checkint % 100 >= 22 && checkint % 100 < 27) { // give 5 years for card to expire
        if (checkint % 100 == 22) {
            if (checkint >= 600 && checkint <= 1222) {
                return true;
            }
            else {
                return false;
            }
        }
        else if (checkint % 100 == 27) {
            if (checkint >= 100 && checkint <= 727) {
                return true;
            }
            else {
                return false;
            }
        }
        else if (checkint >= 123 && checkint <= 1226) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int setusertype() {
    int choice;

    cout << "are you a parent or staff?\n\n";
    cout << " ______________________\n";
    cout << "| Register             |\n";
    cout << "|______________________|\n";
    cout << "| 1. parent            |\n";
    cout << "| 2. staff             |\n";
    cout << "| 3. Back              |\n";
    cout << "|______________________|\n";
    cin >> choice; // set if parent or staff acount

    if (choice == 1) {
        writetofile("parent", 0, 0, 0);
        return choice;
    }
    else if (choice == 2) {
        writetofile("staff", 0, 0, 0);
        return choice;
    }
    else if (choice == 3) {
        return choice;
    }
    else {
        "invalid choice, please select the corresponding number: ";
        setusertype();
    }
}

void reg() { // register new user and add their details to file.
    bool match = false;
    string username;
    string password;
    string gen;
    int bday;
    int bmonth;
    int byear;
    string email;
    long long int cardnum;
    int cardexp;
    int cardcvv;
    bool validusername = false;
    bool validgen = false;
    bool validday = false;
    bool validmonth = false;
    bool validyear = false;
    bool validemail = false;
    bool validcardnum = false;
    bool validcardexp = false;
    bool validcardcvv = false;

    cout << "Choose a username: ";
    while (!validusername) {
        cin >> username;
        bool userexist = searchuser(username);
        if (username != "b") {
            if (!userexist) {
                validusername = true;
            }
            else {
                cout << username << " already exists. Please enter another username: ";
            }
        }
        else {
            cout << "user name cannot be " << username << " please enter another username: ";
        }
    }
    writetofile(username, 0, 0, 0);
    cin.ignore();
    while (!match) {
        string confirm;
        bool validpassword = false;
        cout << "Enter a password: ";
        while (!validpassword) {
            cin >> password;
            if (password != "b") {
                validpassword = true;
            }
            else {
                cout << "password cannot be " << password << " please enter another password: ";
            }
        }
        cout << "confirm your password: ";
        cin >> confirm;
        if (password != confirm) {
            cout << "Sorry, that is not a match.\n";
        }
        else {
            cout << "Your password has been set.\n\n";
            match = true;
        }
    }
    writetofile(password, 0, 0, 0);
    string firstname;
    cout << "Enter your first name: ";
    cin >> firstname;
    writetofile(firstname, 0, 0, 0);
    string lastname;
    cout << "Enter your last name: ";
    cin >> lastname;
    writetofile(lastname, 0, 0, 0);
    cout << "Enter your gender (male, female, other): ";
    while (!validgen) {
        cin >> gen;
        cin.ignore();
        validgen = validestring(1, gen);
        if (!validgen) {
            cout << "Invalid entry, please enter male, female or other: ";
        }
    }
    writetofile(gen, 0, 0, 0);
    cout << "Enter your date of birth, first enter day of month you were born (dd): ";
    while (!validday) {
        cin >> bday;
        validday = valideint(bday, 0, 32);
        if (!validday) {
            cout << "Invalid entry, please enter day of month you were born (dd): ";
        }
    }
    cout << "Enter the month you were born (mm): ";
    while (!validmonth) {
        cin >> bmonth;
        validmonth = valideint(bmonth, 0, 13);
        if (!validmonth) {
            cout << "Invalid entry, please enter the month you were born (mm): ";
        }
    }
    cout << "Enter the year you were born (yyyy): ";
    while (!validyear) {
        cin >> byear;
        validyear = valideint(byear, 1900, 2023);
        if (!validyear) {
            cout << "Invalid entry, please enter the year you were born (yyyy): ";
        }
    }
    int dob = bday * 1000000 + bmonth * 10000 + byear;
    writetofile("pass", dob, 0, 0);
    cout << "enter a contact number: ";
    string contactnum;
    cin >> contactnum;
    writetofile(contactnum, 0, 0, 0);
    cout << "please enter your email address: ";
    while (!validemail) {
        cin >> email;
        validemail = validestring(2, email);
        if (!validemail) {
            cout << "Invalid entry, please enter a valid email address: ";
        }
    }
    writetofile(email, 0, 0, 0);
    cout << "please enter your credit card details.\nFirst, please enter the 16 digit card number: ";
    while (!validcardnum) {
        cin >> cardnum;
        validcardnum = validecard(cardnum, 999999999999999, 10000000000000000);
        if (!validcardnum) {
            cout << "Invalid entry, please enter a valid 16 digit card number: ";
        }
    }
    writetofile(to_string(cardnum), 0, 0, 0);
    cout << "Please enter the cards expiry date (mmyy): ";
    while (!validcardexp) {
        cin >> cardexp;
        validcardexp = validecardexp(cardexp);
        if (!validcardexp) {
            cout << "Invalid entry, please enter a valid expiry date (mmyy): ";
        }
    }
    writetofile("pass", cardexp, 0, 0);
    cout << "Please enter the 3 digit CVV number on the back of your card: ";
    while (!validcardcvv) {
        cin >> cardcvv;
        validcardcvv = valideint(cardcvv, 99, 1000);
        if (!validcardcvv) {
            cout << "Invalid entry, please enter the 3-digit CVV number: ";
        }
    }
    writetofile("pass", cardcvv, 0, 1);
}

//forgot password option functions
//______________________________________________________________________________________________________________
bool searchuser(string searchusername) {
    ifstream readfile;
    readfile.open("user.csv");
    string type, username, rest;
    bool userfound = false;

    while (getline(readfile, type, ',') && !userfound) {
        getline(readfile, username, ',');
        getline(readfile, rest, '\n');
        if (username == searchusername) {
            userfound = true;
        }
    }
    readfile.close();
    return userfound; // check that username exists, return true or false
}

void passwordreset() {
    bool userexists = false;
    bool match = false;
    string username;
    string password;
    cout << "enter your username or type b to go back: ";
    while (!userexists) { // check username exists
        cin >> username;
        if (username == "b") {
            return;
        }
        userexists = searchuser(username);
        if (!userexists) {
            cout << "That username does not exist, please enter your username or enter b to go back: ";
        }
    }
    while (!match) { // user to enter new password and retype it to confirm.
        string confirm;
        cout << "Enter new password: ";
        cin >> password;
        cout << "confirm your password: ";
        cin >> confirm;
        if (password != confirm) {
            cout << "Sorry, that is not a match.\n";
        }
        else {
            cout << "Your password has been set.\n";
            match = true;
        }
    }
    setnewpasswoord(username, password); // function changes the password
}

void setnewpasswoord(string checkusername, string newpassword) {
    ifstream readfile;
    ofstream writefile;
    readfile.open("user.csv");
    vector<string> storevalues; // store everything on file in a vector
    string type, username, passwd, fname, lname, gender, dob, contactnum, email, cardnum, cardexp, cardcvv;

    while (getline(readfile, type, ',')) {
        storevalues.push_back(type);
        storevalues.push_back(",");
        getline(readfile, username, ',');
        storevalues.push_back(username);
        storevalues.push_back(",");
        getline(readfile, passwd, ',');
        if (username == checkusername) { // if username is what user had input save new password instead of old
            storevalues.push_back(newpassword);
            storevalues.push_back(",");
        }
        else { // for all other users store their current passwords
            storevalues.push_back(passwd);
            storevalues.push_back(",");
        }
        getline(readfile, fname, ',');
        storevalues.push_back(fname);
        storevalues.push_back(",");
        getline(readfile, lname, ',');
        storevalues.push_back(lname);
        storevalues.push_back(",");
        getline(readfile, gender, ',');
        storevalues.push_back(gender);
        storevalues.push_back(",");
        getline(readfile, dob, ',');
        storevalues.push_back(dob);
        storevalues.push_back(",");
        getline(readfile, contactnum, ',');
        storevalues.push_back(contactnum);
        storevalues.push_back(",");
        getline(readfile, email, ',');
        storevalues.push_back(email);
        storevalues.push_back(",");
        getline(readfile, cardnum, ',');
        storevalues.push_back(cardnum);
        storevalues.push_back(",");
        getline(readfile, cardexp, ',');
        storevalues.push_back(cardexp);
        storevalues.push_back(",");
        getline(readfile, cardcvv, '\n');
        storevalues.push_back(cardcvv);
        storevalues.push_back("\n");
    }
    readfile.close();
    writefile.open("user.csv");

    vector<string> ::iterator i;
    for (i = storevalues.begin(); i != storevalues.end(); i++) {
        writefile << *i; // rewrite everything back to the file with password changed.
    }
    writefile.close();
}

//___________________________________________________________________________________________________________________________________________________________
//restaurant menu system
//#include <iostream>
//#include <vector> commented have these at top of file
//#include <map>
//using namespace std;
int main() { //after logging in user to go to this menu. will want alternative name.
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
