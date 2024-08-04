using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // creating a unordered map and stroing the nums as keys
        // and values as indices
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            //umap.find(complement):
            // This function is used to search for the key complement in the        unordered map umap.
            // If the key is found, find() returns an iterator pointing to the element in the map.
            // If the key is not found, find() returns an iterator pointing to the end of the map, which is represented by umap.end().
            if ( umap.find(target-nums[i])!= umap.end() ){
                return {i,umap[(target-nums[i])]};
            }
            
            umap[nums[i]] = i;
        }
    return {};
    }
};
