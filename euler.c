int p1() {
	int sum = 0;
	for (int i = 1; i < 1000; i++) if (i%3==0 || i%5==0) sum += i;
	return sum;
}

int p2() {
	int sum=0, a=1, b=2;
	while (a <= 4000000) {
		if (b%2==0) sum += b;
		int temp = a+b;
		a = b;
		b = temp;
	}
	return sum;
}

int p3() {
	long n = 600851475143;
	int ans = -1;
	for (int i = 2; (long)i*i <= n; i++) {
		while (n%i==0) {
			ans = i;
			n /= i;
		}
	}
	if (n>1) ans = n;
	return ans;
}
