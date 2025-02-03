struct destination
{
    destination(int des, int time)
    {
        this->dest = des;
        this->time = time;
    }
    int dest;
    int time;
};
class Solution {
    int solve(map<int, vector<destination>>& graph, int source, vector<int>& visited, int distance)
    {
        if (visited[source] == 1)
        {
            return -1;
        }
        visited[source] = 1;
        for (auto& eachSource : graph[source])
        {
            auto result = solve(graph, eachSource.dest, visited, distance + 1);
            if (result != -1)
            {
                if (distance > _max)
                {
                    _max = distance;
                }
            }
            else
            {
                return -1;
            }
        }
        return 1;
    }
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) 
    {
        vector<int> visited(N + 1, 0);
        map<int, vector<destination>> graph;
        for (auto& list : times)
        {
            graph[list[0]].push_back(destination(list[1], list[2]));
        }
        solve(graph, K, visited, 1);
        for (int i = 1; i < visited.size(); i++)
        {
            if (visited[i] == 0)
            {
                return -1;
            }
        }
        return _max;
    }
    int _max = 0;
};