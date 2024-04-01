#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    int x, y;
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double findShortestRoute(vector<Point>& vertices, Point start) {
    double totalDistance = 0;
    int n = vertices.size();

    for (int i = 0; i < n; ++i) {
        totalDistance += distance(vertices[i], vertices[(i + 1) % n]);
    }

    totalDistance += distance(vertices[n - 1], start);
    totalDistance += distance(vertices[0], start);

    return totalDistance;
}

int main() {
    int N;
    Point start;
    cin >> N >> start.x >> start.y;

    vector<Point> vertices(N);
    for (int i = 0; i < N; ++i) {
        cin >> vertices[i].x >> vertices[i].y;
    }

    double shortestRoute = findShortestRoute(vertices, start);
    cout << fixed << setprecision(2) << shortestRoute << endl;

    return 0;
}
