#include <iostream>
using namespace std;

/*
 * Given a string s consisting of words and spaces, return the length of the
 * last word in the string. A word is a maximal substring consisting of
 * non-space characters only.
 */

int lengthOfLastWord(string s) {
  string lastWord = "";
  int i = s.length() - 1;

  while (i >= 0 && s[i] == ' ') {
    i--;
  }

  while (i >= 0 && s[i] != ' ') {
    lastWord += s[i--];
  }

  return lastWord.length();
}

int main() {
  string s = "   fly me   to   the moon  ";
  int wordLen = lengthOfLastWord(s);

  cout << wordLen << endl;

  return 0;
}
