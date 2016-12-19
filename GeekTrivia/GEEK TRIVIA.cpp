//created/updated by retloc on 12/16
//created/updated by retloc on 12/18
//This is a trivia based game that currently is loaded with questions pertaining to subjects such as Marvel, Star Wars and Star trek. The program is written in C++. The program contains 3 different skill level options and over 100 trivia questions. When the user inputs an answer then the program will figure out if they are correct and track the score based on their input.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <time.h>

//function prototype
void menu();
void easy();
void medium();
void hard();
void right();
void wrong();

//main function
using namespace std;
int main(int argc, char *argv[]) {
	menu();
}//end main

//***** function defninitions *****

void menu(){
	//declare variables 
	int input = 0;
	
	//output menu options
	cout << "Choose from the options below "<< endl;
	cout << "	1. EASY - Doesn't know about the debate over Who Shot First. No idea when the comic-con is." << endl;
	cout << endl;
	cout << "	2. MEDIUM - Only allows their geek to show around the right people. Thinks cosplayers are nuts." << endl;
	cout << endl;
	cout << "	3. HARD - Speaks fluent Klingon or Elvin. Epic comicbook collection." << endl;
	cout << endl;
	cout << "	4. EXIT - 'I find your lack of faith disturbing.' - Darth Vader" << endl;
	//get user response
	cin >> input;
	//determine action
	if (input == 1)
	{
		easy();
	}//end if 1
		else if(input == 2)
		{
			medium();
		}// end if 2
			else if(input == 3)
			
			{
				hard();
			}//end if 3
				
}// end void menu

void easy(){
	//declare variables
	string quest = "";
	string answer = "";
	string ofLies = "";
	string qNum = "";
	int count = 0;
	int score = 0;
	int randNum = 0;
	//open easy.txt file 
	ifstream inFile; 
	inFile.open("easy .txt", ios::in);
	
	if(inFile.is_open())
	{//generate random number to choose question 
		srand(static_cast<int>(time(0)));
		randNum = 1001 + rand() % (1046 - 1001 + 1);
		cin.ignore(1000, '\n');
		getline(inFile, qNum, '#');
		getline(inFile, quest, '$');
		getline(inFile, answer);
	
		//searches file
		int temp = stoi(qNum);
		//loops program to only get 15 questions
		while (count <= 15) {
			while(randNum != temp && !inFile.eof())
			{
				getline(inFile, qNum, '#');
				getline(inFile, quest, '$');
				getline(inFile, answer);
				temp = stoi(qNum);
			} // end while (randNum...
			//when found
			if(randNum == temp)
			{
				cout << quest << " ?" << endl;
				cout << "\t Enter your answer or 99 for the menu" << endl;
				cin >> ofLies;
				cout << endl;
				
				if(ofLies != "99")
				{//closes program iif user enters 99
					transform(ofLies.begin(), ofLies.end(), ofLies.begin(), ::toupper);
					transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
					
					if(answer.find(ofLies, 0) != -1)
					{//checks if answer is right or wrong 
						right();
						score ++;
						count ++;
						cout << endl << endl;
					}
					else 
					{
						wrong();
						count ++;
						cout << "the correct answer(s) is" << endl;
						cout << answer << endl << endl;
					}
					inFile.close();
					inFile.open("easy .txt", ios::in);
				}//end if
			}// end if
			srand(static_cast<int>(time(0)));
			randNum = 1001 + rand() % (1046 - 1001 + 1);
		}//end while
		cout << "Your score is " << score << "/15" << endl;
		cout << "'You're much stronger than you think you are. Trust me.' - superman " << endl;
	}// end if (is_open)
	else 
	{
		cout << "file could not be opened" << endl;
	}
	menu();
}// end easy

void medium(){
	//declare variables
	string quest = "";
	string answer = "";
	string ofLies = "";
	string qNum = "";
	int count = 0;
	int score = 0;
	int randNum = 0;
	
	//open meduim.txt file 
	ifstream inFile; 
	inFile.open("medium.txt", ios::in);
	
	if(inFile.is_open())
	{//generate random number to choose question 
		srand(static_cast<int>(time(0)));
		randNum = 1001 + rand() % (1046 - 1001 + 1);
		cin.ignore(1000, '\n');
		getline(inFile, qNum, '#');
		getline(inFile, quest, '$');
		getline(inFile, answer);
	
		//searches file
		int temp = stoi(qNum);
		//loops program to only get 15 questions
		while (count <= 15) {
			while(randNum != temp && !inFile.eof())
			{
				getline(inFile, qNum, '#');
				getline(inFile, quest, '$');
				getline(inFile, answer);
				temp = stoi(qNum);
			} // end while (randNum...
			//when found
			if(randNum == temp)
			{
				cout << quest << " ?" << endl;
				cout << "\t Enter your answer or 99 for the menu" << endl;
				cin >> ofLies;
				cout << endl;
				
				if(ofLies != "99")
				{//closes program iif user enters 99
					transform(ofLies.begin(), ofLies.end(), ofLies.begin(), ::toupper);
					transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
					
					if(answer.find(ofLies, 0) != -1)
					{//checks if answer is right or wrong 
						right();
						score ++;
						count ++;
						cout << endl << endl;
					}
					else 
					{
						wrong();
						count ++;
						cout << "the correct answer(s) is" << endl;
						cout << answer << endl << endl;
					}
					inFile.close();
					inFile.open("medium.txt", ios::in);
				}//end if
			}// end if
			srand(static_cast<int>(time(0)));
			randNum = 1001 + rand() % (1046 - 1001 + 1);
		}//end while
		cout << "Your score is " << score << "/15" << endl;
		cout << "'You're much stronger than you think you are. Trust me.' - superman " << endl;
	}// end if (is_open)
	else 
	{
		cout << "file could not be opened" << endl;
	}
	menu();
	}// end Meduim


void hard(){
	//declare variables
	string quest = "";
	string answer = "";
	string ofLies = "";
	string qNum = "";
	int count = 0;
	int score = 0;
	int randNum = 0;
	
	//open hard.txt file 
	ifstream inFile; 
	inFile.open("hard.txt", ios::in);
	
	if(inFile.is_open())
	{//generate random number to choose question 
		srand(static_cast<int>(time(0)));
		randNum = 1001 + rand() % (1046 - 1001 + 1);
		cin.ignore(1000, '\n');
		getline(inFile, qNum, '#');
		getline(inFile, quest, '$');
		getline(inFile, answer);
	
		//searches file
		int temp = stoi(qNum);
		//loops program to only get 15 questions
		while (count <= 15) {
			while(randNum != temp && !inFile.eof())
			{
				getline(inFile, qNum, '#');
				getline(inFile, quest, '$');
				getline(inFile, answer);
				temp = stoi(qNum);
			} // end while (randNum...
			//when found
			if(randNum == temp)
			{
				cout << quest << " ?" << endl;
				cout << "\t Enter your answer or 99 for the menu" << endl;
				cin >> ofLies;
				cout << endl;
				
				if(ofLies != "99")
				{//closes program iif user enters 99
					transform(ofLies.begin(), ofLies.end(), ofLies.begin(), ::toupper);
					transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
					
					if(answer.find(ofLies, 0) != -1)
					{//checks if answer is right or wrong 
						right();
						score ++;
						count ++;
						cout << endl << endl;
					}
					else 
					{
						wrong();
						count ++;
						cout << "the correct answer(s) is" << endl;
						cout << answer << endl << endl;
					}
					inFile.close();
					inFile.open("hard.txt", ios::in);
				}//end if
			}// end if
			srand(static_cast<int>(time(0)));
			randNum = 1001 + rand() % (1046 - 1001 + 1);
		}//end while
		cout << "Your score is " << score << "/15" << endl;
		cout << "'You're much stronger than you think you are. Trust me.' - Superman " << endl;
	}// end if (is_open)
	else 
	{
		cout << "file could not be opened" << endl;
	}
	menu();
}// end Hard


void right(){	
int randNum = 0;
string num = "";
string phrase = "";
	ifstream inFile;
	inFile.open("right.txt", ios::in);
	
	if(inFile.is_open())
	{//genertes rand number to choose a random phrase from the file 
		srand(static_cast<int>(time(0)));
		randNum= 1010 + rand() % (1020 - 1010 + 1);
		cin.ignore(1000, '\n');
		getline(inFile, num, '#');
		getline(inFile, phrase);
		int temp = stoi(num);
		
		while(randNum != temp && !inFile.eof())
		{//searches file for phrase
			getline(inFile, num, '#');
			getline(inFile, phrase);
			int temp = stoi(num);
			if(randNum == temp)
			{
				
				cout << "\t" << "Correct: " << phrase << endl;
			}
		}//end while (randNum...
		inFile.close();
		inFile.open("right.txt", ios::in);
	}//end if(is_open
		else 
	{
		cout << "file could not be opened" << endl;
		
	}//end else 
}//end right

void wrong(){
int randNum = 0;
string num = "";
string phrase = "";
	ifstream inFile;
	inFile.open("wrong.txt", ios::in);
	
	if(inFile.is_open())
	{//genertes rand number to choose a random phrase from the file 
		srand(static_cast<int>(time(0)));
		randNum= 1010 + rand() % (1020 - 1010 + 1);
		cin.ignore(1000, '\n');
		getline(inFile, num, '#');
		getline(inFile, phrase);
		int temp = stoi(num);
		
		while(randNum != temp && !inFile.eof())
		{//searches file for phrase
			getline(inFile, num, '#');
			getline(inFile, phrase);
			int temp = stoi(num);
			
			if(randNum == temp)
			{
				cout << "\t" << phrase << endl;
			
			}
		}//end while (randNum...
		inFile.close();
		inFile.open("wrong.txt", ios::in);
	}//end if(is_open
	else 
	{
		cout << "file could not be opened" << endl;
		
	}//end else 
}//end wrong 
