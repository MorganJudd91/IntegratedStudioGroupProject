// IntegratedStudiosLunchSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// will combine code

#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

//morgan start
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
//morgan finish

// both
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
void userfileupdate();
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
void reg(int staffparent);
//reset passwords templates
//______________________________________________________________________________________________________________
bool searchuser(string searchusername);
void passwordreset();
void setnewpasswoord(string checkusername, string newpassword);
//restaurant menu system function templates
//__________________________________________________________________________
void restaurant();
void addorder(user username, int menuchoice);
void displayorders(string username);
void removeitem(string username, int ordertoremove);
bool userupdate(string username);
void checkout(user loggedinuser, string usern);
void removeallorders(string username);
//both finish

//Nick code start
//main()
//______________________________________________________________________________________________________________
int main() {
    int userchoice;
    mainmenu(); // display starting menu
    cin >> userchoice;

    switch (userchoice) {

    case 1:
        weeklymenu(); // display weekly menu
        main();
        break;


    case 2:
        bookingdiscount(); // display bulk discount options
        main();
        break;


    case 3:
        contactdetails(); // display contact details
        main();
        break;

    case 4:
        loginregmenu(); // go to login/register menu
        break;
    }
    return 0;


}


//main menu functions
//______________________________________________________________________________________________________________
void mainmenu() { // starting menu


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
    cout << endl;
    cout << "\t\t\t\t Please input your choice: ";

}

void weeklymenu() { // weekly menu
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

void contactdetails() { // displays contact and location details
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
//nicki finish

//Morgan start

void userfileupdate() {
    ifstream readfile;
    ofstream writefile;
    readfile.open("user.csv");
    vector<string> storevalues; // store everything on file in a vector
    string type, username, passwd, fname, lname, gender, dob, contactnum, email, cardnum, cardexp, cardcvv;

    while (getline(readfile, type, ',')) {
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
        getline(readfile, cardcvv, '\n');
        if (find(storevalues.begin(), storevalues.end(), username) != storevalues.end()) {
        }
        else {
            storevalues.push_back(type);
            storevalues.push_back(",");
            storevalues.push_back(username);
            storevalues.push_back(",");
            storevalues.push_back(passwd);
            storevalues.push_back(",");
            storevalues.push_back(fname);
            storevalues.push_back(",");
            storevalues.push_back(lname);
            storevalues.push_back(",");
            storevalues.push_back(gender);
            storevalues.push_back(",");
            storevalues.push_back(dob);
            storevalues.push_back(",");
            storevalues.push_back(contactnum);
            storevalues.push_back(",");
            storevalues.push_back(email);
            storevalues.push_back(",");
            storevalues.push_back(cardnum);
            storevalues.push_back(",");
            storevalues.push_back(cardexp);
            storevalues.push_back(",");
            storevalues.push_back(cardcvv);
            storevalues.push_back("\n");
        }
    }
    readfile.close();
    writefile.open("user.csv");

    vector<string> ::iterator i;
    for (i = storevalues.begin(); i != storevalues.end(); i++) {
        writefile << *i; // rewrite everything back to the file with password changed.
    }
    writefile.close();
}


//Login/register functions
//______________________________________________________________________________________________________________
//Login/register menu
//______________________________________________________________________________________________________________
void loginregmenu() {
    int userselect = 0;
    userfileupdate();

    cout << "\t\t\t\t ______________________\n"; // display menu
    cout << "\t\t\t\t| Login/Register       |\n";
    cout << "\t\t\t\t|______________________|\n";
    cout << "\t\t\t\t| 1. Login             |\n";
    cout << "\t\t\t\t| 2. Register          |\n";
    cout << "\t\t\t\t| 3. Forgot password   |\n";
    cout << "\t\t\t\t| 4. Back              |\n";
    cout << "\t\t\t\t|______________________|\n\n";
    cout << "\t\t\t\tPlease select the corresponding number: ";
    cin >> userselect; // select option
    cout << "\n";
    cin.clear();
    if (userselect == 1) {
        login(userloggedin); // go to login menu
    }
    else if (userselect == 2) {
        int back = setusertype();
        if (back != 3) { // register new user
            reg(back);
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
        cout << "\t\t\t\tinvalid input.\n";
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
        getline(readfile, cardcvv, '\n');// loop through user file

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
            userlog.usercard.cvv = cardcvv; // adds a user struct with logged in user details
        }
    }
    if (!userfound) {
        cout << "\t\t\t\tSorry that username does not exist.\n"; // if user not found
        readfile.close();
        login(userlog);
        return;
    }
    else if (passwd != password) {
        string newpassword;
        cout << "\t\t\t\tIncorrect password\n"; // if the password is not the same as the users password
        cout << "\t\t\t\tplease enter your password or enter b to go back: ";
        cin >> newpassword;
        if (newpassword != "b") {
            readfile.close();
            userlogin(userlog, searchusername, newpassword);
        }
        else {
            readfile.close();
            loginregmenu();
            return;
        }
    }
    readfile.close();
        restaurant();
}

void login(user& loginuser) {
    string username;
    string password;

    cout << "\t\t\t\tlogin or enter b to go back\n"; // gives user option to go back
    cout << "\t\t\t\tEnter your username: ";
    cin >> username;
    if (username == "b") { // don't run rest of code if user enters b
        main();
        return;
    }
    cout << "\t\t\t\tEnter your password: ";
    cin >> password;
    if (password == "b") {// don't run rest of code if user enters b
        main();
        return;
    }
    else {
        userlogin(loginuser, username, password); // check that login details are correct.
    }
}

//register option functions
//______________________________________________________________________________________________________________

void writetofile(string stringinput, int intinput, long long int longintinput, int newline) { // add details to user file when registering
    fstream readuserfile;
    readuserfile.open("user.csv", fstream::app);

    if (readuserfile.is_open()) {
        if (stringinput != "pass") {
            readuserfile << stringinput; // allow for string input
        }
        else if (intinput != 0) { // allow for int input
            readuserfile << intinput;
        }
        else if (longintinput != 0) { // allow for long long int input
            readuserfile << longintinput;

        }
        if (newline == 0) {
            readuserfile << ","; //next input will go into next cell
        }
        else {
            readuserfile << "\n"; // next input will go on next line
        }
        readuserfile.close();
    }
    else {
        cout << "error: could not write to file."; // if program could not open file
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

    cout << "\t\t\t\tare you a parent or staff?\n\n";
    cout << "\t\t\t\t ______________________\n";
    cout << "\t\t\t\t| Register             |\n";
    cout << "\t\t\t\t|______________________|\n";
    cout << "\t\t\t\t| 1. parent            |\n";
    cout << "\t\t\t\t| 2. staff             |\n";
    cout << "\t\t\t\t| 3. Back              |\n";
    cout << "\t\t\t\t|______________________|\n";
    cout << "\t\t\t\t";
    cin >> choice; // set if parent or staff acount

    if (choice == 1) {
        return choice;
    }
    else if (choice == 2) {
        return choice;
    }
    else if (choice == 3) {
        return choice;
    }
    else {
        "\t\t\t\tinvalid choice, please select the corresponding number: ";
        setusertype();
    }
}

void reg(int staffparent) { // register new user and add their details to file.
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

    cout << "\t\t\t\tChoose a username: ";
    while (!validusername) {
        cin >> username;
        bool userexist = searchuser(username);
        if (username != "b") {
            if (!userexist) {
                validusername = true;
            }
            else {
                cout << "\t\t\t\t" << username << " already exists. Please enter another username: ";
            }
        }
        else {
            cout << "\t\t\t\tUsername cannot be " << username << " please enter another username: ";
        }
    }
    
    cin.ignore();
    while (!match) {
        string confirm;
        bool validpassword = false;
        cout << "\t\t\t\tEnter a password: ";
        while (!validpassword) {
            cin >> password;
            if (password != "b") {
                validpassword = true;
            }
            else {
                cout << "\t\t\t\tpassword cannot be " << password << " please enter another password: ";
            }
        }
        cout << "\t\t\t\tconfirm your password: ";
        cin >> confirm;
        if (password != confirm) {
            cout << "\t\t\t\tSorry, that is not a match.\n";
        }
        else {
            cout << "\t\t\t\tYour password has been set.\n\n";
            match = true;
        }
    }
    string firstname;
    cout << "\t\t\t\tEnter your first name: ";
    cin >> firstname;
    string lastname;
    cout << "\t\t\t\tEnter your last name: ";
    cin >> lastname;
    cout << "\t\t\t\tEnter your gender (male, female, other): ";
    while (!validgen) {
        cin >> gen;
        cin.ignore();
        validgen = validestring(1, gen);
        if (!validgen) {
            cout << "\t\t\t\tInvalid entry, please enter male, female or other: ";
        }
    }
    
    cout << "\t\t\t\tEnter your date of birth, first enter day of month you were born (dd): ";
    while (!validday) {
        cin >> bday;
        validday = valideint(bday, 0, 32);
        if (!validday) {
            cout << "\t\t\t\tInvalid entry, please enter day of month you were born (dd): ";
        }
    }
    cout << "\t\t\t\tEnter the month you were born (mm): ";
    while (!validmonth) {
        cin >> bmonth;
        validmonth = valideint(bmonth, 0, 13);
        if (!validmonth) {
            cout << "\t\t\t\tInvalid entry, please enter the month you were born (mm): ";
        }
    }
    cout << "\t\t\t\tEnter the year you were born (yyyy): ";
    while (!validyear) {
        cin >> byear;
        validyear = valideint(byear, 1900, 2023);
        if (!validyear) {
            cout << "\t\t\t\tInvalid entry, please enter the year you were born (yyyy): ";
        }
    }
    int dob = bday * 1000000 + bmonth * 10000 + byear;
    cout << "\t\t\t\tenter a contact number: ";
    string contactnum;
    cin >> contactnum;
    cout << "\t\t\t\tplease enter your email address: ";
    while (!validemail) {
        cin >> email;
        validemail = validestring(2, email);
        if (!validemail) {
            cout << "\t\t\t\tInvalid entry, please enter a valid email address: ";
        }
    }
    cout << "\t\t\t\tplease enter your credit card details.\n\t\t\t\tFirst, please enter the 16 digit card number: ";
    while (!validcardnum) {
        cin >> cardnum;
        validcardnum = validecard(cardnum, 999999999999999, 10000000000000000);
        if (!validcardnum) {
            cout << "\t\t\t\tInvalid entry, please enter a valid 16 digit card number: ";
        }
    }
    cout << "\t\t\t\tPlease enter the cards expiry date (mmyy): ";
    while (!validcardexp) {
        cin >> cardexp;
        validcardexp = validecardexp(cardexp);
        if (!validcardexp) {
            cout << "\t\t\t\tInvalid entry, please enter a valid expiry date (mmyy): ";
        }
    }
    cout << "\t\t\t\tPlease enter the 3 digit CVV number on the back of your card: ";
    while (!validcardcvv) {
        cin >> cardcvv;
        validcardcvv = valideint(cardcvv, 99, 1000);
        if (!validcardcvv) {
            cout << "\t\t\t\tInvalid entry, please enter the 3-digit CVV number: ";
        }
    }
    if (staffparent == 1) {
        writetofile("parent", 0, 0, 0);
    }
    else if (staffparent == 2) {
        writetofile("staff", 0, 0, 0);
    }
    writetofile(username, 0, 0, 0);
    writetofile(password, 0, 0, 0);
    writetofile(firstname, 0, 0, 0);
    writetofile(lastname, 0, 0, 0);
    writetofile(gen, 0, 0, 0);
    writetofile("pass", dob, 0, 0);
    writetofile(contactnum, 0, 0, 0);
    writetofile(email, 0, 0, 0);
    writetofile(to_string(cardnum), 0, 0, 0);
    writetofile("pass", cardexp, 0, 0);
    writetofile("pass", cardcvv, 0, 1); // when user gets to en of registration then enter all values into user file
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
    cout << "\t\t\t\tenter your username or type b to go back: ";
    while (!userexists) { // check username exists
        cin >> username;
        if (username == "b") { // go back if user enters b
            return;
        }
        userexists = searchuser(username);
        if (!userexists) {
            cout << "\t\t\t\tThat username does not exist, please enter your username or enter b to go back: ";
        }
    }
    while (!match) { // user to enter new password and retype it to confirm.
        string confirm;
        cout << "\t\t\t\tEnter new password: ";
        cin >> password;
        cout << "\t\t\t\tconfirm your password: ";
        cin >> confirm;
        if (password != confirm) {
            cout << "\t\t\t\tSorry, that is not a match.\n";
        }
        else {
            cout << "\t\t\t\tYour password has been set.\n";
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
// Morgan finish

//Nicki start
//restaurant menu system
//__________________________________________________________________________

//using namespace std;
void restaurant() {
    int option, order, payment, complaint, bookingdiscounttype = 0;
    char choice, confirmorder, continuepaying;
    bool keepgoing = true, correctcvv = false;
    string cvv, usercomplaint;

    cout << endl;
    cout << "\t\t\t\t-------------------food ordering system-------------------" << endl;// once logged in display this menu for ordering etc
    cout << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t|                    main menu                                 |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t| 1. order food/view menu                                      |" << endl;
    cout << "\t\t\t\t| 2. make complaint                                            |" << endl;
    cout << "\t\t\t\t| 3. bulk payment                                              |" << endl;
    cout << "\t\t\t\t| 4. update details                                            |" << endl;
    cout << "\t\t\t\t| 5. logout                                                    |" << endl;
    cout << "\t\t\t\t|--------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t please input your choice: "; 
    cin >> option;
    cout << endl;

    switch (option)
    {
    case 1:
    {
        // weekly menu
        int orderchoice = 0;
        cout << endl;
        cout << "\t\t\t\t1. add order" << endl;
        cout << "\t\t\t\t2. remove order" << endl;
        cout << "\t\t\t\t3. print meal details" << endl;
        cout << "\t\t\t\t4. checkout" << endl;
        cout << "\t\t\t\t5. exit" << endl;
        cout << "\t\t\t\tchoose an option: ";
        cin >> order;
        cout << endl;

        switch (order)
        {
        case 1:

            while (orderchoice != 1 && orderchoice != 2 && orderchoice != 3 && orderchoice != 4 && orderchoice != 5 && orderchoice != 6) {
                cout << "\t\t\t\tavailable menu: ";
                cout << endl;
                cout << "\t\t\t\t1. spinach salad" << endl;
                cout << "\t\t\t\t2. pulled pork" << endl;
                cout << "\t\t\t\t3. spaghetti bolognese" << endl;
                cout << "\t\t\t\t4. chicken fried rice" << endl;
                cout << "\t\t\t\t5. veggie burger" << endl;
                cout << "\t\t\t\t6. grilled cheese" << endl;
                cout << endl;
                cout << "\t\t\t\tplease select your preffered menu: ";
                cin >> orderchoice;
                addorder(userloggedin, orderchoice); // add users order to order file
                cout << endl;
                restaurant();
            }
            break;
        case 2:
            int ordernumtoremove;
            displayorders(userloggedin.username);
            cout << "\t\t\t\tSelect the number order you want to remove: ";
            cin >> ordernumtoremove;
            removeitem(userloggedin.username, ordernumtoremove); // remove selected user order
            restaurant();
            break;
        case 3:
            displayorders(userloggedin.username); // shows user their current orders/cart
            restaurant();
            break;
        case 4:
            checkout(userloggedin, userloggedin.username);
            cout << "\t\t\twould you like to purchase this order with your registered card (enter y to confirm)? ";
            cin >> confirmorder;
            if (confirmorder == 'y') {
                while (!correctcvv) {
                    cout << "\t\t\t\tplease enter your 3 digit cvv number: ";
                    cin >> cvv;
                    if (cvv == userloggedin.usercard.cvv) { // user enters their cvv number to purchase their order
                        cout << "\t\t\t\tThank you, enjoy your meal.\n\n";
                        removeallorders(userloggedin.username);
                        main();
                        correctcvv = true;
                        break;
                    }
                    else {
                        cout << "\t\t\t\tThat is not the correct cvv number for your card, try again? (y to continue)"; // if they get cvv number wrong they can try again or go back
                        cin >> continuepaying;
                        if (continuepaying == 'y') {

                        }
                        else {
                            cout << "\t\t\t\tWhat would you like to do next? \n";
                            restaurant();
                            break;
                        }
                    }
                }
            }
            else {
                cout << "\t\t\t\tWhat would you like to do next? \n";
                restaurant();
            }
            break;
        case 5:
            restaurant(); // go back
            break;
        }
    }break;
    case 2:
    {
        cout << "\n\n\t\t\t\t-----------------make complaint------------------" << endl;
        cout << endl;
        cout << "\t\t\t\tmake complaint on :" << endl;
        cout << endl;
        cout << "\t\t\t\t1. food related" << endl; //user can make complaint
        cout << "\t\t\t\t2. service related" << endl;
        cout << "\t\t\t\t3. others" << endl;
        cout << "\t\t\t\tchoose an option: ";
        cin >> complaint;
        cout << endl;
        switch (complaint)
        {
        case 1:
            cout << "\t\t\t\tplease elaborate on your complaint: ";
            cin >> usercomplaint;
            cout << endl;
            cout << "\t\t\t\tThank you for contacting us, we may get in touch to discuss further on " << userloggedin.contactnumber << endl;
            cout << "\t\t\t\tenjoy the rest of your day" << endl;
            break;

        case 2:
            cout << "\t\t\t\tplease elaborate on your complaint: ";
            cin >> usercomplaint;
            cout << endl;
            cout << "\t\t\t\tThank you for contacting us, we may get in touch to discuss further on " << userloggedin.contactnumber << endl;
            cout << "\t\t\t\tenjoy the rest of your day" << endl;
            break;
        case 3:
            cout << "\t\t\t\tplease elaborate on your complaint: ";
            cin >> usercomplaint;
            cout << endl;
            cout << "\t\t\t\tThank you for contacting us, we may get in touch to discuss further on " << userloggedin.contactnumber << endl;
            cout << "\t\t\t\tenjoy the rest of your day" << endl;
            break;
        }
    }
    break;
    case 3:
    {
        // bulk payment
        cout << "\n\n\t\t\t\t-----bulk booking discount-----" << endl;
        cout << endl;
        cout << "1.\t\t\t\t\t2.\t\t\t\t\t3." << endl;
        cout << "gold ticket\t\t\t\tsilver ticket\t\t\t\tbronze ticket" << endl;
        cout << "-------------\t\t\t\t-------------\t\t\t\t--------------" << endl;
        cout << "pay for 30 days and receive a \t\tpay for 15 days and receive a \t\tpay for 7 days and receive a" << endl;
        cout << "\n15% discount\t\t\t\t10% discount\t\t\t\t5% discount" << endl;
        cout << endl;
        cout << "\nwithout ticket : $175\t\t\twithout ticket : $125\t\t\twithout ticket : $75" << endl;
        cout << "\nwith ticket : $148.75\t\t\twith ticket : $112.50\t\t\twith ticket : $71.25" << endl;
        cout << "\nyou save: $26.25\t\t\tyou save: $12.50\t\t\tyou save: $3.75" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\torder ticket";
        cout << endl;
        cout << "\t\t\t\t1. gold" << endl;
        cout << "\t\t\t\t2. silver" << endl;
        cout << "\t\t\t\t3. bronze" << endl;
        cout << "\t\t\t\t4. exit" << endl;
        cout << endl;
        cout << "\t\t\t\tplease choose ticket you would like to purchase:  "; // user can select their choice of bulk order deals
        cin >> bookingdiscounttype;
        cout << endl;

        switch (bookingdiscounttype)
        {
        case 1:
            cout << "\t\t\t\tYou selected the golden ticket" << endl;
            cout << "\t\t\t\tcost: $148.75" << endl;
            cout << "\t\t\t\tDiscount: 15% for 30 days" << endl;
            cout << endl;
            break;
        case 2:
            cout << "\t\t\t\tYou selected the silver ticket" << endl;
            cout << "\t\t\t\tcost: $112.5" << endl;
            cout << "\t\t\t\tDiscount: 10% for 15 days" << endl;
            cout << endl;
            break;
        case 3:
            cout << "\t\t\t\tYou selected the golden ticket" << endl;
            cout << "\t\t\t\tcost: $71.25" << endl;
            cout << "\t\t\t\tDiscount: 5% for 7 days" << endl;
            cout << endl;
            break;
        case 4:
            restaurant();
            return;
        }
        cout << "\t\t\twould you like to purchase this ticket with your registered card (enter y to confirm)? "; // user to confirm with cvv number to checkout
        cin >> confirmorder;
        if (confirmorder == 'y') {
            while (!correctcvv) {
                cout << "\t\t\t\tplease enter your 3 digit cvv number: ";
                cin >> cvv;
                if (cvv == userloggedin.usercard.cvv) {
                    cout << "\t\t\t\tThank you, enjoy your meal.\n\n";
                    removeallorders(userloggedin.username);
                    main();
                    correctcvv = true;
                    break;
                }
                else {
                    cout << "\t\t\t\tThat is not the correct cvv number for your card, try again? (y to continue)";
                    cin >> continuepaying;
                    if (continuepaying == 'y') {

                    }
                    else {
                        cout << "\t\t\t\tWhat would you like to do next? \n";
                        restaurant();
                        break;
                    }
                }
            }
        }
        else {
            cout << "\t\t\t\tWhat would you like to do next? \n";
            restaurant();
        }
    }
    break;
    case 4:
        while (keepgoing) {
            keepgoing = userupdate(userloggedin.username); // update detail user selects, they can update more details if they choose
        }
        restaurant();
        break;
    case 5:
        main();
        break;
    }
}
//nicki finish

//Morgan start
//order food functions
//______________________________________________________________________________________________________________

void addorder(user username, int menuchoice) { // function to add order to orders file
    fstream orderfile;
    orderfile.open("orders.csv", fstream::app);

    if (menuchoice == 1) {
        orderfile << username.username << ",";
        orderfile << "1,";
        orderfile << "$9.95\n";
    }
    else if (menuchoice == 2) {
        orderfile << username.username << ",";
        orderfile << "2,";
        orderfile << "$7.95\n";
    }
    else if (menuchoice == 3) {
        orderfile << username.username << ",";
        orderfile << "3,";
        orderfile << "$6.50\n";
    }
    else if (menuchoice == 4) {
        orderfile << username.username << ",";
        orderfile << "4,";
        orderfile << "$8.00\n";
    }
    else if (menuchoice == 5) {
        orderfile << username.username << ",";
        orderfile << "5,";
        orderfile << "$7.50\n";
    }
    else if (menuchoice == 6) {
        orderfile << username.username << ",";
        orderfile << "6,";
        orderfile << "$6.00\n";
    }
    else {
        cout << "\t\t\t\tSorry, " << menuchoice << " is not an order number on our menu.";
    }
    orderfile.close();
}

void displayorders(string username) { // function to display users orders
    ifstream readorders;
    readorders.open("orders.csv");
    string user, ordernumber, price;
    int count = 1;

    while (getline(readorders, user, ',')) {
        getline(readorders, ordernumber, ',');
        getline(readorders, price, '\n');
        if (user == username) { // to display only this users details
            cout << "\t\t\t\torder #" << count << "\n";
            cout << "\t\t\t\tuser: " << user << "\n";
            switch (stoi(ordernumber))
            {
            case 1:
                cout << "\t\t\t\tMeal: Spinach salad\n";
                break;
            case 2:
                cout << "\t\t\t\tMeal: Pulled pork\n";
                break;
            case 3:
                cout << "\t\t\t\tMeal: Spaghetti bolognese\n";
                break;
            case 4:
                cout << "\t\t\t\tMeal: Chicken fried rice\n";
                break;
            case 5:
                cout << "\t\t\t\tMeal: Veggie burger\n";
                break;
            case 6:
                cout << "\t\t\t\tMeal: Grilled cheese\n";
                break;
            default:
                break;
            }
            cout << "\t\t\t\tPrice: " << price << "\n\n";
            count++;
        }
    }
    readorders.close();
}

void removeitem(string username, int ordertoremove) { // function to remove an item from the order.
    ifstream readorders;
    ofstream writeorders;
    readorders.open("orders.csv");
    vector<string> getorders;
    string user, ordernumber, price;
    int count = 1;

    while (getline(readorders, user, ',')) {
        getline(readorders, ordernumber, ',');
        getline(readorders, price, '\n');
        if (user == username) {
            if (count != ordertoremove) { // when reachin the order user wants to remove will not add details to vector
                getorders.push_back(user); // add users orders
                getorders.push_back(",");
                getorders.push_back(ordernumber);
                getorders.push_back(",");
                getorders.push_back(price);
                getorders.push_back("\n");
            }
            count++; // increase to check against users order number
        }
        else {
            getorders.push_back(user); // other users orders to be written to vector so they stay in file unchanged
            getorders.push_back(",");
            getorders.push_back(ordernumber);
            getorders.push_back(",");
            getorders.push_back(price);
            getorders.push_back("\n");
        }
    }
    readorders.close();
    writeorders.open("orders.csv");
    vector<string> ::iterator i;
    for (i = getorders.begin(); i != getorders.end(); i++) {
        writeorders << *i;
    }
    writeorders.close(); // write updated orders list back to file
}

//user update function
//______________________________________________________________________________________________________________

bool userupdate(string username) { //when user selects to update details goes to this
    int userchoice;
    bool keepgoing = true;
    ifstream readfile;
    ofstream writefile;
    readfile.open("user.csv");
    vector<string> storevalues;// vector to store values
    string type, usern, passwd, fname, lname, gender, dob, contactnum, email, cardnum, cardexp, cardcvv;

    cout << "\t\t\t\t __________________________________\n";
    cout << "\t\t\t\t| What would you like to update?   |\n";
    cout << "\t\t\t\t|__________________________________|\n";
    cout << "\t\t\t\t| 1. Name                          |\n";
    cout << "\t\t\t\t| 2. Gender                        |\n";
    cout << "\t\t\t\t| 3. Date of birth                 |\n";
    cout << "\t\t\t\t| 4. Contact number                |\n";
    cout << "\t\t\t\t| 5. Email address                 |\n";
    cout << "\t\t\t\t| 6. Card details                  |\n";
    cout << "\t\t\t\t| 7. Back                          |\n";
    cout << "\t\t\t\t|__________________________________|\n\n";
    cout << "\t\t\t\t";

    cin >> userchoice;
    if (userchoice == 7) {
        readfile.close();
        return false; // if user selects 7 go back
    }
    if (userchoice != 1 && userchoice != 2 && userchoice != 3 && userchoice != 4 && userchoice != 5 && userchoice != 6) {
        cout << "\t\t\t\tinvalid input, please enter corresponding number in list\n\n";
        readfile.close();
        userupdate(username);
        return false; // if invalid input
    }

    while (getline(readfile, type, ',')) { // read all values to the vector
        storevalues.push_back(type);
        storevalues.push_back(",");
        getline(readfile, usern, ',');
        storevalues.push_back(usern);
        storevalues.push_back(",");
        getline(readfile, passwd, ',');
        storevalues.push_back(passwd);
        storevalues.push_back(",");
        getline(readfile, fname, ',');
        if (userchoice == 1 && username == usern) { // if user selects 1 change first name
            string newname;
            cout << "\t\t\t\tenter the new first name: ";
            cin >> newname;
            storevalues.push_back(newname);
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(fname);
            storevalues.push_back(",");
        }
        getline(readfile, lname, ',');
        if (userchoice == 1 && username == usern) { //if user selects 1 change last name
            string newname;
            cout << "\t\t\t\tenter your new last name: ";
            cin >> newname;
            storevalues.push_back(newname);
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(lname);
            storevalues.push_back(",");
        }
        getline(readfile, gender, ',');
        if (userchoice == 2 && username == usern) { // if user selects 2 change gender
            string gen;
            bool validgen = false;
            cout << "\t\t\t\tenter your gender: ";
            while (!validgen) {
                cin >> gen;
                cin.ignore();
                validgen = validestring(1, gen);
                if (!validgen) {
                    cout << "\t\t\t\tInvalid entry, please enter male, female or other: ";
                }
            }
            storevalues.push_back(gen);
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(gender);
            storevalues.push_back(",");
        }
        getline(readfile, dob, ',');
        if (userchoice == 3 && username == usern) { // if user selects 3 change their date of birth
            bool validday = false;
            bool validmonth = false;
            bool validyear = false;
            int bday;
            int bmonth;
            int byear;
            cout << "\t\t\t\tEnter the day you were born (dd): ";
            while (!validday) {
                cin >> bday;
                validday = valideint(bday, 0, 32);
                if (!validday) {
                    cout << "\t\t\t\tInvalid entry, please enter day of month you were born (dd): ";
                }
            }
            cout << "\t\t\t\tEnter the month you were born (mm): ";
            while (!validmonth) {
                cin >> bmonth;
                validmonth = valideint(bmonth, 0, 13);
                if (!validmonth) {
                    cout << "\t\t\t\tInvalid entry, please enter the month you were born (mm): ";
                }
            }
            cout << "\t\t\t\tEnter the year you were born (yyyy): ";
            while (!validyear) {
                cin >> byear;
                validyear = valideint(byear, 1900, 2023);
                if (!validyear) {
                    cout << "\t\t\t\tInvalid entry, please enter the year you were born (yyyy): ";
                }
            }
            int dofb = bday * 1000000 + bmonth * 10000 + byear;
            storevalues.push_back(to_string(dofb));
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(dob);
            storevalues.push_back(",");
        }
        getline(readfile, contactnum, ',');
        if (userchoice == 4 && username == usern) { // if user selects 4 change phone number.
            string newnum;
            cout << "\t\t\t\tEnter your new number: ";
            cin >> newnum;
            storevalues.push_back(newnum);
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(contactnum);
            storevalues.push_back(",");
        }
        getline(readfile, email, ',');
        if (userchoice == 5 && username == usern) { // if user selects 5 change email address
            bool validemail = false;
            string newemail;
            cout << "\t\t\t\tplease enter your new email address: ";
            while (!validemail) {
                cin >> newemail;
                validemail = validestring(2, newemail);
                if (!validemail) {
                    cout << "Invalid entry, please enter a valid email address: ";
                }
            }
            storevalues.push_back(newemail);
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(email);
            storevalues.push_back(",");
        }
        getline(readfile, cardnum, ',');
        if (userchoice == 6 && username == usern) { // if user selects 6 change card details
            bool validcardnum = false;
            long long int newcardnum;
            cout << "\t\t\t\tplease enter your new credit card details.\n\t\t\t\tFirst, please enter the 16 digit card number: ";
            while (!validcardnum) {
                cin >> newcardnum;
                validcardnum = validecard(newcardnum, 999999999999999, 10000000000000000);
                if (!validcardnum) {
                    cout << "\t\t\t\tInvalid entry, please enter a valid 16 digit card number: ";
                }
            }
            storevalues.push_back(to_string(newcardnum));
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(cardnum);
            storevalues.push_back(",");
        }
        getline(readfile, cardexp, ',');
        if (userchoice == 6 && username == usern) {
            bool validcardexp = false;
            int newcardexp;
            cout << "\t\t\t\tPlease enter the new cards expiry date (mmyy): ";
            while (!validcardexp) {
                cin >> newcardexp;
                validcardexp = valideint(newcardexp, 522, 1333);
                if (!validcardexp) {
                    cout << "\t\t\t\tInvalid entry, please enter a valid expiry date (mmyy): ";
                }
            }
            storevalues.push_back(to_string(newcardexp));
            storevalues.push_back(",");
        }
        else {
            storevalues.push_back(cardexp);
            storevalues.push_back(",");
        }
        getline(readfile, cardcvv, '\n');
        if (userchoice == 6 && username == usern) {
            bool validcardcvv = false;
            int newcardcvv;
            cout << "\t\t\t\tPlease enter the new 3 digit CVV number on the back of your card: ";
            while (!validcardcvv) {
                cin >> newcardcvv;
                validcardcvv = valideint(newcardcvv, 99, 1000);
                if (!validcardcvv) {
                    cout << "\t\t\t\tInvalid entry, please enter the 3-digit CVV number: ";
                }
            }
            storevalues.push_back(to_string(newcardcvv));
            storevalues.push_back("\n");
        }
        else {
            storevalues.push_back(cardcvv);
            storevalues.push_back("\n");
        }
    }
    readfile.close();
    writefile.open("user.csv");

    vector<string> ::iterator i;
    for (i = storevalues.begin(); i != storevalues.end(); i++) {
        writefile << *i;
    }
    writefile.close(); // write everything to user file with change made.
    char usercontinue;
    cout << "\t\t\t\twould you like to update anymore details (y or n)?";
    cin >> usercontinue;
    if (usercontinue == 'y') {
        return true;
    }
    else if (usercontinue == 'n') {
        return false;
    }
    else {
        return true;
    }
}

void checkout(user loggedinuser, string usern) {
    ifstream readfile;
    readfile.open("orders.csv");
    string username, ordernumber, price;
    float total = 0.0;

    while (getline(readfile, username, ',')) {
        getline(readfile, ordernumber, ',');
        getline(readfile, price, '\n');
        if (username == usern) {
            if (ordernumber == "1") {
                total += 9.95;
            }
            if (ordernumber == "2") {
                total += 7.95;
            }
            if (ordernumber == "3") {
                total += 6.50;
            }
            if (ordernumber == "4") {
                total += 8.00;
            }
            if (ordernumber == "5") {
                total += 7.50;
            }
            if (ordernumber == "6") {
                total += 6.00;
            }
        }
    }
    
    cout << "\t\t\t\tthe orders in your carts are: \n";
    displayorders(loggedinuser.username);
    cout << "\t\t\t\ttotal:\n";
    cout << "\t\t\t________________________________________________________________________________________\n";
    cout << "\t\t\t\t$" << total << "\n\n";
    readfile.close();
}

void removeallorders(string username) { // when user buys their order all their orders will be cleared out of the orders file.
    ifstream readorders;
    ofstream writeorders;
    readorders.open("orders.csv");
    vector<string> getorders;
    string user, ordernumber, price;
    int count = 1;

    while (getline(readorders, user, ',')) {
        getline(readorders, ordernumber, ',');
        getline(readorders, price, '\n');
        if (user == username) {
        }
        else {
            getorders.push_back(user); // other users orders to be written to vector so they stay in file unchanged
            getorders.push_back(",");
            getorders.push_back(ordernumber);
            getorders.push_back(",");
            getorders.push_back(price);
            getorders.push_back("\n");
        }
    }
    readorders.close();
    writeorders.open("orders.csv");
    vector<string> ::iterator i;
    for (i = getorders.begin(); i != getorders.end(); i++) {
        writeorders << *i;
    }
    writeorders.close(); // write updated orders list back to file
}
// Morgan Finish
