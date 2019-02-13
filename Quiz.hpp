#ifndef QUIZ_HPP_INCLUDED
#define QUIZ_HPP_INCLUDED

#include <vector>

class Quiz
{
    std::vector<Question> mQuestions;
public:
    void setQuestions();
    void startQuiz();
};


#endif // QUIZ_HPP_INCLUDED
