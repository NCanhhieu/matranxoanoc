#include <iostream>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;  // nhap testcase
	for ( int tc = 1; tc <= t; tc ++){
		int n,m;
		cin >> n >> m;  // nhap hang va cot ma tran
		int K = 1;
		int a[100][100];
		
				int tren = 0;
				int duoi = n - 1;
				int trai = 0;
				int phai = m - 1;
				while ( K <= n*m) {
				// chay sang phai
				for ( int i = trai; i <= phai; i++){
					a[tren][i] = K;
					K++; }
					tren ++;
				
				// chay xuong duoi
					for ( int i = tren; i <= duoi ; i++){
					a[i][phai] = K;
					K++; }
					phai --;
					
				// chay sang trai
					for ( int i = phai; i >= trai; i--){
				    a[duoi][i] = K;
					K++;}
					duoi --;
					
				// chay len tren
					for ( int i = duoi; i >= tren; i--){
					a[i][trai] = K;
					K++;}
					trai ++;
					
				}
				cout << "#" << tc << endl;
		for ( int i = 0; i< n; i++){
			for ( int j = 0; j <m ; j++){
				cout << a[i][j] << " ";
			} cout << endl;
		}

		cout << endl;
	}
	return 0;
}