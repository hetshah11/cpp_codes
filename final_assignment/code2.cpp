#include<iostream>
using namespace std;

int main()
    {
        int grade;
        int attendance,Total_Score;
        double Test_score;

        cout << "Enter attendance" << endl;
        cin >> attendance;

        cout << "Enter Test score" << endl;
        cin >> Test_score;

        cout << "Enter Total score" << endl;
        cin >> Total_Score;

        if(attendance>50 && Test_score>0.7 && Total_Score>5600)
            grade=10;
        else if(attendance>50 && Test_score>0.7)
            grade=9;
        else if(Test_score>0.7 && Total_Score>5600)
            grade=8;
        else if(attendance>50 && Total_Score>5600)
            grade=7;
        else if(attendance>50 || Test_score>0.7 || Total_Score>5600)
            grade=6;
        else    
            grade=5;


            cout <<endl<< "grade=" << grade << endl;

            return 0;
    }