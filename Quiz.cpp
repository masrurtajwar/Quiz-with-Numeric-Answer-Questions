//
//  Quiz.cpp
//  Masrur_Tajwar_06
//
//  Created by Masrur Tajwar on 4/8/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#include "Quiz.h"
#include "NAquestion.h"
#include <iostream>
using namespace std;

double Quiz::getScore() const
{
    return score;
}
void Quiz::setQuestion(int position, NAquestion* question)
{
    if (position >= 0 && position <= 5)
    {
        if (this->questions[position] == NULL)
        {
            this->questions[position] = question;
        }
        else
        {
            delete(questions[position]);
            questions[position] = question;
        }
    }
}
NAquestion* Quiz::getQuestion(int position) const
{
    if (position < 0 && position > 5)
    {
        return NULL;
    }
    if (questions[position] != NULL)
    {
        return questions[position];
    }
    return NULL;
        
}
void Quiz::resetQuestions()
{
    delete(questions[5]);
    for (int i = 0; i < 5; i++)
    {
        questions[i] = NULL;
    }
    this->score = 0;
}
void Quiz::startAttempt()
{
    bool allNull = true;
    
    for(int i = 0; i < 5; i++) {
        if(questions[i] != NULL) {
            allNull = false;
            break;
        }
    }
    
    if(allNull) return;
    
    int validQuestions = 0;
    int correctAnswers = 0;
    
    for(int i = 0; i <= 5; i++)
    {
        if(questions[i] == NULL) continue;
        
        validQuestions++;
        
        float userInput;
        questions[i]->display();
        cout << "Enter answer: ";
        cin >> userInput;
        
        if(questions[i]->isCorrect(userInput))
        {
            correctAnswers++;
            cout << "That is correct!\n\n";
        }
        else
        {
            cout << "That is incorrect.\n\n";
        }
    }
    
    score = correctAnswers * 1.0 / validQuestions * 100;
    
    cout << "Score: " << score << '\n';
}
NAquestion* Quiz::largestQuestion()
{
    return largest(0, 4);
}
NAquestion* Quiz::largest(int lowerIndex, int upperIndex)
{
    NAquestion *max;
    if (lowerIndex == upperIndex)
        return questions[lowerIndex];
    else
    {
        max = largest(lowerIndex + 1, upperIndex);
        if (*(questions[lowerIndex]) >= *max)
            return questions[lowerIndex];
        else
            return max;
    }
}
void Quiz::sort()
{
    NAquestion* temp;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (questions[j] > questions[j + 1])
            {
                temp = questions[j];
                questions[j] = questions[j + 1];
                questions[j + 1] = temp;
            }
        }
    }
}
Quiz::Quiz()
{
    for (int i = 0; i <= 5; i++)
    {
        questions[i] = NULL;
    }
}
