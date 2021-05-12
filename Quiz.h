//
//  Quiz.hpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#ifndef Quiz_hpp
#define Quiz_hpp

#include <stdio.h>
#include <iostream>
#include "NAquestion.h"
using namespace std;

class Quiz
{
private:
    double score;
    NAquestion* questions[5];
public:
    double getScore() const;
    void setQuestion(int, NAquestion*);
    NAquestion* getQuestion(int) const;
    void resetQuestions();
    void startAttempt();
    NAquestion* largestQuestion();
    NAquestion* largest(int, int);
    void sort(); 
    Quiz();
};

#endif /* Quiz_hpp */
