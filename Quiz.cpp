#include "Quiz.hpp"
#include <fstream>

void Quiz::setQuestions()
{
    std::ifstream f("quiz.txt");
    for(int i = 1; i <= 10; i++)
    {
        Question q;
        q.readQuestion(f);
        mQuestions.push_back(q);
    }
    f.close();
}


void Quiz::startQuiz()
{
    char playersAnswer ;
    int playersScore = 0;

    for(unsigned int i = 0; i < mQuestions.size(); i++)
    {
        mQuestions[i].displayQuestion();
        std::cout << "Your answer is: ";
        std::cin >> playersAnswer;
        if(playersAnswer == mQuestions[i].getRightAnswer())
        {
            playersScore += mQuestions[i].getPoints();
            std::cout << "Right answer! :)\n\n";
        }
        else std::cout << "Wrong answer! :(\n\n";
    }
    if(playersScore >= 80)
        std::cout << "Congratulations! You passed the test.\nYour score was " << playersScore << " points! :)\n\n";
    else
        std::cout << "Unfortunately, you didn't pass the test.\nYour score was " << playersScore << " points. :(\n\n";
}
