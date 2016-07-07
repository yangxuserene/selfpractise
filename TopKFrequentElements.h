#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;


class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> mymap;
            for(int i=0; i<nums.size(); i++){
                mymap[nums[i]]++;
            }

            vector<int> res;

            priority_queue<pair<int, int> > pque;

            for(auto it = mymap.begin(); it != mymap.end(); it++){
                pque.push(make_pair(it->second, it->first));
                if(pque.size() > (int)mymap.size()-k){
                    res.push_back(pque.top().second);
                    pque.pop();
                }

            }

            return res;

        }
};


// int main(){
//     Solution slt;
//     int myints[] = {1, 4,4,1 ,2,3,4,2,3,3,3};
//     vector<int> numbers (myints, myints + sizeof(myints) / sizeof(int) );
//     int k = 3;
//     vector<int> res=slt.topKFrequent(numbers, k);
//     cout<<"The top"<<k<<"elements are"<<endl;
//     for(int ele:res)
//         cout<<ele<<" "<<endl;
// }
