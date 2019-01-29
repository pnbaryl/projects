/*********************************************************************************
** Program: Choose your own adventure!
** Author: Paige Barylsky
** Date: 01/18/2019
** Description:
** Input:
** Output: 
*********************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
int var=1;
int x;              // variable to hold random integer
srand(time(NULL)) ; //numbers 0-20

	cout << "Welcome to my choose your own adventure game! Enter 1 to continue " << endl;
	cin >> var;
	
	cout << "You wake up in a dark cave. Your head hurts and the ground is cold and damp." 
		   "\nYou feel your sword still in its sheath. All of a sudden, the cave is filled "
		   "\nwith light, and an enormous spider appears! Enter 1 to attempt to slay the " 
		   "\nspider! Enter 2 to attempt to tame the spider and make it your own!" << endl;
	cin >> var;	
		if (var == 1) 
		{
			cout << "You chose to slay the spider! With a swift slash of your sword, " 
			"\nyou slice the spider across his bulbous abdomen. But now you see that"
			"\nthousands of smaller spiders are rushing in to avenge the spider king!"
			"\n Enter 1 to run, enter 2 to try and fight!" << endl;
	
		cin >> var;
			if (var == 1)
			{
			cout << "You are running as fast as you can, you see a big pool of water that"
			"\nmay have a tunnel leading out, but you also see a long passage through"
			"\nthe cave. Enter 1 to dive into the water, enter 2 to continue in "
			"\nthe passage." << endl;			
			
			cin >> var;
				if (var == 1) 
				{	
				cout << "You dive into the water and swim as fast as you can through the"
				"\naqueous tunnel! Lucky for you the tunnel spits you out into a big"
				"\n lake and you are free!! Congratulations, you have won the game!"<< endl;
				}
				else if(var == 2)
				{
				cout << "You run as fast as you can but you are no match for the spider. "
				"\nyou trip on a rock and look up just in time to see thousands of fangs"
				"\nand hairy spider legs descending upon you to your doom."
				"\n YOU LOSE!" << endl;
				}	
			}
			else if(var == 2 ) 
			{
			cout << "You ready your stance, preparing for battle. Enter 1 to determine "
			"\nhow skilled you are at combat! (less than 10 - YOU LOSE! 11 or greater"
			"\nyou will succeed and become the new spider king!!" << endl;
					
			
			cin >> var;
			x = rand() % 20;
			cout  << "You got a " << x << "!" <<  endl;
				if (x <= 10)
				{
				cout << "Aw, unfortunately you have overestimated your fighting "
				"\ncapabilities. You have lost the battle with a score of " << x <<
				"\n and have died a very slow and painful death. You lose!" << endl;
				}
				else if( x >= 11) 
				{
				cout << "Hooray! With your score of " << x << " you have successfully"
				"\nslayed 1000 spiders, and the survivors are surrenduring to you. You"
				"\nare the new Spider King! YOU WIN!" << endl;
				}

			}	
		}
		else if(var == 2) 	
		{
			cout << "You decide to tame the spider. You climb up the side of the"
			"\nCave wall and with a swift leap, you fly towards the spiders back!"
			"\nEnter 1 to determine if you have jumped far enough...If you score 10 or" <<
			"\nless, you will fail. If you score 11 or more, you will succeed!" << endl;

			cin >> var;
			x = rand() % 20;
			cout << "You scored a " << x << "!" << endl;
				if (x <= 10)
				{
				cout << "Unfortunately with a score of " << x << " you failed at your only"
				"\nopportunity of survival. The spider plunges his poisonous fangs into"
				"\nyour body and you die a slow and painful death. You LOSE!" << endl;
				}
				else if(x >= 11)
				{
				cout << "Your leap was a success! You are now the tamer of this giant"
				"\narachnid. You ride your new spider pal into the sunset and live on to"
				"\ncomplete multiple quests on spiderback. YOU WIN!" << endl;
				}
		}
	

	return 0;
}

