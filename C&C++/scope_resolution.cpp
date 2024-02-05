#include <iostream>
using namespace std;

class User
{
private:
    string name;
    int age;

public:
    User(string user_name, int user_age)
    {
        name = user_name;
        age = user_age;
    }

    void userInfo();
};

void User::userInfo()
{
    cout << "User Information:\n"
         << "Name: " << name << "\n"
         << "Age: " << age << " years\n";
}

int main()
{

    string username = "Kabir Jaipal";
    int user_age = 19;

    User user(username, user_age);

    user.userInfo();

    return 0;
}