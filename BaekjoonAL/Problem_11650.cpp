#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
	int x;
	int y;
};

int main(void){
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	vector<Point> data(n);

	for(int i=0; i<n; i++){
		cin >> data[i].x >> data[i].y;
	}

	sort(data.begin(), data.end(), [](Point u, Point v){
			return (u.x < v.x) || (u.x == v.x && u.y < v.y);
			});

	for(int i=0; i<n; i++){
		cout << data[i].x << " " << data[i].y << '\n';
	}

	return 0;
}
