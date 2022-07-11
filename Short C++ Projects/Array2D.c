void printArray(int**, int);

int main() {
	int i = 0, j = 0, n = 5;
	int **arr = (int**)malloc(n * sizeof(int*));

    for(i=0;i<n;i++) {
        *(arr + i)= (int*)malloc(n * sizeof(int));
        for(j=0;j<n;j++) {
            *(*(arr+i)+j)=0; 
            
        }
        
    }

/*
    // This will print our your array
	printArray(arr, n);

    // (6) Add your code to make arr a diagonal matrix
    
	
	
	// (7) All printArray to print array
    printArray(arr, n);
*/
	return 0;
}
/*
void printArray(int ** array, int size){
  for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d\n",*(*(arr+i)+j)); }}



}
*/