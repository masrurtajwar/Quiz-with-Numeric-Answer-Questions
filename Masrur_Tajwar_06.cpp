#include <iostream>
#include "NAquestion.h"
#include "Quiz.h"
using namespace std;

int main()
{
    cout << "Assignmnet 06!\n" << endl;
    Quiz exam;
    NAquestion* ptrNAq;
    
    ptrNAq = new NAquestion("How many soccer players should each team have on the field at the start of each match?", 9, 13, 1);
    exam.setQuestion(0, ptrNAq);

    ptrNAq = new NAquestion("When Michael Jordan played for the Chicago Bulls, how many NBA Championships did he win?", 5, 7, 10);
    exam.setQuestion(1, ptrNAq);
    
    ptrNAq = new NAquestion("In what year was the first-ever Wimbledon Championship held?", 1875, 1879, 6);
    exam.setQuestion(2, ptrNAq);
    
    ptrNAq = new NAquestion("What year was the very first model of the iPhone released?", 2006, 2008, 3);
    exam.setQuestion(3, ptrNAq);
    
    ptrNAq = new NAquestion("How many molecules of oxygen does ozone have?", 2, 4, 8);
    exam.setQuestion(4, ptrNAq);
    
    exam.sort();
    exam.startAttempt();
}
