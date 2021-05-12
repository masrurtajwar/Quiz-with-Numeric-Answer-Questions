//
//  NAquestion.cpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#include "Question.h"
#include "NAquestion.h"
#include <iostream>
using namespace std;

void NAquestion::setCorrectAnswer(float x, float y)
{
    correctAnswerMax = y;
    correctAnswerMin = x;
}
float NAquestion::getCorrectAnswerMin() const
{
    return correctAnswerMin;
}
float NAquestion::getCorrectAnswerMax() const
{
    return correctAnswerMax;
}
int NAquestion::isCorrect(float z) const
{
    if (z < correctAnswerMax && z > correctAnswerMin)
        return getPoints();
    else
        return 0;
}
NAquestion::NAquestion()
{
    correctAnswerMin = 0;
    correctAnswerMax = 0;
}
NAquestion::NAquestion(string text, float min, float max, int points)
{
    Question::setText(text);
    correctAnswerMin = min;
    correctAnswerMax = max;
    Question::setPoints(points);
}
bool NAquestion::operator>=(const NAquestion& q)
{
    return getPoints()>=q.getPoints();
}
bool NAquestion::operator>(const NAquestion& q)
{
    return getPoints()>q.getPoints();
}
bool NAquestion::operator<(const NAquestion& q)
{
    return getPoints()<q.getPoints(); 
}
