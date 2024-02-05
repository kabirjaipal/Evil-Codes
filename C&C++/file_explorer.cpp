#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void listFiles(const std::string &path)
{
    for (const auto &entry : fs::directory_iterator(path))
    {
        std::cout << entry.path().filename() << std::endl;
    }
}

int main()
{
    std::string currentPath = fs::current_path().string(); // Start from the current working directory

    while (true)
    {
        std::cout << "Current directory: " << currentPath << std::endl;
        std::cout << "Enter a folder name to navigate, 'back' to go back, or 'exit' to quit: ";

        std::string userInput;
        std::cin >> userInput;

        if (userInput == "exit")
        {
            break; // Exit the loop if the user wants to quit
        }
        else if (userInput == "back")
        {
            if (currentPath != "/")
            {
                currentPath = fs::path(currentPath).parent_path().string();
                listFiles(currentPath); // List files in the new directory
            }
            else
            {
                std::cout << "Already at the root directory." << std::endl;
            }
        }
        else
        {
            fs::path newPath = currentPath;
            newPath /= userInput; // Append the user input to the current path

            if (fs::exists(newPath) && fs::is_directory(newPath))
            {
                currentPath = newPath.string(); // Update the current path
                listFiles(currentPath);         // List files in the new directory
            }
            else
            {
                std::cout << "Invalid folder name. Please try again." << std::endl;
            }
        }
    }

    std::cout << "Exiting file explorer." << std::endl;

    return 0;
}
