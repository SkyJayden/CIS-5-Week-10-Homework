#include <iostream>

// Practice 10 — Jayden MB
// CIS 5 Week 10 · Gradebook tools

void printScores(const int scores[], int n) {
  for (int i = 0; i < n; i++) std::cout << scores[i] << " ";
  std::cout << "\n";
}

void curve(int scores[], int n, int points) {
  // TODO: add points to every score
}

void minMax(const int scores[], int n, int& lo, int& hi) {
  // TODO: start lo and hi at scores[0], then check the rest
}

bool findScore(const int scores[], int n, int target, int* where) {
  // TODO: when scores[i] == target, write i through where
  //       (only if where != nullptr) and return true
  return false;
}

int main() {
  int scores[5] = {72, 88, 95, 60, 81};
  const int N = 5;

  std::cout << "Before: ";
  printScores(scores, N);

  int lo = 0, hi = 0;
  minMax(scores, N, lo, hi);
  std::cout << "Low: " << lo << "  High: " << hi << "\n";

  curve(scores, N, 5);
  std::cout << "After curve +5: ";
  printScores(scores, N);

  int at = -1;
  if (findScore(scores, N, 100, &at)) std::cout << "100 found at index " << at << "\n";
  if (!findScore(scores, N, 50, nullptr)) std::cout << "50 not found\n";
  return 0;
}
