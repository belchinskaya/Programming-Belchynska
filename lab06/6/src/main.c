arr#define N 3
int main() {
	int matrixIn[N][N];//дана матриця NxN елементів
	int matrixOut[N][N];//матриця, над якою будуть виконуватися математичніт дії 
	
		for (int i = 0; i < N; i++) {//цикл заповнює елементи матриці построково
			for (int j = 0; j < N; j++) {
				matrixIn[i][j] = i * N + j;
			}
		}
		for (int i = 0; i < N; i++) {//цикл перебирає строки матриці
			for (int j = 0; j < N; j++) {//цикл перебирає стовпці маториці
				matrixOut[i][j] = 0;
				for (int k = 0; k < N; k++) {/*множимо матрицю саму на себе за правилом моження матриць: сума добутків елементу строки та відповідного елементу стовпця*/ 
					matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
				}
			}
		} 

	return 0;
}
