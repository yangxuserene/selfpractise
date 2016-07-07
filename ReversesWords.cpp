#include<iostream>
#include<string>

using namespace std;

void reverseWords(string &s) {
    int i = s.length()-1;
    if(i<2) return ;
    string newstring;
    while(i>0){
        while(isspace(s[i])) i--;
        int wstart = i;
        int wend = i;
        while(!isspace(s[wend])) wend--;
        int wordlen = wstart -  wend;
        string word = s.substr(wend+1, wordlen);
        newstring.append(word);
        newstring.push_back(s[wend]);
        i = wend;
    }

    s = newstring;

}


int main(){

    string s1 = "    ";
    reverseWords(s1);
    cout << s1 <<endl;

}
