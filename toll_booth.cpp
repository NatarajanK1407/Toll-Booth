#include <iostream>
using namespace std;
int total;

class tollAdmin
{
protected:
    struct lv
    {
        int single = 58;
        int returnTrip = 84;
        int dailyTrip = 148;
        int monthlyTrip = 3099;
    } lightVehicle;

    struct minibus
    {
        int single = 91;
        int returnTrip = 134;
        int dailyTrip = 240;
        int monthlyTrip = 2827;
    } miniBus;

    struct truckBus
    {
        int single = 172;
        int returnTrip = 251;
        int dailyTrip = 449;
        int monthlyTrip = 9330;
    } truckBus;

    struct _3axlComm
    {
        int single = 183;
        int returnTrip = 268;
        int dailyTrip = 482;
        int monthlyTrip = 9960;
    } axlCommVehi;

    struct mutiaxle
    {
        int single = 232;
        int returnTrip = 339;
        int dailyTrip = 608;
        int monthlyTrip = 12515;
    } multiAxle;
};

class tollBill : public tollAdmin
{
public:
    int trip;
    void type_of_travel()
    {
        cout << "                " << endl;
        cout << "1. Single" << endl;
        cout << "2. Two-Way" << endl;
        cout << "3. Daily Trip" << endl;
        cout << "4. Monthly Trip" << endl;
        cout << "Enter your preference : ";
        cin >> trip;
        cout << "\n";
    }
    void bill(int code)
    {

        if (code == 1)
        {
            if (trip == 1)
            {
                total = lightVehicle.single;
            }
            else if (trip == 2)
            {
                total = lightVehicle.returnTrip;
            }
            else if (trip == 3)
            {
                total = lightVehicle.dailyTrip;
            }
            else if (trip == 4)
            {
                total = lightVehicle.monthlyTrip;
            }
        }

        else if (code == 2)
        {
            if (trip == 1)
            {
                total = miniBus.single;
            }
            else if (trip == 2)
            {
                total = miniBus.returnTrip;
            }
            else if (trip == 3)
            {
                total = miniBus.dailyTrip;
            }
            else if (trip == 4)
            {
                total = miniBus.monthlyTrip;
            }
        }

        else if (code == 3)
        {
            if (trip == 1)
            {
                total = truckBus.single;
            }
            else if (trip == 2)
            {
                total = truckBus.returnTrip;
            }
            else if (trip == 3)
            {
                total = truckBus.dailyTrip;
            }
            else if (trip == 4)
            {
                total = truckBus.monthlyTrip;
            }
        }

        else if (code == 4)
        {
            if (trip == 1)
            {
                total = axlCommVehi.single;
            }
            else if (trip == 2)
            {
                total = axlCommVehi.returnTrip;
            }
            else if (trip == 3)
            {
                total = axlCommVehi.dailyTrip;
            }
            else if (trip == 4)
            {
                total = axlCommVehi.monthlyTrip;
            }
        }

        else if (code == 5)
        {
            if (trip == 1)
            {
                total = multiAxle.single;
            }
            else if (trip == 2)
            {
                total = multiAxle.returnTrip;
            }
            else if (trip == 3)
            {
                total = multiAxle.dailyTrip;
            }
            else if (trip == 4)
            {
                total = multiAxle.monthlyTrip;
            }
        }
        cout << "________" << endl;
        cout << "Amount payable : " << total << endl;
        cout << "________" << endl;
    }
};

int main()
{
    int arr[5] = {0};
    int totArr[5] = {0};
    int vehicle;
    string user;
    tollBill tollPlaza;
MENU:
    cout << "*******   TOLL BOOTH  *******" << endl;
    cout << "                                          " << endl;
    cout << "A. Toll Admin" << endl;
    cout << "B. Toll Biller" << endl;
    cout << "                                          " << endl;
    cout << "Enter your designation code : ";
    cin >> user;
    cout << "\n";
    if (user == "A")
    {
        string passkey;
        cout << "Enter the password : ";
        cin >> passkey;
        if (passkey != "admin")
        {
            exit(1);
        }
        while (true)
        {
            cout << "                                 " << endl;
            cout << "101. Summary of toll collection" << endl;
            cout << "102. Go Back" << endl;
            cout << "104. Exit"
                 << "\n"
                 << endl;
            int choice;
            cout << "Enter the code : ";
            cin >> choice;
            if (choice == 101)
            {
                cout << "                                                   " << endl;
                cout << "  Summary of vehicle movement across the toll !!  " << endl;
                cout << " _________________" << endl;
                cout << "1. Light Vehicles : " << arr[0] << "\nAmount Collected : " << totArr[0] << "\n"
                     << endl;
                cout << "2. Mini Bus : " << arr[1] << "\nAmount Collected : " << totArr[1] << "\n"
                     << endl;
                cout << "3. Truck / Bus : " << arr[2] << "\nAmount Collected : " << totArr[2] << "\n"
                     << endl;
                cout << "4. 3 Axle Commercial Vehicle : " << arr[3] << "\nAmount Collected : " << totArr[3] << "\n"
                     << endl;
                cout << "5. Multi Axle vehicle : " << arr[4] << "\nAmount Collected : " << totArr[4] << "\n"
                     << endl;
                int grandtotal;
                for (int i = 0; i < 5; i++)
                {
                    grandtotal = grandtotal + totArr[i];
                }
                cout << "Grand Total of Collection at the toll is : " << grandtotal << endl;
                cout << " _________________" << endl;
            }
            else if (choice == 102)
            {

                goto MENU;
            }
            else
            {
                exit(1);
            }
        }
    }
    else
    {
        cout << "1. Light Vehicle" << endl;
        cout << "2. Mini Bus" << endl;
        cout << "3. Truck / Bus" << endl;
        cout << "4. 3 Axle Commercial Vehicle" << endl;
        cout << "5. Multi Axle vehicle" << endl;
        cout << "104. Go back" << endl;
        cout << "105. Exit" << endl;
        cout << "-------------------------------------------" << endl;
        while (true)
        {
            cout << "Enter the code corresponding to the vehicle at the toll : ";
            cin >> vehicle;
            if (vehicle == 104)
            {
                goto MENU;
            }
            else if (vehicle == 105)
            {
                exit(1);
            }
            tollPlaza.type_of_travel();
            tollPlaza.bill(vehicle);
            totArr[vehicle - 1] = totArr[vehicle - 1] + total;
            arr[vehicle - 1]++;
        }
    }

    return 0;
}