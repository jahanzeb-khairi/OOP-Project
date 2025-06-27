#include <iostream>
#include <iomanip>
#include <string>
#include<windows.h>
using namespace std;
class Cancellation
{
    string name[3] = { "jahanzeb","usman","cornelia" };
    string TID[3] = { "4746","4708","789" };
    char row[3] = { 'A','C' ,'E' };
    int seat[3] = { 2,3,1 };
public:
    void edit(int** arr, char a, int b)
    {
        if (arr[(int(a) - 65)][b - 1] == 1)
        {
            arr[(int(a) - 65)][b - 1] -= 1;
            Sleep(400);
            cout << "Cancellation Successful." << endl;
        }
    }
    void Cancel(string a, int** arr1, int** arr2, int** arr3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a == TID[i])
            {
                Sleep(400);
                cout << "Reservation Found!\nName: " << name[i] << endl;
                Sleep(400);
                cout << "Ticket ID: " << TID[i] << endl;
                if (TID[i] == "22k-4746")
                    cout << "Evening Flight for Islamabad" << endl;
                else if (TID[i] == "123")
                    cout << "Morning Flight for Shanghai" << endl;
                else if (TID[i] == "789")
                    cout << "Evening Flight for Shanghai" << endl;
                Sleep(400);
                cout << "Row: " << row[i] << endl;
                Sleep(400);
                cout << "Seat No: " << seat[i] << endl;
                cout << endl;
                if (TID[i] == "4746")
                {
                    edit(arr1, row[i], seat[i]);
                    break;
                }
                else if (TID[i] == "4708")
                {
                    edit(arr2, row[i], seat[i]);
                    break;
                }
                else if (TID[i] == "789")
                {
                    edit(arr3, row[i], seat[i]);
                    break;
                }
            }
            else
            {
                if (i == 2)
                {
                    Sleep(400);
                    cout << "No match found." << endl;
                }
                continue;
            }
        }
    }
};
class Booking
{
    string name;
    string ID;
public:
    void setname()
    {
        Sleep(400);
        cout << "Enter Name: ";
        cin >> name;
        cout << endl;
    }
    string getname()
    {
        return name;
    }
    void setID()
    {
        Sleep(400);
        cout << "Enter ID: ";
        cin >> ID;
        cout << endl;
    }
    string getID()
    {
        return ID;
    }
    void Display(int** arr)
    {
        Sleep(400);
        cout << setw(52) << "AVAILABLE SEATS" << endl;
        cout << setw(61) << "( A for Available / R for Reserved )" << endl;
        cout << endl << endl << endl << endl;
        int b1 = 0, b2 = 0;
        char a = 'A';
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "        -------" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "      -----------" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "    ---------------" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "   |--___________--|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "  |--|    | |    |--|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << " |-------------------|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << " |-------------------|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << " |---1-2-3-----4-5-6-|" << endl;
        for (int i = 0; i < 15; i++)
        {
            if (i == 6)
                continue;
            else if (i == 8)
                continue;
            else
            {
                if (i < 7)
                {
                    for (int l = 6; l >= i; l--)

                        cout << "    ";
                    for (int k = 0; k <= i; k++)
                        cout << "____";
                }
                if (i == 7)
                    cout << "             (^)      (^)       ";
                if (i > 7)
                    cout << "                                ";
                cout << " |";
                cout << a << "=";
                b2 = 0;
                for (int j = 0; j < 7; j++)
                {
                    if (j == 3)
                        cout << "    ";
                    else
                    {
                        if (arr[b1][b2] == 1)
                            cout << " R";
                        else
                            cout << " A";
                        b2++;
                    }
                }
                b1++;
                a++;
                cout << " |";
                if (i < 7)
                {
                    for (int k = 0; k <= i; k++)
                        cout << "____";
                }
                if (i == 7)

                    cout << "      (^)      (^)       ";
                cout << endl;
            }
        }
        Sleep(100);
        cout << "                        ________";
        Sleep(100);
        cout << " |-------------------|" << "________" << endl;
        Sleep(100);
        cout << "                           _____";
        Sleep(100);
        cout << " |-------------------|" << "_____" << endl;
        Sleep(100);
        cout << "                            (^) ";
        Sleep(100);
        cout << " |-------------------|" << " (^)     " << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "  |-----------------|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "   |---------------|" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "    ---------------" << endl;
        Sleep(100);
        cout << "                                ";
        Sleep(100);
        cout << "      -----------" << endl;
        book(arr);
    }
    void book(int** arr)
    {
        char row;
        int seat;
        int ttype;
        Sleep(400);
        cout << "Enter Row (A,B,...,M): ";
        cin >> row;
        cout << endl;
        Sleep(400);
        cout << "Enter Seat No: ";
        cin >> seat;
        cout << endl;
        system("CLS");
        Sleep(400);
        cout << "Enter Ticket type:--" << endl;
        cout << "--------------------------------------" << endl << endl << endl;
        Sleep(400);
        cout << "1)Basic" << endl;
        cout << "Baggage Weight Alowwed: 10 KG (Hand Carry Only)" << endl;
        cout << "No Food services" << endl;
        cout << "No Cancellation" << endl;
        cout << "No Modifications" << endl << endl << endl;
        Sleep(400);
        cout << "2)Value" << endl;
        cout << "Baggage Weight Alowwed: 30 KG (Luggage) & 10 KG (Hand Carry)" << endl;
        cout << "Food: Sandwich and Water" << endl;
        cout << "Cancellation Alllowed" << endl;
        cout << "Modifications Allowed" << endl << endl << endl;
        Sleep(400);
        cout << "3)Extra" << endl;
        cout << "Baggage Weight Alowwed: 40 KG (Luggage) & 10 KG (Hand Carry)" << endl;
        cout << "Food: Any meal of choice" << endl;
        cout << "Cancellation Alllowed" << endl;
        cout << "Modifications Allowed" << endl << endl << endl;
        cout << "Enter Ticket type No: ";
        cin >> ttype;
        cout << endl;
        setname();
        setID();
        system("CLS");
        if (arr[(int(row) - 65)][seat - 1] == 0)
        {
            arr[(int(row) - 65)][seat - 1] += 1;
            Sleep(400);
            cout << "--------Booking Successful !--------" << endl;
            Sleep(400);
            cout << "Customer Name: " << name << endl;
            Sleep(400);
            cout << "Customer ID: " << ID << endl;
            Sleep(400);
            cout << "Row: " << row << endl;
            Sleep(400);
            cout << "Seat No: " << seat << endl;
            if (ttype == 1)
            {
                cout << "Ticket Type: Basic" << endl;
            }
            else if (ttype == 2)
            {
                cout << "Ticket Type: Value" << endl;
            }
            else if (ttype == 3)
            {
                cout << "Ticket Type: Extra" << endl;
            }
        }
        else

            cout << "--------Seat Already Reserved !--------";
    }
};
class AirFast : protected Booking, protected Cancellation
{
    int dom1[13][6] = { {1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{0,0,0,0,0,0} };
    int dom2[13][6] = { {1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,1,1,0,0},{1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,1,1,0,0},{1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,0,0,0,0},{0,0,0,0,0,0} };
    int dom3[13][6] = { {1,0,1,0,1,1},{0,0,0,1,1,0},{0,0,1,1,1,1},
         {1,0,1,0,1,1},{1,1,0,1,1,1},{0,1,1,0,1,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {1,1,1,1,1,1},{1,1,1,0,0,0} };
    int intr1[13][6] = { {1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,1,1,0,0},{1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,1,1,0,0},{1,1,0,0,1,1},{0,0,1,1,0,0},{1,1,0,0,1,1},
         {0,0,0,0,0,0},{0,0,0,0,0,0} };
    int intr2[13][6] = { {1,0,1,0,1,1},{0,0,0,1,1,0},{0,0,1,1,1,1},
         {1,0,1,0,1,1},{1,1,0,1,1,1},{0,1,1,0,1,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {1,1,1,1,1,1},{1,1,1,0,0,0} };
    int intr3[13][6] = { {1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{1,1,1,1,1,1},{0,0,0,0,0,0},{1,1,1,1,1,1},
         {0,0,0,0,0,0},{0,0,0,0,0,0} };
public:
    int** getdom1()
    {
        int** arr1 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr1[i] = new int[13];
            for (int j = 0; j < 6; j++)
            {
                arr1[i][j] = dom1[i][j];
            }
        }
        return arr1;
    }
    int** getdom2()
    {
        int** arr2 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr2[i] = new int[13];
            for (int j = 0; j < 6; j++)
            {
                arr2[i][j] = dom2[i][j];
            }
        }
        return arr2;
    }
    int** getdom3()
    {
        int** arr3 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr3[i] = new int[13];
            for (int j = 0; j < 6; j++)
            {
                arr3[i][j] = dom3[i][j];
            }
        }
        return arr3;
    }
    int** getintr1()
    {
        int** arr4 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr4[i] = new int[13];
            for (int j = 0; j < 6; j++)
            {
                arr4[i][j] = intr1[i][j];
            }
        }
        return arr4;
    }
    int** getintr2()
    {
        int** arr5 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr5[i] = new int[6];
            for (int j = 0; j < 6; j++)
            {
                arr5[i][j] = intr2[i][j];
            }
        }
        return arr5;
    }
    int** getintr3()
    {
        int** arr6 = new int* [13];
        for (int i = 0; i < 13; i++)
        {
            arr6[i] = new int[13];
            for (int j = 0; j < 6; j++)
            {
                arr6[i][j] = intr3[i][j];
            }
        }
        return arr6;
    }
    void FLY()
    {
        T:
        int option1, option2, option3;
        Sleep(400);
        cout << setw(52) << "WELCOME TO AIRFAST" << endl;
        Sleep(400);
        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "We welcome you to fly with us from Karachi. Our services include:--" << endl;
        Sleep(400);
        cout << "1)Booking a flight." << endl;
        Sleep(400);
        cout << "2)Cancel a booking." << endl;
        Sleep(400);
        cout << "3)Delay a booking." << endl;
        Sleep(400);
        cout << "4)Change a booking to a earlier time." << endl;
        cout << endl << endl << endl;
        Sleep(400);
        cout << "Enter option:";
        cin >> option1;
        cout << endl;
        system("CLS");
        Sleep(300);

        if (option1 == 1)
        {
            cout << "DESTINATIONS:--" << endl;
            cout << "----------------------------------------" << endl;
            cout << "1) Islamabad " << endl;
            cout << "2) Shanghai " << endl;
            cout << "Enter option: ";
            cin >> option2;
            cout << endl;
            system("CLS");
            Sleep(300);
            if (option2 == 1)
            {
                cout << "DESTINATION: Islamabad" << endl;
                cout << "Timings:--" << endl;
                cout << "1)Morning" << endl;
                cout << "2)Evening" << endl;
                cout << "3)Night" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                {
                    Display(getdom1());
                    goto T;
                }
                else if (option3 == 2)
                {
                    Display(getdom2());
                }
                else if (option3 == 3)
                {
                    Display(getdom3());
                }
            }

            else if (option2 == 2)
            {
                cout << "DESTINATION: Shanghai" << endl;
                cout << "Timings:--" << endl;
                cout << "1)Morning" << endl;
                cout << "2)Evening" << endl;
                cout << "3)Night" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                {
                    Display(getintr1());
                }
                else if (option3 == 2)
                {
                    Display(getintr2());
                }
                else if (option3 == 3)
                {
                    Display(getintr3());
                }
            }
        }
        else if (option1 == 2)
        {
            string n;
            Sleep(300);
            cout << "Enter Ticket Id: ";
            cin >> n;
            cout << endl;
            Cancel(n, getdom2(), getintr1(), getintr2());
        }
        else if (option1 == 3)
        {
            string n;
            Sleep(300);
            cout << "Enter Ticket Id: ";
            cin >> n;
            cout << endl;
            Cancel(n, getdom2(), getintr1(), getintr2());
            cout << endl << endl << endl;
            Sleep(300);
            if (n == "4746")
            {
                cout << "DESTINATION: Islamabad" << endl;
                cout << "Timings available:--" << endl;
                cout << "1)Night" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                    Display(getdom3());
            }

            else if (n == "4708")
            {
                cout << "DESTINATION: Shanghai" << endl;
                cout << "Timings available:--" << endl;
                cout << "1)Evening" << endl;
                cout << "2)Night" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                {
                    Display(getintr2());
                }
                else if (option3 == 2)
                {
                    Display(getintr3());
                }
            }
            else if (n == "789")
            {
                cout << "DESTINATION: Shanghai" << endl;
                cout << "Timings available:--" << endl;
                cout << "1)Night" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                {
                    Display(getintr3());
                }
            }
        }
        else if (option1 == 4)
        {

            string n;
            Sleep(300);
            cout << "Enter Ticket Id: ";
            cin >> n;
            cout << endl;
            Cancel(n, getdom2(), getintr1(), getintr2());
            cout << endl << endl << endl;
            Sleep(300);
            if (n == "4746")
            {
                cout << "DESTINATION: Islamabad" << endl;
                cout << "Timings available:--" << endl;
                cout << "1)Morning" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                    Display(getdom1());
            }

            else if (n == "4708")
            {
                Sleep(300);
                cout << "DESTINATION: Shanghai" << endl;
                cout << "No available flights" << endl;

            }
            else if (n == "789")
            {
                Sleep(300);
                cout << "DESTINATION: Shanghai" << endl;
                cout << "Timings available:--" << endl;
                cout << "1)Morning" << endl;
                cout << "Enter option: ";
                cin >> option3;
                cout << endl;
                system("CLS");
                if (option3 == 1)
                {
                    Display(getintr1());
                }
            }
        }
    }
    ~AirFast()
    {
        cout << endl << endl << endl;
        Sleep(400);
        cout << "Thank you for choosing AIRFAST." << endl;
    }
};
int main()
{
    system("COLOR 0A");
    AirFast y;
    y.FLY();
}
