#include <iostream>
#include <limits>

int DisplayMenu();

int main()
{
    int option = 0;
    do
    {
 
        option = DisplayMenu();


        switch (option)
        {
        case 1:
            std::cout << "Calculating shortest path..." << std::endl;
        
            break;
        case 2:
            std::cout << "Finding connected components..." << std::endl;
       
            break;
        case 3:
            std::cout << "Performing graph traversal..." << std::endl;
        
            break;
        case 4:
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }

    } while (option != 4); // Continue until the user selects '4' to exit

    return 0;
}

int DisplayMenu()
{
    int option;
    std::cout << "\nMenu\n";
    std::cout << "1. Shortest Path\n";
    std::cout << "2. Connected Components\n";
    std::cout << "3. Graph Traversal\n";
    std::cout << "4. Exit\n";
    std::cout << "Select an option (1-4): ";

    while (!(std::cin >> option) || option < 1 || option > 4)
    {
        std::cout << "Invalid input. Please enter a number between 1 and 4: ";
        std::cin.clear(); // Clear error flag
   
    }

    return option;
}
