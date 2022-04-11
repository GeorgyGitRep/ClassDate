

#include <iostream>
using namespace std;

class Date
{
private:
    int Day;
    int Month;
    int Year;


public:


    Date(int valueDay, int valueMonth , int valueYear ) {
        Day = valueDay;
        Month = valueMonth;
        Year = valueYear;
    }

    Date(const Date& other) {
        this->Day = other.Day;
        this->Month = other.Month;
        this->Year = other.Year;
    }

  

   
};

int main()
{
    Date firstData(1, 1, 23);
    Date secondData(firstData);
    return 0;
}
