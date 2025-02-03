class Solution 
{
    bool isAlreadyVisited(int roomNumber)
    {
        return _roomNumberVisited.find(roomNumber) != _roomNumberVisited.end() &&
                _roomNumberVisited[roomNumber] == true;
    }
    void canVisitAllRoomsHelper(vector<vector<int>>& rooms, int roomNum) 
    {
        if (!isAlreadyVisited(roomNum))
        {
            _roomKeys.insert(roomNum);
            _roomNumberVisited[roomNum] = true;
            for (auto eachKey : rooms[roomNum])
            {
                canVisitAllRoomsHelper(rooms, eachKey);
            }
        }
        return;
    }    
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        canVisitAllRoomsHelper(rooms, 0);
        return _roomKeys.size() == rooms.size();
    }
    map<int, bool> _roomNumberVisited{};
    set<int> _roomKeys{};
};