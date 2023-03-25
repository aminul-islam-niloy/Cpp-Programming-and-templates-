#include<iostream>
#include<vector>
using namespace std;


int main()

{
    int arr[] = {2,7,11,15};
    int target=9;

    vector <int> res;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=i+1; j<sizeof(arr); j++){
            if((arr[i]+ arr[j]) == target)
            {
              res.push_back(i);
              res.push_back(j);
            }
        }

    }
   
   for(int x: res){
    cout<<x<<" ";
   }
   
   
}



// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> map;
//     vector<int> result;
//     for (int i = 0; i < nums.size(); i++) {
//         int complement = target - nums[i];
//         if (map.find(complement) != map.end()) {
//             result.push_back(map[complement]);
//             result.push_back(i);
//             return result;
//         }
//         map[nums[i]] = i;
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
//     vector<int> result = twoSum(nums, target);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//       vector <int> res;

//   //  int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             if((nums[i]+ nums[j]) == target)
//             {
//               res.push_back(i);
//               res.push_back(j);
//             }
//         }

//     }
 
//        return res; 
//     }
// };
