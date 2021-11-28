#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
	private:
		int second;
		int hh,mm,ss;
		
		public:
			void getTime(void);
			void convertIntoSecond(void);
			void displayTime(void);
};
void Time::getTime(void)
{
	cout << "Enter time:" << "\n";
	cout << "hours?";
	cin >> hh;
	cout << "minutes?";
	cin >> mm;
	cout << "seconds?";
	cin >> ss;
}

void Time::convertIntoSecond(void)
{
	second=hh*3600 + mm*60 + ss;
}

void Time::displayTime(void)
{
	cout << "The time is = " << setw(2) << setfill('0') << hh << ":" 
	                         << setw(2) << setfill('0') << mm << ":" 
	                         << setw(2) << setfill('0') << ss << "\n";
	cout << "Time in total seconds:" << second;
}
int main()
{
	Time T;
	T.getTime();
	T.convertIntoSecond();
	T.displayTime();
	return 0;
}
