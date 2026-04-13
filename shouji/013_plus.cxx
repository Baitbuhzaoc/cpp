#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // 网格，初始全部为 true
    vector<vector<bool>> grid(n, vector<bool>(n, true));

    // 定义两个偏移量数组
    const vector<pair<int,int>> hbOffsets = {
        {0,2}, {-1,1}, {0,1}, {1,1},
        {-2,0}, {-1,0}, {0,0}, {1,0}, {2,0},
        {-1,-1}, {0,-1}, {1,-1}, {0,-2}
    };
    const vector<pair<int,int>> ysOffsets = {
        {0,2}, {-1,1}, {0,1}, {1,1},
        {-2,0}, {-1,0}, {0,0}, {1,0}, {2,0},
        {-1,-1}, {0,-1}, {1,-1}, {0,-2},
        {2,2}, {2,1}, {1,2}, {-2,2}, {-2,1}, {-1,2},
        {2,-2}, {2,-1}, {1,-2}, {-1,-2}, {-2,-1}, {-2,-2}
    };

    // 通用标记函数（lambda）
    auto mark = [&](const vector<pair<int,int>>& offsets, int x, int y) {
        for (auto [dx, dy] : offsets) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                grid[nx][ny] = false;
        }
    };

    // 读取马的位置并标记
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        mark(hbOffsets, x, y);
    }
    // 读取象（或后）的位置并标记
    for (int i = 0; i < k; ++i) {
        int x, y; cin >> x >> y;
        mark(ysOffsets, x, y);
    }

    // 统计剩余 true 的数量
    int count = 0;
    for (const auto& row : grid)
        for (bool v : row)
            if (v) ++count;
    cout << count << endl;
}