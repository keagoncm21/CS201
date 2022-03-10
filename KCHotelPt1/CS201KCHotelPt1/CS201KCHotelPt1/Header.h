#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct booking {
	int reservationNum;
	string firstName;
	string lastName;
	string roomType;
	int numNights;
	int roomNum;
	float totalCost;
};

struct hotel {
	int roomNum;
	string roomType;
	bool availability;
};

struct room {
	string roomType;
	float costPerNight;
	int availableCount;
};

void readFile(vector<booking>&, vector <hotel>& , vector <room>&, vector<string>&, ifstream & );

void assignRooms(vector<booking>&, vector <hotel>&, vector <room>&, vector <string>&);

void printReport(vector<booking>&, vector<string> &);
