#define PD 1//початок діапазону знаходження простих чисел
#define KD 200//кінець діапазону знаходження простих чисел
#define LEN 100//довжина результуючого масиву

int main() {
	int prime[LEN] = {0};//результуючий масив з простих чисел спочатку повністю заповнений нулями
	int j = 0;
	for (int diap = PD; diap < KD; diap++ ) {//в заданому діапазоні вводимо змінну, щоб оприділяти чи є число простим
		int flag = 0;
		for (int i = 2; i < diap; i++) {//якщо число ділиться націло хоч на якесь число менше за нього, воно не може бути простим
			if (diap % i == 0) {
				flag = 0;//false
				break;
			} else {
				flag = 1;//true
			}
		}
		if (flag == 1) {
			prime[j] = diap;//якщо число просте - вписуємо його у масив
			j++;
		}
	}
	return 0;
}
