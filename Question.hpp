#ifndef QUESTION_HPP_INCLUDED
#define QUESTION_HPP_INCLUDED

#include <map>
#include <fstream>

class Question
{
public:
    void readQuestion(std::ifstream& file);
    void displayQuestion();
    char getRightAnswer();
    int getPoints();

private:
    int questionNumber;
    std::string mQuestion;
    std::map<unsigned char, std::string> mPossibleAnswers;
    char mRightAnswer;
    int mPoints;

};


#endif // QUESTION_HPP_INCLUDED
