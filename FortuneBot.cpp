#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::string;

void Fortune_bot_theme();
bool Fortune(string, int &);

int main()
{
    srand(time(0));
    int farewell;
    string first_name;
    int age;
    bool fortune_bot;

    Fortune_bot_theme();

    cout << "What is your first name?\n";
    cin >> first_name;
    cout << "What is your age?\n";
    cin >> age;
    cout << "\n";
    cout << "====================\n\n";

    do
    {

        fortune_bot = Fortune(first_name, age);

    } while (fortune_bot);

    farewell = (rand() % 5) + 1;

    switch (farewell)
    {
    case 1:
        cout << "Farewell! God knows when we shall meet again.\n\n      – William Shakespeare\n\n";
        break;
    case 2:
        cout << "Some cause happiness wherever they go; others whenever they go\n\n      – Oscar Wilde\n\n";
        break;
    case 3:
        cout << "A farewell is necessary before we can meet again, and meeting again, after moments or a lifetime, is certain for those who are friends.\n\n       – Richard Bach\n\n";
        break;
    case 4:
        cout << "Be well, do good work, and keep in touch.\n\n       – Garrison Keillor\n\n";
        break;
    case 5:
        cout << "We’ll meet again, Don’t know where, don’t know when, But I know we’ll meet again, Some sunny day.\n\n       – Vera Lynn\n\n";
        break;
    default:
        cout << "Until we meet again, my friend!\n\n";
    }

    cout << "======================\n";

    return 0;
}

void Fortune_bot_theme()
{

    cout << "___________        __________\n\n";
    cout << "     ___________________\n\n";
    cout << " F        R      U       E \n";
    cout << "     O       T       N   \n\n";
    cout << "        B    O    T        \n\n";
    cout << "=======================================\n\n";
    cout << "GREETINGS FROM THE ALMIGHTY FORTUNE BOT\n\n";
    cout << "=======================================\n\n";
}

bool Fortune(string name, int &current_age)
{

    srand(time(0));
    int fortune = (rand() % 7) + 1;

    name[0] = toupper(name[0]);
    for (int i = 1; i < name.length(); i++)
        name[i] = tolower(name[i]);

    cout << name << ", based on your age, here is what I am able to provide for you: \n\n";

    //Advice based on age group;
    if (current_age < 20)
    {

        cout << "Don't rush to grow up. Have fun while you can my young friend..\n";
    }

    else if (current_age >= 20 && current_age <= 29)
    {

        cout << "Learn to love and respect yourself above all things..\n";
    }

    else if (current_age >= 30 && current_age <= 49)
    {

        cout << "Invest in true relationships and stick to your goals..\n";
    }

    else if (current_age >= 50)
    {

        cout << "Be a mentor to those you can provide advice to. Your wisdom can save others alot of trouble..\n";
    }

    //Random fortune given based on number generated;
    switch (fortune)
    {

    case 1:
        cout << "Your road to glory will be rocky, but fulfilling\n\n";
        break;
    case 2:
        cout << "Patience is your ally at the moment. Dont worry, you have enough time!\n\n";
        break;
    case 3:
        cout << "Nothing is impossible to a willing heart. Go out there and give it your all!\n\n";
        break;
    case 4:
        cout << "Don’t pursue happiness. Create your own happiness!.\n\n";
        break;
    case 5:
        cout << "The real kindness comes from within you\n\n";
        break;
    default:
        cout << "You can do great things. Be humble, be kind, and enjoy the time you have wisely..\n\n";
    }

    return false;
}
