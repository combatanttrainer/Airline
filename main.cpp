#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>

void mainMenu();

class  Management
{
public:
      Management()
      {
          mainMenu();
      }
};

class Details
{
public:
    static inline std::string name{}, gender{};
    int phoneNo{};
    int age{};
    std::string add{};
    static inline int Cid{};
    char arr[100];

    void information()
    {
        std::cout << "\nEnter the customer Id: ";
        std::cin >> Cid;
        std::cout << "\nEnter the name: ";
        std::cin >> name;
        std::cout << "\nEnter the age: ";
        std::cin >> age;
        std::cout << "\nAddress: ";
        std::cin >> add;
        std::cout << "\nGender: ";
        std::cin >> gender;
        std::cout << "Your details are saved with us\n";
    }
};

class registration
{
public:
    static inline int choice{};
    int choice1{};
    int back{};
    static inline float charges{};

    void flights()
    {
        std::string flightN[]={"Dubai" , "Canada" , "Uk" , "USA" , "Austrailia" , "europe" };

        for (int i=0 ; i < 6 ; i++)
        {
            std::cout << (i+1) << ".flight to " << flightN[i] << '\n';
        }
            std::cout << "\nWelcome to the airlines" << '\n';
            std::cout << "\t Press the number of the country of wich you want to book the flight: ";
            std::cin >> choice;

            switch (choice)
            {
                case 1:
                    {
                        std::cout << "\t_______________welcome to dubai emirates_______________\n";
                        std::cout << "\t    your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t  1.DBU - 498" << '\n';
                        std::cout << "\t05-23-2024 8:00AM 10hrs Rs.14000" << '\n';
                        std::cout << "\t  2.DBU - 658" << '\n';
                        std::cout << "\t06-23-2024 4:00AM 12hrs Rs.10000" << '\n';
                        std::cout << "\t  3.DBU - 508" << '\n';
                        std::cout << "\t05-23-2024 11:00AM 11hrs Rs.9000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 14000;
                            std::cout << "\nYou've successfully booked the flight DBU - 498" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 10000;
                            std::cout << "\nYou've successfully booked the flight DBU - 658" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 9000;
                            std::cout << "\nYou've successfully booked the flight DBU - 508" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                case 2:
                    {
                        std::cout << "\t_______________welcome to CANADA airlines_______________\n";
                        std::cout << "\t     your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t  1.CA - 198" << '\n';
                        std::cout << "\t05-23-2024 7:00PM 20hrs Rs.34000" << '\n';
                        std::cout << "\t  2.CA - 618" << '\n';
                        std::cout << "\t06-24-2024 4:00AM 22hrs Rs.30000" << '\n';
                        std::cout << "\t  3.CA - 538" << '\n';
                        std::cout << "\t07-23-2024 11:00AM 19hrs Rs.26000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 34000;
                            std::cout << "\nYou've successfully booked the flight CA - 198" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 30000;
                            std::cout << "\nYou've successfully booked the flight CA - 618" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 26000;
                            std::cout << "\nYou've successfully booked the flight CA - 538" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                case 3:
                    {
                        std::cout << "\t_______________welcome to UK airlines_______________\n";
                        std::cout << "\t       your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t  1.UK - 194" << '\n';
                        std::cout << "\t05-25-2024 9:00PM 13hrs Rs.19000" << '\n';
                        std::cout << "\t  2.UK - 318" << '\n';
                        std::cout << "\t06-05-2024 7:00AM 12.5hrs Rs.23000" << '\n';
                        std::cout << "\t  3.UK - 598" << '\n';
                        std::cout << "\t07-13-2024 1:00pM 14hrs Rs.15000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 19000;
                            std::cout << "\nYou've successfully booked the flight UK - 194" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 23000;
                            std::cout << "\nYou've successfully booked the flight UK - 318" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 15000;
                            std::cout << "\nYou've successfully booked the flight UK - 598" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                case 4:
                    {
                        std::cout << "\t_______________welcome to USA airlines_______________\n";
                        std::cout << "\t      your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t  1.US - 198" << '\n';
                        std::cout << "\t05-13-2024 8:00AM 18hrs Rs.33000" << '\n';
                        std::cout << "\t  2.US - 618" << '\n';
                        std::cout << "\t06-25-2024 6:00PM 21hrs Rs.29000" << '\n';
                        std::cout << "\t  3.US - 538" << '\n';
                        std::cout << "\t07-12-2024 10:00AM 19hrs Rs.24000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 33000;
                            std::cout << "\nYou've successfully booked the flight US - 198" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 29000;
                            std::cout << "\nYou've successfully booked the flight US - 618" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 24000;
                            std::cout << "\nYou've successfully booked the flight US - 538" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                case 5:
                    {
                        std::cout << "\t_______________welcome to USA airlines_______________\n";
                        std::cout << "\t     your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t  1.US - 298" << '\n';
                        std::cout << "\t05-15-2024 11:00AM 17hrs Rs.18000" << '\n';
                        std::cout << "\t  2.US - 678" << '\n';
                        std::cout << "\t06-06-2024 6:00PM 16hrs Rs.17000" << '\n';
                        std::cout << "\t  3.US - 533" << '\n';
                        std::cout << "\t07-27-2024 11:00AM 15hrs Rs.16000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 18000;
                            std::cout << "\nYou've successfully booked the flight US - 298" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 17000;
                            std::cout << "\nYou've successfully booked the flight US - 678" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 16000;
                            std::cout << "\nYou've successfully booked the flight US - 533" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                case 6:
                    {
                        std::cout << "\t_______________welcome to EUROPE airlines_______________\n";
                        std::cout << "\t\t      your comfort is our priority. Enjoy the jurny" << '\n';
                        std::cout << '\t' << "Following are the flights\n";
                        std::cout << "\t1.EU - 898" << '\n';
                        std::cout << "\t  05-23-2024 8:00AM 16hrs Rs.22000" << '\n';
                        std::cout << "\t2.EU - 611" << '\n';
                        std::cout << "\t  06-24-2024 5:00AM 17hrs Rs.20000" << '\n';
                        std::cout << "\t3.EU - 588" << '\n';
                        std::cout << "\t  07-23-2024 12:00pM 14hrs Rs.25000" << '\n';

                        std::cout << "\tSelect the flight you want to book: ";
                        std::cin >> choice1;

                        if (choice1==1)
                        {
                            charges = 22000;
                            std::cout << "\nYou've successfully booked the flight EU - 898" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 2)
                        {
                            charges = 20000;
                            std::cout << "\nYou've successfully booked the flight EU - 611" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else if (choice1 == 3)
                        {
                            charges = 25000;
                            std::cout << "\nYou've successfully booked the flight EU - 588" << '\n';
                            std::cout << "\t you can go back to the menu and take the ticket" << '\n';
                        }
                        else
                        {
                            std::cout << "Invalid input, shifting to the previous menu" << '\n';
                            flights();
                        }
                        std::cout << "\tPress 1 to go back to the main menu: ";
                        std::cin >> back;

                        if (back == 1)
                        {
                            mainMenu();
                        }
                        else
                        {
                             mainMenu();
                        }
                        break;
                    }
                default:
                    std::cout << "\tInvalid input, shiting to the man menu" << '\n';
                    mainMenu();
                    break;
            }
    }
};

class ticket : public registration , Details
{
public:
    void Bill()
    {
        std::string destination= " ";
        std::ofstream outf("records.txt");
        {
            outf << "\t_______SNA Airelines________\n";
            outf << "\t__________Ticket__________\n";
            outf << "\t__________________________\n";
            outf << "Customer Id: " << Details::Cid << '\n';
            outf << "Customer name: " << Details::name << '\n';
            outf << "Customer gender: " << Details::gender << '\n';
            outf << "\tDescription" << '\n' << '\n';

            if (registration::choice == 1)
            {
                destination = "Bubai";
            }
            else if (registration::choice == 2)
            {
                destination = "CANADA";
            }
            else if (registration::choice == 3)
            {
                destination = "UK";
            }
            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "Australia";
            }
            else if (registration::choice == 6)
            {
                destination = "Europe";
            }
            outf << "\tDestenation\t\t" << destination << '\n';
            outf << "\tlight cost: \t\t" << registration::charges << '\n';
        }
        outf.close();
    }
    void disBill()
    {
        std::ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                std::cout << "file error!" << '\n';
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                std::cout << arr << '\n';
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice{}, back{};
    std::cout << "\t\t\t      SNA airlines\n\n";
    std::cout << "\t\t----------------Main menu---------------\n";
    std::cout << "\t\t| Press 1 to add the customer Detailes |\n";
    std::cout << "\t\t| Press 2 for flight registration      |\n";
    std::cout << "\t\t| Press 3 for Ticket and charges       |\n";
    std::cout << "\t\t| Press 4 to exit                      |\n";
    std::cout << "\t\t|______________________________________|\n";
    std::cout << "\n\t Enter your choice: ";
    std::cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
        case 1:
            {std::cout << '\t' << "__________customer_________\n";
            d.information();
            std::cout << "Press 1 to go back to main menu: ";
            std::cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            break;
            }
        case 2:
            {
                std::cout << '\t' << "__________Book a flight using this system__________" << '\n';
                r.flights();
                break;
            }
        case 3:
            {
                std::cout << '\t' << "_____Get your ticket_____" << '\n';
                t.Bill();
                std::cout << '\t' << " Your ticket is printed you can collect it\n";
                std::cout << '\t' << "Press 1 to display your ticket\n";
                std::cin >> back;
                if (back == 1)
                {
                    t.disBill();
                    std::cout << '\t' << "Press any key to go back to main menu: ";
                    std::cin >> back;
                    if (back == 1)
                    {
                         mainMenu();
                    }
                    else
                    {
                         mainMenu();
                    }
                }
                else
                {
                     mainMenu();
                }
                break;
            }
        case 4:
            {
                std::cout << "\n\n\t__________Thank you__________\n";
                break;
            }
        default:
            std::cout << '\t' << "Invalid input, Please try again." << '\n';
            mainMenu();
    }
};

main()
{
    Management Mobj;



    getch();
}
