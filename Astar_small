#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int grid[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0}
};

int heuristic(int x, int y, int gx, int gy) {
    return abs(x - gx) + abs(y - gy);  // Manhattan Distance
}

void aStar(int sx, int sy, int gx, int gy) {
    vector<vector<int> > g(5, vector<int>(5, 1e9));
    vector<vector<int> > px(5, vector<int>(5, -1));
    vector<vector<int> > py(5, vector<int>(5, -1));
    g[sx][sy] = 0;

    vector<pair<int, int> > open;
    open.push_back(make_pair(sx, sy));
    int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

    while (!open.empty()) {
        int best = 0;
        for (int i = 1; i < open.size(); i++) {
            int fx = g[open[i].first][open[i].second] + heuristic(open[i].first, open[i].second, gx, gy);
            int fbest = g[open[best].first][open[best].second] + heuristic(open[best].first, open[best].second, gx, gy);
            if (fx < fbest) best = i;
        }

        int x = open[best].first, y = open[best].second;
        open.erase(open.begin() + best);
        if (x == gx && y == gy) break;

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5 && grid[nx][ny] == 0) {
                if (g[x][y] + 1 < g[nx][ny]) {
                    g[nx][ny] = g[x][y] + 1;
                    px[nx][ny] = x;
                    py[nx][ny] = y;
                    open.push_back(make_pair(nx, ny));
                }
            }
        }
    }

    vector<pair<int, int> > path;
    for (int x = gx, y = gy; x != -1;) {
        path.push_back(make_pair(x, y));
        int tx = px[x][y], ty = py[x][y];
        x = tx; y = ty;
    }

    for (int i = path.size() - 1; i >= 0; i--)
        cout << "(" << path[i].first << "," << path[i].second << ") -> ";
    cout << "GOAL" << endl;
}

int main() {
    aStar(0, 0, 4, 4);
    return 0;
}
