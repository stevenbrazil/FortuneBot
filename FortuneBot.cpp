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

    string first_name;
    int age;
    bool fortune_bot;

    Fortune_bot_theme();

    cout << "What is your first name?\n";
    cin >> first_name;
    cout << "What is your age?\n";
    cin >> age;
    cout << "\n";
    cout << "====================\n";

    do
    {

        fortune_bot = Fortune(first_name, age);

    } while (fortune_bot);

    cout << age << " is a long way away... Make sure you make the most of it!!!\n";
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
    current_age += 10;

    cout << name << ", in ten years, you will be " << current_age << "\n";
    switch (fortune)
    {

    case 1:
        cout << "Your road to glory will be rocky, but fulfilling\n";
        break;
    case 2:
        cout << "Patience is your alley at the moment. Dont worry, you have enough time!\n";
        break;
    case 3:
        cout << "Nothing is impossible to a willing heart. Go out there and give it your all!\n";
        break;
    case 4:
        cout << "Don’t pursue happiness. Create your own happiness!.\n";
        break;
    case 5:
        cout << "The real kindness comes from within you\n";
        break;
    default:
        cout << "Things are alittle fuzzy. Please ask again later..\n";
    }

    return false;
}
