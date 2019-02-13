#include <iostream>
#include "Question.hpp"
#include "Question.cpp"
#include "Quiz.hpp"
#include "Quiz.cpp"


int main()
{
    std::string playersName, choice;

    std::cout << "What's your name? :)\n";
    getline(std::cin, playersName);
    std::cout << playersName << ", do you want to start the quiz?\n";
    std::cin >> choice;

    if(choice == "Yes" || choice == "YES" || choice == "yes" || choice == "Y" || choice == "y")
    {
        std::cout << "Great! Let's start! Good luck! :)\n";
        std::cout << "There are 10 questions, each correct answer has 10 points. You need at least 80 points to pass the test.\n\n";
        Quiz q;
        q.setQuestions();
        q.startQuiz();
    }
    else
        std::cout << "Ok. :( Goodbye!\n";
    return 0;
}
