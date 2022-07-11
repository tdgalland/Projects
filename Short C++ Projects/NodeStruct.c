struct Node {
    int iValue;
    float fValue ;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	head->next=NULL;
    
	printf("address of head: %p\n", &head);
    printf("value of head: %p\n", head);
    printf("address of iValue: %p\n", &head->iValue);
    printf("address of fValue: %p\n", &head->fValue);
	
	return 0;
}