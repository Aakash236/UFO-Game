#include <iostream>
#include "ufo_functions.hpp"
#include <vector>
int main() 
{
greet();    //greet the user, give instructions
std::string codeword= "programming";
std::string answer="__________";
int misses=0;
std::vector<char> incorrect;
bool guess= false;
char letter;

while(answer!= codeword && misses<7)
{
display_misses(misses);
std::cout <<"\nIncorrect Guesses:\n";
display_status(incorrect,answer);
std::cout <<"Take a guess:";
std::cin >> letter;
for(int i=0;i<codeword.length();i++)
{
  if(letter==codeword[i])
  {
    answer[i]=letter;
    guess = true;
  }
}
if(guess){
  std::cout<<"\nCorrect!\n";
}
else{
  std::cout<<"\nIncorrect! The aliens are getting close to abducting the human.\n";
  incorrect.push_back(letter);
  misses++; 
}
guess=false;
}

end_game(answer,codeword);
}
