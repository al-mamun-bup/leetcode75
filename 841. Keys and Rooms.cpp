class Solution {
public:
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size());
        visited[0] = true;
        dfs(rooms, 0,visited);

        // Check if all rooms are visited
        for (bool isVisited : visited) {
            if (!isVisited) {
                return false;
            }
        }

        return true;
    }

private:
    void dfs(vector<vector<int>>& rooms, int currentRoom,vector<bool>&visited) {
        for (int nextRoom : rooms[currentRoom]) {
            if (!visited[nextRoom]) {
                visited[nextRoom] = true;
                dfs(rooms, nextRoom,visited);
            }
        }
    }
};
