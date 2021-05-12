//
//  Question.cpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#include "Question.h"
#include <iostream>
using namespace std;

void Question::setText(string text)
{
    this->text = text;
}
string Question::getText() const
{
    return text;
}
void Question::setPoints(int points)
{
    this->points = points;
}
int Question::getPoints() const
{
    return points;
}
void Question::display() const
{
    cout << text << endl;
}
Question::Question()
{
    text = " ";
    points = 0;
}
Question::Question(string text)
{
    this->text = text;
}

