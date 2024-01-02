class Solution {
public:
     vector<vector<int>> findMatrix(vector<int>& nums) {
        // Count occurrences of each integer in the input array
        map<int, int> elementCount;
        
        // Resulting 2D array to be returned
        vector<vector<int>> resultArray;
        
        // Populate elementCount map
        for (int i = 0; i < nums.size(); ++i) {
            elementCount[nums[i]]++;
        }
        
        // Find the maximum count of occurrences
        int maxCount = 0;
        for (auto it : elementCount) {
            maxCount = max(maxCount, it.second);
        }
        
        // Create rows for the 2D array
        while (maxCount) {
            // Row to be added to the 2D array
            vector<int> row;
            
            // Traverse the elementCount map
            for (auto it : elementCount) {
                if (elementCount[it.first] != 0) {
                    // Add the element to the current row
                    row.push_back(it.first);
                    
                    // Decrease the count of the element
                    elementCount[it.first]--;
                }
            }
            
            // Decrease the maximum count as a row is created
            maxCount--;
            
            // Add the row to the resulting 2D array
            resultArray.push_back(row);
        }
        
        return resultArray;
    }
};