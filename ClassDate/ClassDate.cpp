

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

    Date(char* DataString) {
        Day = (DataString[0] - '0') * 10 + (DataString[1] - '0');
        Month = (DataString[3] - '0') * 10 + (DataString[4] - '0');
        Year = (DataString[6] - '0') * 10 + (DataString[7] - '0');
        
    }
    void print() {
        cout << Day << " " << Month << " " << Year<<endl;
    }
   
};

int main()
{
    Date firstData(1, 1, 23);
    Date secondData(firstData);
    char m[] = "29.09.03";
    Date data(m);
    firstData.print();
    secondData.print();
    data.print();
    return 0;
}
