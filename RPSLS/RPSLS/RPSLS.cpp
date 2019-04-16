// RPSLS.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <conio.h>

using namespace std;

int CpuAuswahl() //CPU wählt aus
{
	srand((unsigned)time(NULL)); // Zufallsgenerator initialisieren.

// CPU Zufallszahl
		
		int cpuChoice = rand() % (5 - 1 + 1) + 1; // Zufallszahl zwischen 1 und 5 generieren.

		// cout und if-block nur für Debug; später entfernen!
		//cout << "Willst du eine Zufallszahl sehen? Dann druecke Enter." << endl;
		//if ('\n' == getchar())
			//cout << "Guckst du hier:  " << cpuChoice << endl;	// Eine Zufallszahl ausgeben.
		
		return cpuChoice;
}

int Game()
{
	bool loop = true;
	int loopCount = 1;
	int win = 0;
	int loss = 0;
	int draw = 0;

	do
	{

		cout << endl;
		cout << "1: Stein | 2: Papier | 3: Schere | 4: Echse | 5: Spock || 0: Exit" << endl;
		cout << endl;

		// CPU wählt aus
		int cpuAuswahl = CpuAuswahl();
		//cout << "CPU: " << cpuAuswahl << endl;
		cout << "CPU hat gewaehlt." << endl;

		// int cpuAuswahl to string
		string cpu;
		switch (cpuAuswahl)
		{
		case 1:
			cpu = "Stein";
			break;
		case 2:
			cpu = "Papier";
			break;
		case 3:
			cpu = "Schere";
			break;
		case 4:
			cpu = "Echse";
			break;
		case 5:
			cpu = "Spock";
			break;
		}

		// Spieler wählt aus
		cout << "Deine Auswahl: ";
		int SpielerAuswahl;
		cin >> SpielerAuswahl;
		//cout << "Spieler: " << SpielerAuswahl << endl;
		
		cout << endl;
		
		//system("CLS"); // clearscreen with visual Studio
		//clrscr(); // clearscreen with c4droid

		// int SpielerAuswahl to string
		string spieler;
		switch (SpielerAuswahl)
		{
		case 1:
			spieler = "Stein";
			break;
		case 2:
			spieler = "Papier";
			break;
		case 3:
			spieler = "Schere";
			break;
		case 4:
			spieler = "Echse";
			break;
		case 5:
			spieler = "Spock";
			break;
		case 0:
			loop = false;
			break;
		}

		//cout << "#" << loopCount << "    " << "win: " << win << "    " << "loss: " << loss << "    " << "draw: " << draw << endl;
		
		cout << "Player : CPU" << endl;
		// Auswertung | kann ggf. vereinfacht werden !!!
		if (spieler == cpu)
		{
			cout << spieler << " : " << cpu << " || " << "DRAW" << endl;
			draw += 1;
		}
		else
		{
			if (spieler == "Stein" && cpu == "Papier" || spieler == "Papier" && cpu == "Stein")
			{
				cout << spieler << " : " << cpu << " || " << "Papier umhuellt Stein" << endl;
				if (spieler == "Papier")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Stein" && cpu == "Schere" || spieler == "Schere" && cpu == "Stein")
			{
				cout << spieler << " : " << cpu << " || " << "Stein schleift Schere" << endl;
				if (spieler == "Stein")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Stein" && cpu == "Spock" || spieler == "Spock" && cpu == "Stein")
			{
				cout << spieler << " : " << cpu << " || " << "Spock vaporisiert Stein" << endl;
				if (spieler == "Spock")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Stein" && cpu == "Echse" || spieler == "Echse" && cpu == "Stein")
			{
				cout << spieler << " : " << cpu << " || " << "Stein zerquetscht Echse" << endl;
				if (spieler == "Stein")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Echse" && cpu == "Spock" || spieler == "Spock" && cpu == "Echse")
			{
				cout << spieler << " : " << cpu << " || " << "Echse vergiftet Spock" << endl;
				if (spieler == "Echse")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Echse" && cpu == "Schere" || spieler == "Schere" && cpu == "Echse")
			{
				cout << spieler << " : " << cpu << " || " << "Schere schneidet Echse" << endl;
				if (spieler == "Schere")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Echse" && cpu == "Papier" || spieler == "Papier" && cpu == "Echse")
			{
				cout << spieler << " : " << cpu << " || " << "Echse frisst Papier" << endl;
				if (spieler == "Echse")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Spock" && cpu == "Schere" || spieler == "Schere" && cpu == "Spock")
			{
				cout << spieler << " : " << cpu << " || " << "Spock zerschlaegt Schere" << endl;
				if (spieler == "Spock")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Spock" && cpu == "Papier" || spieler == "Papier" && cpu == "Spock")
			{
				cout << spieler << " : " << cpu << " || " << "Papier widerlegt Spock" << endl;
				if (spieler == "Papier")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
			if (spieler == "Schere" && cpu == "Papier" || spieler == "Papier" && cpu == "Schere")
			{
				cout << spieler << " : " << cpu << " || " << "Schere schneidet Papier" << endl;
				if (spieler == "Schere")
				{
					win += 1;
				}
				else {
					loss += 1;
				}
			}
		}
		cout << endl;
		cout << "#" << loopCount << "    " << "win: " << win << "    " << "loss: " << loss << "    " << "draw: " << draw << endl;
		cout << endl;
		cout << "_________________________________________________________________" << endl;
		cout << endl;

		loopCount += 1;

	} while (loop == true);

	return 0;
}

int main(void)
{
	bool mainloop = true;
	do
	{
	//Main Menu
		// very simple Console coloring for windows cmd
		//system("Color 0F"); // F=background, 3=text
	cout << "########################################" << endl;
	cout << "# Stein, Papier, Schere, Echse, Spock! #" << endl;
	cout << "########################################" << endl;
	cout << endl;
	cout << "Optionen:" << endl;
	cout << "1: Start" << endl;
	cout << "0: Exit" << endl;
	cout << endl;
	cout << "Eingabe: ";

	int AuswahlOption;
	cin >> AuswahlOption;

	if (AuswahlOption == 1)
	{
		system("CLS"); // clearscreen with visual studio
		//clrscr(); // clearscreen with c4droid
		Game();
	}
	
	if (AuswahlOption ==	0)
	{
		mainloop = false;
	}
	system("CLS"); // clearscreen with visual studio
	//clrscr(); // clearscreen with c4droid
	} while ( mainloop == true );
	
	cout <<	"beendet!";

	return 0;
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.