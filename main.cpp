#include <iostream>
#include <string>

// Practice 10 — Jayden MB
// CIS 5 Week 10 · Gradebook tools

using std::string;
using std::cout;
using std::cin;
using std::endl;

void printScores(const int scores[], int n) {
	for (int i = 0; i < n; i++) cout << scores[i] << " ";
	cout << endl;
}

void curve(int scores[], int n, int points) {
	for (int* i = scores; i < scores + n; i++) *i += points;
}

void minMax(const int scores[], int n, int& lo, int& hi) {
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			lo = scores[i];
			hi = scores[i];
		}
		else {
			if (scores[i] < lo) lo = scores[i];
			if (scores[i] > hi) hi = scores[i];
		}
	}
}

bool findScore(const int scores[], int n, int target, int* where) {
	for (int i = 0; i < n; i++) {
		if (scores[i] == target) {
			if (where) *where = i;
			return true;
		}
	}
	return false;
}

int main() {
	int scores[5] = { 72, 88, 95, 60, 81 };
	const int N = 5;
	

	cout << "Before: ";
	printScores(scores, N);

	int lo = 0, hi = 0;
	minMax(scores, N, lo, hi);
	cout << "Low: " << lo << "  High: " << hi << "\n";
	

	curve(scores, N, 5);
	cout << "After curve +5: " << scores[0] << " " << scores[1] << " " << scores[2] << " " << scores[3] << " " << scores[4] << "\n";
	

	int at = 1;
	if (findScore(scores, N, 100, &at)) cout << "100 found at index " << at << "\n";
	if (!findScore(scores, N, 50, nullptr)) cout << "50 not found\n";
	return 0;
}
