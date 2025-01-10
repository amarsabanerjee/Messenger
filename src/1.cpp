int getDistance(const string& word) {
    // Correct keyboard layout mapping (character -> (row, col))
    unordered_map<char, pair<int, int>> keyMap = {
        {'1', {0, 0}}, {'2', {0, 1}}, {'3', {0, 2}}, {'4', {0, 3}}, {'5', {0, 4}}, 
        {'6', {0, 5}}, {'7', {0, 6}}, {'8', {0, 7}}, {'9', {0, 8}}, {'0', {0, 9}},
        {'Q', {1, 0}}, {'W', {1, 1}}, {'E', {1, 2}}, {'R', {1, 3}}, {'T', {1, 4}},
        {'Y', {1, 5}}, {'U', {1, 6}}, {'I', {1, 7}}, {'O', {1, 8}}, {'P', {1, 9}},
        {'A', {2, 0}}, {'S', {2, 1}}, {'D', {2, 2}}, {'F', {2, 3}}, {'G', {2, 4}}, 
        {'✶', {2, 5}}, {'H', {2, 6}}, {'J', {2, 7}}, {'K', {2, 8}}, {'L', {2, 9}},
        {'Z', {3, 2}}, {'X', {3, 3}}, {'C', {3, 4}}, {'V', {3, 5}}, 
        {'B', {3, 6}}, {'N', {3, 7}}, {'M', {3, 8}}
    };
    
    // Initial position of the robot (starting at ✶ which is at position (2, 5))
    int currRow = 2, currCol = 5;
    int totalDistance = 0;
    
    // Iterate over each character in the input string
    for (char ch : word) {
        // Get target position from the map
        auto [targetRow, targetCol] = keyMap[ch];
        
        // Calculate Manhattan distance
        totalDistance += abs(targetRow - currRow) + abs(targetCol - currCol);
        
        // Update current position to the new character's position
        currRow = targetRow;
        currCol = targetCol;
    }
    
    return totalDistance;
}