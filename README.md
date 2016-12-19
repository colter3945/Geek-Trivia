GEEK TRIVIA ! 

#Synopsis
This is a trivia based game that currently is loaded with questions pertaining to subjects such as Marvel, Star Wars and Star trek. The program is written in C++. The program contains 3 different skill level options and over 100 trivia questions. When the user inputs an answer then the program will figure out if they are correct and track the score based on their input.

#Code Example
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
#Motivation
I know that I am not the only one that has a passion for these types of programs. They are some of the most time consuming games but also quite fun. However, I find that a lot of the time I am unable to play due to lack of wifi and I know that I am not the only one that enjoys a quick game during their downtime.

#Installation
Just download the zipped files and make sure all files are saved in the same location of your computer.

#API reference
None for now

#Tests
This program was laboratory tested to ensure the best quality of experience.

#Contributors
Just Colter 

License
Copyright (c) <2016> <retloc.inc>
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
