#include<iostream>
#include<string>
#include<vector>
using namespace std;

void backtracking(const string dic[], vector<string>& res, string& local, int index, const string& digits){
    if(index == digits.size()){
        res.push_back(local);
        return;
    }
    else{
        for(int i=0; i<dic[digits[index] - '0'].size(); i++){
            local.push_back(dic[digits[index] - '0'][i]);
            backtracking(dic, res, local, index+1, digits);
            local.pop_back();

        }
    }
}
vector<string> letterCombinations(string digits) {
    vector<string> res;
    if(digits.size() == 0) return res;
    string local;
    const string dic[] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    backtracking(dic, res, local, 0, digits);
    return res;
}
void printVector(vector<string> ss){
    cout << "{";
    for(int i=0; i < ss.size(); i++){
        if (i > 0) cout << ",";
        cout << ss[i];
    }
    cout << "}"<< endl;
}


int main(int argc, char** argv){

    string s = "23";
    if(argc>1){
    s = argv[1];
    }
    vector<string> ss = letterCombinations(s);
    printVector(ss);
    return 0;
}
