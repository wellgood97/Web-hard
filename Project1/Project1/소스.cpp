#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
	vector<int> ans(2, 0);
	int* coordinate = new int[2];

	for (int i = 0; i < 2; i++) {
		if (v[0][i] == v[1][i])
			coordinate[i] = v[2][i];
		else if (v[0][i] == v[2][i])
			coordinate[i] = v[1][i];
		else if (v[1][i] == v[2][i])
			coordinate[i] = v[0][i];
	}

	for (int j = 0; j < 2; j++)
		ans[j] = coordinate[j];

	return ans;
}
int main() {
	vector<vector<int> > problem(3, vector<int>(2, 0));
	vector<int> ans;

	problem[0][0] = 1;
	problem[0][1] = 4;
	problem[1][0] = 3;
	problem[1][1] = 4;
	problem[2][0] = 3;
	problem[2][1] = 10;

	ans = solution(problem);

	cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

}