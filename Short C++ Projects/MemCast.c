int main() {
	int i;
	int four_ints[4];
	char* four_c;

	for(i=0; i<4; i++)
        four_ints[i] = 2;

	printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i=0; i<4; i++)
        four_c[i] = 'A'; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    printf("%d\n", four_ints[0]);
    printf("%d\n", four_ints[1]);
    printf("%p\n", &four_ints[0]);
    printf("%p\n", &four_c[0]);
    
    for(i=0;i<4;i++) {
        printf("%p: %x\n", &four_ints[i], four_ints[i]);
        printf("%p: %x\n", &four_c[i], four_c[i]); }
       // Add your code for the exercises here:
	
	
	
	return 0;

}