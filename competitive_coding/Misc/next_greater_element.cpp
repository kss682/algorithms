/*

 You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.

The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number. 

https://leetcode.com/problems/next-greater-element-i/

*/

#include<bits/stdc++.h>
using namespace std;
 
map<int, int> find_all_max(vector<int>& nums2){
    map<int, int> max_value_map;
    int i,j = nums2.size() - 1;
    
    max_value_map.insert(pair<int, int>(nums2[j], -1));
    while(j > -1){
        for(i = j + 1; i < nums2.size(); i++){
            if(nums2[i] > nums2[j]){
                max_value_map.insert(pair<int, int>(nums2[j], nums2[i]));
                break;
            }
            if((i+1) == nums2.size())
                max_value_map.insert(pair<int, int>(nums2[j], -1));
        }
     j -= 1;
    }
   return max_value_map;
}


int main(){
    vector<int> nums2;
    vector<int>::iterator ptr;
    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(2);
    
    vector<int> nums1;
    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(2);
    
    map<int, int> max_value_map;
    map<int, int>::iterator itr;
    for(ptr = nums2.begin(); ptr != nums2.end(); ptr++)
        cout<<*ptr<<",";
    cout<<endl;
    
    
    max_value_map = find_all_max(nums2);
    int i,k = 0;
    vector<int> result;
    for(k = 0; k < nums1.size(); k++){
         result.push_back(max_value_map[nums1[k]]);
    }
    
    for(i = 0; i < result.size(); i++)
        cout<<result[i]<<",";
}
    
    
