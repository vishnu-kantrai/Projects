#include<iostream>
#include<random>
#include<chrono>
#include<thread>
#include<cmath>

using namespace std;

void clearscreen()
{
  cout << "\033[2J\033[1;1H";
}

void game(int num, int guesses, int difficulty)
{
  int user_guess = 0;
  int tries = 0;
  while ( tries < guesses && user_guess != num )
    {
      switch(difficulty)
      {
      case 1: cout << "\nEasy(1-50)" << endl; break;
      case 2: cout << "\nIntermediate(1-250)" << endl; break;
      case 3: cout << "\nExpert(1-600)" << endl; break;
      }
      cout << "Guesses left: " << guesses-tries << endl;
      
      cout << "\nEnter your guess: ";
      cin >> user_guess;
      tries++;
      clearscreen();
      int closeness = abs(user_guess - num);
      if(closeness >= 75)
        cout << "\nVery Far..." << endl;
      else if(closeness >= 25 && closeness < 75)
        cout << "\nFar.." << endl;
      else if(closeness >= 12 && closeness < 25)
        cout << "\nClose!!" << endl;
      else if(closeness >= 6 && closeness < 12)
        cout << "\nVery Close!!!" << endl;
      else if(abs(user_guess-num) < 6)
      {
        if(user_guess > num)
          cout << "\nGuess Smaller Number" << endl;
        else
          cout << "\nGuess Bigger Number" << endl;
      }
        
      this_thread::sleep_for(chrono::milliseconds(250));
    }
  if(tries == guesses && user_guess != num)
    cout << "\nOut of tries" << "\nYOU LOSE" << endl;
  else if(user_guess == num)
    cout << "\nYou Win" << endl;
}

int generator(int x, int y)
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(x,y);
  return dist(gen);
}

int main()
{
  int dif,rand;
  cout << "Choose Difficulty" << endl;
  cout << "1->Easy (1-50),5 tries" << "\n2->Intermediate (1-250),7 tries" << "\n3->Expert (1-600), 8 tries" << endl;
  cin >> dif;

  switch(dif)
    {
      case 1:
        {
          rand = generator(1,50);
          game(rand,5,dif);
          break;
        }
      case 2:
        {
          rand = generator(1,250);
          game(rand,7,dif);
          break;
        }
      case 3:
        {
          rand = generator(1,600);
          game(rand,8,dif);
          break;
        }
      default:
        {
          cout << "\nINVALID" << endl;
          break;
        }
    }

  cin.ignore();
  cin.get();
  return 0;
}
