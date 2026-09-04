#include <iostream>
#include <iomanip>
using namespace std;

class TimeConverter
{
public:

    void secondsToTime(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "Time: "
             << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":0"
             << setw(2) << seconds << endl;
    }

    int timeToSeconds(int hours, int minutes, int seconds)
    {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};

int main()
{
    TimeConverter converter;
    int choice;

    cout << " TIME CONVERTER " << endl;
    cout << "1. Convert Seconds to HH:MM:SS" << endl;
    cout << "2. Convert HH:MM:SS to Seconds" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int totalSeconds;

        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        converter.secondsToTime(totalSeconds);
    }
    else if (choice == 2)
    {
        int hours, minutes, seconds;

        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;

        int totalSeconds = converter.timeToSeconds(
            hours, minutes, seconds
        );

        cout << "Total Seconds: " << totalSeconds << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}