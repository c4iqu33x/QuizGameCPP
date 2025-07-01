#include <iostream>
#include <vector>
#include <string>


int main() {

    std::string questions[] = {"Which year was C++ created?",
                               "Who created C++?",
                               "What is the predecessor of C++?",
                               "Is C++ a programming language?"};


    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. Sim", "B. Não", "C. Talvez", "D. Jamais"}};


    char answerKey[] = {'C', 'B', 'A', 'A'};
    

    // variavel padronizada de verificação de quantos elementos tem no array
    int size = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;



    for(int i = 0; i < size; i++){
        std::cout << questions[i] << "\n";
        
        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cout << "Answer: ";
        std::cin >> guess;
        guess = toupper(guess); // Capitalização da resposta se usuario colocar minúsculo.

        if(guess == answerKey[i]) {
            std::cout << "Correct\n";
            std::cout << '\n';
            score++;
        } else{
            std::cout << "Wrong Answer!!\n";
            std::cout << "Correct Answer: " << answerKey[i] << '\n';
            std::cout << '\n';
        }
    }

    std::cout << "Results\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "Number of questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";


    return 0;
}