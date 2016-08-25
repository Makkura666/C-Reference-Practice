/**
 * LostFortune.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * A personalized adventure
 */

#include <iostream>
#include <string>

int main()
{
  const int GOLD_PIECES = 900;
  int adventurers, killed, survivors;
  std::string leader;

  // get the information
  std::cout << "Welcome to the Lost Fortune !" << std::endl << std::endl;
  std::cout << "Please enter the following for your personalized adventure:" <<
    std::endl;

  std::cout << "Enter a number: ";
  std::cin >> adventurers;
  std::cout << std::endl;

  std::cout << "Enter a number, smaller than the first: ";
  std::cin >> killed;
  std::cout << std::endl;

  survivors = adventurers - killed;

  // cin into string only works if there is no whitespace included
  std::cout << "Enter your last name: ";
  std::cin >> leader;

  // tell the story
  std::cout << std::endl;
  std::cout << "A brave group of " << adventurers << " set out on a quest ";
  std::cout << "- in search of the lost treasure of the Ancient Dwarves. ";
  std::cout << "The group was led by that legendary rogue, " << leader << "." <<
    std::endl << std::endl;
  std::cout << "Along the way, a band of marauding ogres ambushed the party. ";
  std::cout << "All fought bravely under the command of " << leader;
  std::cout << ", and the ogres were defeated, but at a cost. ";
  std::cout << "Of the adventurers, " << killed << " were vanquished, ";
  std::cout << "leaving just " << survivors << " in the group." << std::endl <<
    std::endl;
  std::cout << "The party was about to give up all hope. ";
  std::cout << "But while laying the deceased to rest, ";
  std::cout << "they stumbled upon the burried fortune. ";
  std::cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
  std::cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
  std::cout << " pieces to keep things fair of course." << std::endl;

  return 0;
}
