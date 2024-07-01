#include <iostream>
using namespace std;
#define s 10

class o {
private:
    int n;
    int p[s];
    int q[s];
    int a[s];
    int w[s][s];
    int c[s][s];
    int r[s][s];

public:
    void get() {
        cout << "Enter the number of nodes: ";
        cin >> n;
        cout << "Enter the data: ";
        for (int i = 1; i <= n; i++) {
            cout << "a[" << i << "]: ";
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cout << "p[" << i << "]: ";
            cin >> p[i];
        }
        for (int i = 0; i <= n; i++) {
            cout << "q[" << i << "]: ";
            cin >> q[i];
        }
    }

    int z(int i, int j) {
        int m, k;
        int min = 32000;
        for (m = r[i][j - 1]; m <= r[i + 1][j]; m++) {
            if ((c[i][m - 1] + c[m][j]) < min) {
                min = c[i][m - 1] + c[m][j];
                k = m;
            }
        }
        return k;
    }

    void b() {
        int i, j, k, m;
        for (int i = 0; i < n; i++) {
            w[i][i] = q[i];
            r[i][i] = c[i][i] = 0;
            w[i][i + 1] = q[i] + q[i + 1] + p[i + 1];
            r[i][i + 1] = i + 1;
            c[i][i + 1] = q[i] + q[i + 1] + p[i + 1];
        }
        w[n][n] = q[n];
        r[n][n] = c[n][n] = 0;
        for (m = 2; m <= n; m++) {
            for (i = 0; i <= n - m; i++) {
                j = i + m;
                w[i][j] = w[i][j - 1] + q[j] + p[j];
                k = z(i, j);
                c[i][j] = w[i][j] + c[i][k - 1] + c[k][j];
                r[i][j] = k;
            }
        }
    }

    void t() {
        int k, i, j;
        int q[20], front = -1, rear = -1;
        cout << "Root: " << r[0][n] << endl;
        cout << "Cost: " << c[0][n] << endl;
        q[++rear] = 0;
        q[++rear] = n;
        while (front != rear) {
            i = q[++front];
            j = q[++front];
            k = r[i][j];
            cout << k;
            if (r[i][k - 1] != 0) {
                cout << r[i][k - 1] << endl;
                q[++rear] = i;
                q[++rear] = k - 1;
            }
            if (r[k][j] != 0) {
                cout << r[k][j] << endl;
                q[++rear] = k;
                q[++rear] = j;
            }
        }
    }
};

int main() {
    o obj;
    obj.get();
    obj.b();
    obj.t();
    return 0;
}
