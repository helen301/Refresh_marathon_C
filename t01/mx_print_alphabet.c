void mx_printchar(char c);

void mx_print_alphabet(void) {
		int k = 0;

    for (int i = 65; i >= 65 && i <= 90; i++) {
		if (i%2 !=0) {
			k=i;
		mx_printchar(i);
		}
		else {
			k=i+32;
		mx_printchar(k);
}
}
		mx_printchar('\n');
}

/* int main() {
    mx_print_alphabet();
		return 0;
} */
