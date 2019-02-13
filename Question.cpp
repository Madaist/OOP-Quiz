#include "Question.hpp"
#include <fstream>

void Question::readQuestion(std::ifstream& file)
{
    unsigned char letter;
    std::string answer;

    file >> questionNumber;
    file.get();
    getline(file, mQuestion);
    for(int i = 1; i <= 4; i++)
    {
        file >> letter;
        file.get();
        getline(file, answer);
        mPossibleAnswers.insert(mPossibleAnswers.end(), make_pair(letter, answer));

    }
    file.get();
    file >> mRightAnswer;
    mPoints = 10;
    file.get();
}

void Question::displayQuestion()
{
    std::cout << questionNumber << ". " << mQuestion << std::endl;
    std::map<unsigned char, std::string>::iterator i;
    for(i = mPossibleAnswers.begin(); i != mPossibleAnswers.end(); i++)
        std::cout << "    " << i->first << ". " << i->second << std::endl;
    std::cout << std::endl;
}

char Question::getRightAnswer()
{
    return mRightAnswer;
}

int Question::getPoints()
{
    return mPoints;
}
