#include <vector>
#include <iostream>
using namespace std;

int numSubmatrixSumTarget(vector<vector<int> >& matrix, int target) {
    int count = 0;
    int rows = matrix.size();
    int cols = 0;
    if (rows > 0) {
        cols = matrix[0].size();
    }
    vector<vector<int> >&sum_matrix = matrix;
    int sum = 0;
    for (int y = 0; y < rows; ++y) {
        for (int x = 0; x < cols; ++x) {
            sum += matrix[y][x];
            sum_matrix[y][x] = sum;
        }
    }
    for (int y1 = 0; y1 < rows; ++y1) {
        for (int x1 = 0; x1 < cols; ++x1) {
            for (int y2 = y1; y2 < rows; ++y2) {
                for (int x2 = x1; x2 < cols; ++x2) {
                    int sum = 0;
                    for (int y = y1; y <= y2; ++y) {
                        int end = sum_matrix[y][x2];
                        int start = 0;
                        if (x1 >= 1) {
                            start = sum_matrix[y][x1 - 1];
                        } else if (y >= 1){
                            start = sum_matrix[y - 1][cols -1];
                        }
                        sum += (end - start);
                    }
                    cout << y1 << ", " << x1 << ", " << y2 << ", " << x2 << ", " << sum << endl;
                    if (sum == target) {
                        ++count;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
  vector<vector<int> > matrix = {{1,-1},{-1,1}};
//  {{0,1,0}, {1,1,1}, {0,1,0}};
  int target = 0;
  cout << numSubmatrixSumTarget(matrix, target) << endl;
}
