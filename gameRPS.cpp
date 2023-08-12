#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

std::string RPS[3] = {"rock", "paper", "scissors"} ;
std::string game ; 
std::string choice ;
std::string randgen ;
bool codeworks = true ;

int main () {
    std::cout<<"Hello welcome in the game of Rock,paper,scissors\n";
    std::cout<<"Are you ready to play ?\n";
    std::cin>>game ;
    if (game == "Yes") {
        while (codeworks) {
        std::cout<<"Choose rock or paper or scissors\n";
        std::cin>>choice ; 
            if (choice != "rock" && choice !="paper" && choice !="scissors"){
                std::cout<<"Wrong character\n" ;    
                codeworks = false; 
            }
            else {
                std::srand(static_cast<unsigned int>(std::time(nullptr)));
                int RPSsize = sizeof(RPS) / sizeof(RPS[0]) ;
                std::cout<<RPSsize<<"\n";
                int random = std::rand() % RPSsize;
                //std::cout<<random<<"\n";
                randgen = RPS[random];
                //std::cout<<randgen<<"\n";
                std::cout<<"PC generated :"<<randgen<<"\n";
                if (randgen == choice) {
                    std::cout<<"Tie\n" ;
                }
                else {
                    if (choice == "paper"){
                        if (randgen == "rock"){
                            std::cout<<"You won, congratz\n" ;
                        }
                        if (randgen == "scissors"){
                            std::cout<<"You lose, sorry\n" ;
                        }
                    }
                    if (choice == "rock"){
                        if (randgen == "scissors"){
                            std::cout<<"You won, congratz\n" ;
                        }
                        if (randgen == "paper"){
                            std::cout<<"You lose, sorry\n" ;
                        }    
                    }
                    if (choice == "scissors"){
                        if (randgen == "paper"){
                            std::cout<<"You won, congratz\n" ;
                        }
                        if (randgen == "rock"){
                            std::cout<<"You lose, sorry\n" ;
                        }
                    }
                    }
                }
            }
        }
    if (game =="No"){
        std::cout<<"Okay then, goodbye.\n" ;
        return 0;
    }
    return 0;
    }