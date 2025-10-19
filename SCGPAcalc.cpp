/*
There are 2 quizes each graded based on 10 points;
One midterm and one final term graded based on 100 points;

The final exam counts for 50% of the grades,
the midterm counts for 25% of the grades and the quizs
counts for 25% of the grades
*/

#include <iostream>
using namespace std;
class findgrade
{
    float q1, q2, qT, mid, finall;
    float pQ, pM, pF;
    string g;
    float percentage;

public:
    void getMarks();
    void calcMarks();
    void calcGrade();
    void friend ssg(findgrade maths, findgrade eng, findgrade chem);
};
void findgrade ::getMarks()
{
    cout << "write ur quiz1 marks" << endl;
    cin >> q1;
    cout << "write ur quiz2 marks" << endl;
    cin >> q2;
    cout << "write ur mid term marks" << endl;
    cin >> mid;
    cout << "write ur final marks" << endl;
    cin >> finall;
}
void findgrade ::calcMarks()
{
    qT = q1 + q2;
    pQ = (25.0 / 20.0) * qT;
    pM = (25.0 / 100.0) * mid;
    pF = (50.0 / 100.0) * finall;
    percentage = pQ + pM + pF;
    cout<<"Your percentage is "<<percentage<<"%"<<endl;
}
void findgrade ::calcGrade()
{
    if (percentage <= 100 and percentage >= 90)
    {
        cout << "A grade"<<endl;
    }
    else if (percentage < 90 and percentage >= 80)
    {
        cout << "B grade"<<endl;
    }
    else if (percentage < 80 and percentage >= 70)
    {
        cout << "C grade"<<endl;
    }
    else
    {
        cout << "Fail"<<endl;
    }
}

void ssg(findgrade maths, findgrade eng, findgrade chem)
{
    int s;
    s = (maths.percentage + eng.percentage + chem.percentage) / 3000;
    cout << "your scgpa this sem" << s;
}

int main()
{
    findgrade maths, eng, chem;

    cout << "maths"<<endl;

    maths.getMarks();
    maths.calcMarks();
    maths.calcGrade();

    cout << "eng"<<endl;

    eng.getMarks();
    eng.calcMarks();
    eng.calcGrade();

    cout << "chem"<<endl;

    chem.getMarks();
    chem.calcMarks();
    chem.calcGrade();
    void ssg();
    return 0;
}
