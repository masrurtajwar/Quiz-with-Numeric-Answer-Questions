//
//  NAquestion.hpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#ifndef NAquestion_hpp
#define NAquestion_hpp

#include <stdio.h>
#include <iostream>
#include "Question.h"
using namespace std;

class NAquestion: public Question
{
private:
    float correctAnswerMin;
    float correctAnswerMax;
public:
    void setCorrectAnswer(float, float);
    float getCorrectAnswerMin() const;
    float getCorrectAnswerMax() const;
    int isCorrect(float) const;
    NAquestion();
    NAquestion(string, float, float, int);
    bool operator>=(const NAquestion& q);
    bool operator>(const NAquestion& q);
    bool operator< (const NAquestion& q);
};

#endif /* NAquestion_hpp */
