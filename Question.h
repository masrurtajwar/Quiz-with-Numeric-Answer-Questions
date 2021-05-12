//
//  Question.hpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#ifndef Question_hpp
#define Question_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Question
{
private:
    string text;
    int points;
public:
    void setText(string);
    string getText() const;
    void setPoints(int);
    int getPoints() const;
    void display() const;
    Question();
    Question(string);
};

#endif /* Question_hpp */
