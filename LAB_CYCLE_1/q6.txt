#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input(void);
    void add(Time, Time);
    void display(void);
};
void Time::input()
{
    std::cout << "\nEnter the time in hours: ";
    std::cin >> hours;
    std::cout << "\nEnter the time in minutes: ";
    std::cin >> minutes;
    std::cout << "\nEnter the time in seconds: ";
    std::cin >> seconds;
}
void Time::add(Time t1, Time t2)
{
    seconds = t1.seconds + t2.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes = minutes + t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
void Time::display()
{
    std::cout << hours << " hours; " << minutes << " minutes; " << seconds << " seconds; ";
}
int main()
{
    Time t1, t2, t3;
    std::string choice;
    do
    {
        std::cout << "**TIME_1**";
        t1.input();
        std::cout << "**TIME_2**";
        t2.input();
        t3.add(t1, t2);
        std::cout << "\n***RESULT***\n";
        t3.display();
        std::cout << "\n\ndo you want to continue(enter yes/no): ";
        std::cin >> choice;
    } while (choice == "yes");
    return 0;
}