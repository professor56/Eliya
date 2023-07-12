
#include <iostream>
#include<vector>
using namespace std;

vector <string>month;
vector <string>day;

class Robot {
public:
    Robot() {
        cout << "Hello my name is ELIYA I am your personal assistance!!!" << endl;
    }
    void Calculator() {
        cout << "Calculator" << endl;
        int num, n;
        string s;
        cout << "Enter the first number : ";
        cin >> n;
        cout << "Enter the second number : ";
        cin >> num;
        cout << "Enter the operator +  -  *  /  : ";
        cin >> s;
        if (s== "+") {
            cout <<n<<" + "<<num<<" = "<<(n + num)<<endl;
        }
        else if (s == "-") {
            cout << n << " - " << num << " = " << (n - num)<<endl;
        }
        else if (s == "x" || s == "*" || s == "X") {
            cout << n << " X " << num << " = " << (n * num)<<endl;
        }
        else if (s == "/"){
            cout << n << " % " << num << " = " << (n / num) << endl;;
            
        }
       

    }
    void Agecalculator() {
        int by;
        int cy;
        cout << "Enter the born year : ";
        cin >> by;
        cout << "Enter the current year : ";
        cin >> cy;
        cout << "Your age : " << (cy - by);
    }
    void Multiplication() {
        int number, start, end;
        cout << "Which number you want : ";
        cin >> number;
        cout << "Where start number of table : ";
        cin >> start;
        cout << "Where end number of table : ";
        cin >> end;
        for(start ; start <=end; start++)
        {
            cout << number << " X " << start << " = " << (number * start) << endl;
        }

    }
    void Month() {
        month = { "January","February","March","April","May","June","July","August","September","October","November","December" };
        int num = 1;
        for (int i = 0; i < month.size(); i += 1) {
            cout << num << " . " << month[i] << endl;
            num += 1;
        }
    }
    void Day() {
        day = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
        int num = 1;
        for (int i = 0; i < day.size(); i += 1) {
            cout << num << " . " << day[i] << endl;
            num++;
        }
    }
};
int main()
{
    Robot eliya;
    bool b = true;
    while (true ) {
        
        cout << "Type something ....." << endl;
        string ch;
        cin >> ch;
       
        if (ch == "Calculator" || ch == "calculator") {
            eliya.Calculator();
            cout << endl;
        }
       if (ch == "agecalculator") {
           
            eliya.Agecalculator();
            cout << endl;
        }
       if (ch == "table") {
           eliya.Multiplication();
       }
       if (ch == "month") {
           cout<<"Here result:" << endl;
           eliya.Month();
       }
       if (ch=="day")
       {
           cout << "Here result" << endl;
           eliya.Day();
       }
    }
}