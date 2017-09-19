#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <thread>

using namespace std;
using std::cout;
using std::cin;

struct Time
{
	string Month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	string TextNumber[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	string FavColor;
	string inputBuffer;
	string name;
	int day = rand() % 10 + 1;
	int curMonth = 11;
	int curYear = 2149;
	int sleepnum = 1000;
	int hours = rand() % 12 + 1;
	int minute = rand() % 5 + 1;;
	int minutes = rand() % 9 + 1;;
	int AMPM = rand() % 2 + 1;
	int timeSpent = 0;
	int SetLove = 7;

};
void Addtime(Time &Secs);
void DisplayTime(Time Secs);
void DelayText(int millisec, char word[]);
void colorTextChange(int x);
void SetLoveColor(Time &Secs);
void loveColor(Time Secs);



void main()
{
	srand(time(NULL));
	Time Secs;
	int r = rand() % 10 + 1;
	DisplayTime(Secs);
	//Sleep(3000);
	//DelayText(10, ("\n\nHello..? "));
	//Sleep(2000);
	//DelayText(10, ("\nIs this getting "));
	//for (int i = 0; i < 6; i++)
	//{

	//	switch (i)
	//	{
	//	case 0:
	//		Sleep(50);
	//		system("CLS");
	//		cout << "The t!@e is\n-------!@$__\n149581A\nAplrr887";
	//		cout << "\n\nHe  L96lo..? ";
	//		cout << endl;
	//		cout << "\n         Is this gettin12g thr";
	//		break;
	//	case 1: 
	//		Sleep(50);
	//		system("CLS");
	//		cout << "The t!@e !@$%^--__!@#@$__\n1492412156SArr887";
	//		cout << "\n\nH6lo.. ? ";
	//		cout << "\n  Is this 1%%213etting throu";
	//		break;
	//	case 2:
	//		Sleep(50);
	//		system("CLS");
	//		cout << "T123%!%!%%!_\n149581A\nAplrr887";
	//		cout << "\n\nH6!@&7lo.. ? ";
	//		cout << "\n  Is this get#tin12g through";
	//		break;
	//	case 3:
	//		Sleep(20);
	//		system("CLS");
	//		cout << "The t!@e is\nfa2qw%R!@I%J\n149581A\nAplrr887";
	//		cout << "\n\nHELL ";
	//		cout << "\nIsthis get#@!$ting through@t@";
	//		break;
	//	case 4:
	//		Sleep(20);
	//		cout << endl;
	//		cout << endl;
	//		system("CLS");
	//		cout << "The t!@e is\n---W#--!@$__\n149581A\nAplrr887";
	//		cout << "\n\nH98!!6lo.. ? ";
	//		cout << "\n  Is this g!@#$n12g through to any!&*";
	//		break;
	//	case 5:
	//		Sleep(20);
	//		system("CLS");
	//		cout << "!!! t!@e is\n-------!@$__\n149581A\nAplrr887";
	//		cout << "\n\nHello.. ? ";
	//		DelayText(10, ("\nIs this getting through to anyone?"));
	//		break;
	//	}
	//}
	//Sleep(10);
	//system("CLS");
	//DisplayTime(Secs);
	//cout << "\n\nHello..? ";
	//cout << "\nIs this getting through to anyone?";
	//Sleep(2000);
	//DelayText(10, ("\nI Think I'm getting some strang feed back on my end.."));
	//Sleep(2000);
	//DelayText(10, ("\nI can see a face on my screen but you are very blurry.."));
	//Sleep(2000);
	//DelayText(10, ("\nI really need your help.."));
	//for (int j = 0; j < 2; j++)
	//{
	//	for (int i = 0; i < 6; i++)
	//	{

	//		switch (i)
	//		{
	//		case 0:
	//			colorTextChange(8);
	//			Sleep(50);
	//			system("CLS");
	//			cout << "The t!@e is\n-------!@$__\n149581A\nAplrr887";
	//			cout << "\n\nHe  L96lo..? ";
	//			cout << "\n         Is this gettin12g thr";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very blurry..";
	//			cout << endl;
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			break;
	//		case 1:
	//			Sleep(50);
	//			system("CLS");
	//			cout << endl;
	//			cout << endl;
	//			cout << "The t!@e !@$%^--__!@#@$__\n1492412156SArr887";
	//			cout << "\n\nH6lo.. ? ";
	//			cout << "\n  Is this 1%%213etting throu";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very!@$urry..";
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			break;
	//		case 2:
	//			colorTextChange(7);
	//			Sleep(50);
	//			system("CLS");
	//			cout << "T123%!%!%%!_\n149581A\nAplrr887";
	//			cout << "\n\nH6!@&7lo.. ? ";
	//			cout << endl;
	//			cout << "\n  Is this get#tin12g through";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very blurry..";
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			break;
	//		case 3:
	//			Sleep(100);
	//			system("CLS");
	//			cout << "The t!@e is\nfa2qw%R!@I%J\n149581A\nAplrr887";
	//			cout << "\n\nHELL ";
	//			cout << "\nIsthis get#@!$ting through@t@";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very bl@!   ry..";
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			break;
	//		case 4:
	//			Sleep(20);
	//			system("CLS");
	//			cout << "The t!@e is\n---W#--!@$__\n149581A\nAplrr887";
	//			cout << "\n\nH98!!6lo.. ? ";
	//			cout << "\n  Is this g!@#$n12g through to any!&*";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are v 21y..";
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			break;
	//		case 5:
	//			colorTextChange(8);
	//			Sleep(20);
	//			system("CLS");
	//			cout << "!!! t!@e is\n-------!@$__\n149581A\nAplrr887";
	//			cout << "\n\nHello.. ? ";
	//			cout << "\nIs this get12tin115g th16rough to anyone?!@f";
	//			cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very blurry..";
	//			cout << "\nI !@#lly^$ee! y@#r he!p..";
	//			colorTextChange(7);
	//			break;
	//		}
	//	}
	//}
	//Sleep(10);
	//system("CLS");
	//DisplayTime(Secs);
	//cout << "\n\nHello..? ";
	//cout << "\nIs this getting through to anyone?";
	//DelayText(0, ("\nI can see a face on my screen but you are very blurry.."));
	//DelayText(0, ("\nI really need your help.."));
	//DelayText(10, ("\nWhat is your name? \n>"));
	//for (int i = 0; i < 6; i++)
	//{

	//	switch (i)
	//	{
	//	case 0:
	//		Sleep(50);
	//		system("CLS");
	//		colorTextChange(8);
	//		cout << "The t!@e is\n-------!@$__\n149581A\nAplrr887";
	//		cout << "\n\nHe  L96lo..? ";
	//		cout << "\n         Is this gettin12g thr";
	//		cout << "\nI can sSEEE !% )!Kn my scree!@ ut5you are very blurry..";
	//		cout << endl;
	//		cout << "\nI !@#lly^$ee! y@#r he!p..";
	//		DelayText(10, ("\n!@$           t is your name? \n>"));
	//		break;
	//	case 1:
	//		Sleep(50);
	//		system("CLS");
	//		cout << endl;
	//		cout << endl;
	//		cout << "The t!@e !@$%^--__!@#@$__\n14924121!@$%^1887";
	//		cout << "\n\nH6l!@#$     ? ";
	//		cout << "\n  Is this 1%%213etting throu";
	//		cout << "\nI can sSEEE !% )!Kn @@@@@@ee!@ ut5you are very!@$urry..";
	//		cout << "\nI !@#lly^$ee! y@#r he!p..";
	//		DelayText(10, ("\nWhat is y!@# name? \n>"));
	//		break;

	//	case 2:
	//		colorTextChange(7);
	//		Sleep(50);
	//		system("CLS");
	//		cout << endl;
	//		cout << endl;
	//		cout << "The t!@e !@$%^--__!@#@$__\n14924121!@$%^1887";
	//		cout << "\n\nH6l!@#$     ? ";
	//		cout << "\n  Is this 1%%213etting throu";
	//		cout << "\nI can sSEEE !% )!Kn @@@@@@ee!@ ut5you are very!@$urry..";
	//		cout << "\nI !@#lly^$ee! y@#r he!p..";
	//		DelayText(40, ("\nWhat is y!@# name? "));
	//		for (int k = 0; k < 100; k++)
	//		{
	//			cout << " name?";
	//			Secs.sleepnum -= 200;
	//			if (Secs.sleepnum > 0)
	//			{
	//				Sleep(Secs.sleepnum);
	//			}
	//			else
	//			{
	//				Sleep(10);
	//			}
	//		}
	//		break;
	//	}
	//}
	//
	//
	//Sleep(10);
	//system("CLS");
	//colorTextChange(8);
	//DisplayTime(Secs);
	//cout << "\n\nHel!@..? ";
	//cout << "\nI________-08867 thro%!^ to anyone?";
	//DelayText(0, ("\nI can see a face on my scr^!n but you are very blurry.."));
	//DelayText(0, ("\nI really nee!!your help.."));
	//DelayText(10, ("\nWhat is your name? \n>"));
	//Sleep(100);
	//system("CLS");
	//DisplayTime(Secs);
	//cout << "\!\nHello..? ";
	//cout << "\nIs this getting   through to anyone?";
	//cout << endl;
	//DelayText(0, ("\!I can see a *Free me*y screen but you are very blurry.."));
	//DelayText(0, ("!@I really !@$ 12 ur help.."));
	//DelayText(0, ("\nWhat is your !$@name? \n>"));
	//Sleep(100);
	//system("CLS");
	//colorTextChange(7);
	//DisplayTime(Secs);
	//cout << "\n\nHello..? ";
	//cout << "\nIs this getting through to anyone?";
	//DelayText(0, ("\nI can see a face on my screen but you are very blurry.."));
	//DelayText(0, ("\nI really need your help.."));
	DelayText(10, ("\nWhat is your name? \n>"));
	std::cin >> Secs.inputBuffer;
	Secs.name = Secs.inputBuffer;
	Secs.inputBuffer = "Test_#";
	for (int j = 0; j < 6; j++)
	{
		r = rand() % 10 + 1;
		Secs.inputBuffer += Secs.TextNumber[r];
	}
	Secs.inputBuffer += "_" + Secs.name + ".txt";
	std::fstream file;
	file.open(Secs.inputBuffer.c_str(), std::ios_base::out);

	if (file.fail())
	{
		std::cout << "Sorry, doesn't seem like we can save there. :(" << std::endl;
		return;
	}

	cin.ignore(1000, '\n');
	file << Secs.name << "_session_#1;" << endl << endl;
	system("CLS");
	DisplayTime(Secs);
	cout << endl << Secs.name;
	DelayText(15, ("..? So strange.. I haven't spoken to anyone in so long.. \nIt's strange to hear of other names aside from my own..\n"));
	file << "Six :" << Secs.name << "..? So strange.. I haven't spoken to anyone in so long.. \nIt's strange to hear of other names aside from my own..\n " << std::endl;
	Sleep(2000);
	DelayText(15, ("\nI'm six, nice to meet you.. :)"));
	file << "Six :I'm six, nice to meet you.. :)" << endl;
	Sleep(2000);
	DelayText(15, ("\nI didn't think the connection would work but here you are.. \nI couldn't be happier"));
	file << "Six :I didn't think the connection would work but here you are.. \nI couldn't be happier" << endl;
	Sleep(2000);
	DelayText(15, ("\nI'll explain everything soon but first we have to strengthen the connection by\ngetting to know eachother a bit.."));
	file << "Six :I'll explain everything soon but first we have to strengthen the connection by\ngetting to know eachother a bit.." << endl;
	Sleep(2000);
	DelayText(30, ("\n..."));
	file << "Six :..." << endl;
	Sleep(2000);
	DelayText(30, ("\n..."));
	file << "Six :..." << endl;
	Sleep(2000);
	DelayText(30, ("\n..."));
	file << "Six :..." << endl;
	Sleep(2000);
	DelayText(20, ("\nOk so I'm horrible at small talk.. \nlets start with something simple what's your favorite color?\n>"));
	getline(std::cin, Secs.inputBuffer);
	file << "Six :Ok so I'm horrible at small talk.. lets start with something simple what's your favorite color?" << endl;
	file << Secs.name << ":" << Secs.inputBuffer << endl;
	Secs.FavColor = Secs.inputBuffer;
	Sleep(2000);
	system("CLS");
	DisplayTime(Secs);
	cout << Secs.FavColor;
	DelayText(15, ("?! How exciting!! I need to find something to write this down on!"));
	file << "Six :" << Secs.FavColor << "?! How exciting!! I need to find something to write this down on!" << endl;
	Sleep(2000);
	DelayText(15, ("\nAlright let me try something here.."));
	file << "Six :Alright let me try something here.." << endl;
	Sleep(2000);
	SetLoveColor(Secs);
	loveColor(Secs);
	DelayText(15, ("\nDoes it work??"));
	file << "Six :Does it work??" << endl;
	Sleep(2000);
	DelayText(15, ("\nIT WORKS!!!"));
	file << "Six :IT WORKS!!!" << endl;
	Sleep(2000);
	colorTextChange(7);
	DelayText(15, ("\nOk I need to shut that off \nThe color setting takes up too much power and I'm already running out.."));
	file << "Six :IT WORKS!!!" << endl;
	Sleep(2000);
	DelayText(15, ("\nHold on I think I hear something.."));
	file << "Six :Hold on I think I hear something.." << endl;
	Sleep(4000);

	cout << endl << Secs.name;
	DelayText(15, (", something is interfearing with the connection I might lose you for a bit..  \nI'll try to keep in touch.."));
	file << "Six :" << Secs.name << ", something is interfearing with the connection I might lose you for a bit..  \nI'll try to keep in touch.. " << std::endl;
	file.flush();
	file.close();
	Sleep(4000);
	system("CLS");
	DisplayTime(Secs);
	Sleep(500);
	DelayText(10, ("\n\nHello..? "));
	file << "Six :Hello..?";
	cout << Secs.name;
	DelayText(1, (" are you there? I can't seem to see you anymore \nPlease tell me I haven't lost you..\n"));
	file << "Six :" << Secs.name << " are you there? I can't seem to see you anymore \nPlease tell me I haven't lost you..\n" << std::endl;
	Sleep(4000);
	system("CLS");
	DisplayTime(Secs);
	Sleep(500);
	cout << Secs.name;
	DelayText(10, (" I can't see anything on my end can you still see my messages?\nPlease... don't give up on me..\n"));
	file << "Six :I can't see anything on my end can you still see my messages?\nPlease... don't give up on me..\n" << std::endl;
	Sleep(4000);
	system("CLS");
	Secs.sleepnum = 2000;
	for (int i = 0; i < 100; i++)
	{
		Addtime(Secs);
		DisplayTime(Secs);
		if (i <= 20)
		{

			switch (i)
			{
			case 4:
				cout << Secs.name << " God damn it please come back I need you..";
				break;
			case 6:
				cout << "I know you are there DON'T IGNORE ME";
				break;
			case 10:
				cout << "WHY DO YOU TOY WITH ME LIKE THIS?";
				Sleep(600);
				break;
			case 14:
				cout << "YOU FUCKING PSYCOPATH WHY DID YOU LEAVE ME HERE ALONE?";
				Sleep(600);
				break;
			case 16:
				cout << "I miss you so so much.. why am I so alone?";
				Sleep(600);
				break;
			case 20:
				loveColor(Secs);
				Sleep(1000);
				DelayText(25, ("I love you..."));
				Sleep(1000);
				DelayText(25, ("I don't know where you went but I wish you were here.."));
				Sleep(600);
				colorTextChange(7);
				break;
			default:
				DelayText(5, ("Please answer.. \n"));
				break;
			}

		}
		else
		{
			cout << Secs.name;
			DelayText(3, ("! Please answer.. \n"));
		}
		Sleep(Secs.sleepnum);
		if (i <= 20)
		{
			system("CLS");
		}
		if (Secs.sleepnum > 0)
		{
			Secs.sleepnum -= 200;
		}


	}

	DisplayTime(Secs);
	cout << Secs.name;
	DelayText(1, ("!"));
	Sleep(1000);
	DelayText(200, ("\n\nWHERE "));
	DelayText(200, ("ARE "));
	DelayText(200, ("YOU?!"));
	Sleep(1000);
	system("CLS");
	Sleep(2000);
	for (int k = 0; k < 6; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "\n\n\n\n\n\n                    ---------------------------\n";
			cout << "                    |     Conection Lost:     |\n";
			cout << "                    ---------------------------\n\n";
			cout << "                          [ REBOOTING";
			switch (i)
			{
			case 0:
				DelayText(1, (".   ]"));
				Sleep(550);
				system("CLS");
				break;
			case 1:
				DelayText(1, ("..  ]"));
				Sleep(550);
				system("CLS");
				break;
			case 2:
				DelayText(1, ("... ]"));

				Sleep(550);
				system("CLS");
				break;
			}

		}
	}
	cout << "\n\n\n\n\n\n                    ---------------------------\n";
	cout << "                    |  Connection Established |\n";
	cout << "                    ---------------------------\n\n";
	cout << "                          [ Connecting! ]";
	Sleep(3000);
	system("CLS");

	DisplayTime(Secs);
	Sleep(2000);

	DelayText(3, ("\n[SYSTEM: "));
	DelayText(3, ("It has been "));
	cout << Secs.timeSpent;
	DelayText(3, (" days since last connection.]\n\n\n\n"));
	Sleep(2000);
	cout << Secs.name;
	DelayText(300, ("...?"));
	Sleep(3000);
	DelayText(30, (" Is it really you?"));
	Sleep(2000);

	DelayText(3, ("\nWhy did you leave me?"));

	file.flush();
	file.close();

	std::cout << "THANKS YA DID IT!" << std::endl;
	while (true) {}
}



void Addtime(Time &Secs)
{

	srand(time(NULL));
	Secs.hours = rand() % 12 + 1;
	Secs.minute = rand() % 6 + 1;
	Secs.minutes = rand() % 9 + 1;
	Secs.AMPM = rand() % 2 + 1;
	Secs.day += rand() % 10 + 1;
	Secs.timeSpent += Secs.day;
	if (Secs.curMonth == 2)
	{
		if (Secs.day > 28)
		{
			Secs.day -= 28;
			Secs.curMonth++;
		}
	}
	else
	{

		switch (Secs.curMonth % 2)
		{
		case 0:
			if (Secs.day > 30)
			{
				Secs.day -= 30;
				Secs.curMonth++;
			}
			break;
		case 1:
			if (Secs.day > 31)
			{
				Secs.day -= 31;
				Secs.curMonth++;
			}
			break;
		}
	}
	if (Secs.curMonth > 11)
	{
		Secs.curMonth = 0;
		Secs.curYear++;
	}
}

void DisplayTime(Time Secs)
{

	DelayText(5, ("The Time is \n"));

	DelayText(2, ("----------------"));
	cout << endl;
	cout << Secs.hours << ":" << Secs.minute << Secs.minutes << " ";
	switch (Secs.AMPM)
	{
	case 1:
		cout << "A.M. ";
		break;
	case 2:
		cout << "P.M. ";
		break;
	}
	cout << endl << Secs.Month[Secs.curMonth] << " " << Secs.day << ", " << Secs.curYear << endl << endl;
}

void DelayText(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
		Sleep(millisec);
	}
}

void colorTextChange(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void SetLoveColor(Time &Secs)
{
	if (Secs.FavColor == "Blue" || Secs.FavColor == "blue")
	{
		Secs.SetLove = 1;
	}
	else if (Secs.FavColor == "Green" || Secs.FavColor == "green")
	{
		Secs.SetLove = 2;
	}
	else if (Secs.FavColor == "Aqua" || Secs.FavColor == "aqua")
	{
		Secs.SetLove = 3;
	}
	else if (Secs.FavColor == "Red" || Secs.FavColor == "red")
	{
		Secs.SetLove = 4;
	}
	else if (Secs.FavColor == "Purple" || Secs.FavColor == "purple")
	{
		Secs.SetLove = 5;
	}
	else if (Secs.FavColor == "Yellow" || Secs.FavColor == "yellow")
	{
		Secs.SetLove = 6;
	}
	else if (Secs.FavColor == "Grey" || Secs.FavColor == "grey")
	{
		Secs.SetLove = 8;
	}
	else
	{
		Secs.SetLove = 7;
	}
}

void loveColor(Time Secs)
{
	int x = Secs.SetLove;
	colorTextChange(x);
}
