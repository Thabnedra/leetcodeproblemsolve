#include<iostream>
#include<vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //int size=nums.size();
        vector<int>temp;
        unordered_map<int,vector<int>> mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]].push_back(i+1);
        }
        for(int i=0;i<=(nums.size());i++){
            //vector<int> v2;
            int select;
            select=target-nums[i];
            //copy(nums.begin()+i+1,nums.end(),back_inserter(v2));
           // v2.assign(nums.begin()+i+1,nums.end());
            //for(int j=0;j<size;j++){
               // mapp[v2[j]]=j+1;
            //}
            mapp[nums[i]].erase(mapp[nums[i]].begin());
            if(mapp.count(select)>0 && !mapp[select].empty()){
                temp.push_back(i);
                temp.push_back(mapp[select][0]-1);
                break;
            }
        }
        return temp;


    }
};