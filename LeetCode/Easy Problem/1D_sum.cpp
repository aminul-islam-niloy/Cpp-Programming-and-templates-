#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <vector>


// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         if(nums.size() < 2) return nums;
        
//         for(int i = 1; i < nums.size(); i++){
//             nums[i] += nums[i-1];
//         }
        
//         return nums;
//     }
// };


// class Solution {
//    public:
//      vector<int> runningSum(vector<int>&num)
//      {

//       if(num.size()<2) return num;

//       for(int i=1; i<num.size(); i++){
//         num[i] = num[i]+ num[i-1];
//       }


//         return num;
//      }
// };