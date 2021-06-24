//에라토스테네스의 체
void Eratosthenes(int range) {
	int* sieve = new int[range + 1];

	//우선 1은 소수가 아니므로 그냥 2부터 시작한다.
	for (int i = 2; i < range + 1; i++) {
		sieve[i] = i;//우선 체의 각 칸들을 자기 자신의 수로 초기화
	}


	for (int i = 2; i < range + 1; i++) {
		if (sieve[i] == 0) continue;//이미 지워져있으면 그냥 패스

		// 만약 지워진 칸이 아니라면 그 배수부터 시작해서(i에서 i만큼 이동한 칸) 배수대로 이동하면서(계속 i만큼 이동) 지워줌(0으로 바꾸게 함)
		for (int j = i + i; j < range + 1; j += i) {
			sieve[j] = 0;
		}
	}

	// 이제 체에는 소수에 해당되는 칸만 남아있음

	delete[] sieve;
}


