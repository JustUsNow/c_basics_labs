int main() {
	unsigned char a = 'd';
	if (a % 2 == 0) {
		a |= 1;
	} else {
		a &= ~3;
	}
	return 0;
}
