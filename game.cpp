#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

//Matthew McCann's room - The Garden.
int garden(int limbs)
{
    string choice;
    int numberchoice; 
    cout << "You enter a garden\nThere's an apple, a pickle and a sock\nPlease choose an item to take" << endl;
    cin >> choice;
    while(choice != "apple" && choice != "pickle" && choice != "sock")
    {
        cout << "Please choose a valid option" << endl;
        cin >> choice;
    }
    if(choice == "apple")
    {
      numberchoice = 1;
    }
    if(choice == "pickle")
    {
      numberchoice = 2;
    }
    if(choice == "sock")
    {
      numberchoice = 3;
    }

    switch(numberchoice)
    {
        case 1:
        cout << "You eat the apple and regain a limb" << endl;
        ++limbs;
        return limbs;
        break;

        case 2:
        cout << "You eat the pickle, it's bitter" << endl;
        limbs = limbs - 1;
        return limbs;
        break;

        case 3:
        cout << "You eat the sock, choke, and die" << endl;
        limbs = limbs - 666;
        return limbs;
        break;

        default:
        cout << "That's not a proper choice" << endl;
    }   
}
//Bret McNamee’s part...the outhouse
int outhouse(int limbs)
{
  cout << "You are out of toilet paper…\nYou have your shirt, a random leaf, and your hand…\nwhich do you want to use?" <<   endl;
  string choice;
  cin >> choice;
  srand (time(NULL));
  int numb = rand() % 3 + 1;
  cout << "You hear a noise as you finish up in the outhouse and run away as fast as you can." << endl;
  switch(numb)
  {
    case 1:
    cout<<"You barely survived with all your limbs!" << endl;
    break;
    case 2:
    cout << "You chose horribly wrong...you have died a painful death." << endl;
    limbs-=69;
    break;
    case 3:
    cout << "You survived, but hardly...you lose a limb while escaping." << endl;
    limbs--;
    break;
    default:
    cout << "Invalid choice. Try Again." << endl;
}
  return limbs;
  


}
// Derek Leen's room, the Pet Store
int PetStore(int limbs)
{
  int choice;
  cout << "You have entered the pet store, it is full of wonderful fuzzy and not-so-fuzzy animals." << endl;
}

//Ryan Doane’s room, the office
int office(int limbs)
{
  int decision;
  cout << "You have entered a room, looking a lot like an office cubical." << endl;
  cout << "You see a desk, chair, and a cup turned upside down on the floor for some unknown reason that looks like something is trying to move it." << endl;
  cout << "What do you do? Press 1 to approach desk, 2 to sit in the chair, 3 to turn over cup." << endl;
  cin >> decision;
  switch(decision)
  {
    case 1:
      cout << "You approach the desk but end up kicking the cup over, revealing the spider underneath. Scared for your life, you leave the room." << endl;
      break;
    case 2:
      cout << "You attempt to sit in the chair but the back rest falls off, causing you to flail you arms up, knocking over the cup on the ground when you land. The spider under the cup bites one of your limbs, causing it to turn purple and fall off." << endl;
      break;
    case 3:
      cout << "You turn the cup over and a giant spider runs out and onto you, biting a limb and causing it to fall it." << endl;
      break;
    default:
      cout << "Invalid decision" << endl;
  }
  if(decision==1)
  {
    cout << "You have " << limbs << " limbs left" << endl;
    return limbs;
  }
  if(decision==2)
  {
    limbs--;
    cout << "You have " << limbs << " limbs left" << endl;
    return limbs;
  }
  if(decision==3)
  {
    limbs--;
    cout << "You have " << limbs << " limbs left" << endl;
    return limbs;
  }
}

int main()
{
  int limbs;
  limbs = 4;
  do
  {
    cout << "You have " << limbs << " limbs." << endl;
    cout << "You see a garden, an outhouse, an office, \nChoose a room" << endl;//enter your room name
    string roomchoice;
    cin >> roomchoice;
    if(roomchoice == "garden")
    {
      limbs = garden(limbs);
      if(limbs > 4)
      {
        limbs = 4;
      }
    }
    if(roomchoice == "outhouse")
    {
      limbs = outhouse(limbs);        
    }
    if(roomchoice == "office")
    {
      limbs = office(limbs);
    }
    
  }while(limbs > 0);
cout << "Rip in peace" << endl;
return 0;
}
