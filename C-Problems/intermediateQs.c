#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

int arr[] = {12, 13, 1, 5, 4, 7, 8, 10, 10, 11};
int arrLen = sizeof(arr)/sizeof(arr[0]);

int ReverseWords(){
    char str[] = "Hello World";
	int reg[10] = {}, count = 0;

	for(int i = 0 ; i < strlen(str); i++)
		if(isspace(str[i])) 
			reg[0] += 1, reg[reg[0]] = i;
	
	int len = reg[0], i = len;
	while(i > 0){
		if(i == len){
			for(int j = reg[i] + 1; j < strlen(str); j++) printf("%c", str[j]);
			i--;
		} else {
			for(int j = reg[i] + 1; j < reg[i+1]; j++) printf("%c", str[j]);
			i--;
		}
		printf(" ");
	} 
	for(int j = 0; j < reg[1]; j++) printf("%c", str[j]);
  	return 0;
}

void MaxDiff(){
    int arr[] = {12, 13, 1, 5, 4, 7, 8, 10, 10, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0], smallest = arr[0];

    for(int i = 0; i < arrLen; i++){
        largest = (arr[i] > largest ? arr[i] : largest);
        smallest = (arr[i] < smallest ? arr[i] : smallest);
    }
    printf("The difference is %d", largest - smallest);
}

void IncSubArr(){
    int arr[] = {12, 13, 1, 5, 4, 3, 8, 2, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int max = 1, len = 1, index = 0, end = 0, maxpro = 1, maxps=0, maxpe = 0, maxsta=1;
    for(int i = 1; i < arrLen; i++){   
        if(arr[i] > arr[i-1]) len++;
        else {
            if(max < len) {
                max = len;
                index = i - len;
                end = i;
            }
            len = 1;
        }

        for(int j = index ; j < end; j++ )
            maxsta*=arr[j];
        if(maxsta > maxpro) {
            printf("%d %d\n",index,end );
            maxpro = maxsta, maxps = index, maxpe=len;}
        maxsta = 1; 
    }

    if(max < len) max = len;
    printf("The largest Sub arry is %d\n", max);
    int sum = 0;
    for(int i = index; i < end; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum is %d", maxpro);
}

void Intersection(){
    int arr[] = {12, 13, 1, 5, 4, 7, 8, 10, 10, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int arr1[] = {2,1 ,4 ,5 ,10}, uni[arrLen], unic = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < arrLen; j++)
            if(arr[j] == arr1[i]){
                uni[unic++] = arr[j];
                break;
            }
    for (int i = 0; i < unic; i++)
        printf("%d ", uni[i]);
}

void MoreThanNBy2(){
    int arr[] = { 8, 10, 10, 10, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int count;
    for(int i = 0; i < arrLen ; i++){
        count = 0;
        for(int j = 0; j < arrLen; j++)
            if(arr[i] == arr[j]) count++;
        if(count > arrLen/2) printf("%d is is highest", arr[i]);
    }
}

void Rearrange(){
    int arr[] = { 8, 10, -8, 10, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]), newArr[arrLen], count = 0;
    for(int i = 0; i < arrLen; i++)
        if(arr[i] < 0) newArr[count++] = arr[i];
    for(int i = 0; i < arrLen; i++)
        if(arr[i] > 0) newArr[count++] = arr[i];
    for(int i = 0; i < arrLen; i++)
        printf("%d ", newArr[i]);  
}

void CycleKTimes(){
    int arr[4] = {3, 40, 100, 6}, k = 2;
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("[ ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    for(int j = 0; j < k; j++){
        int temp = arr[0];
        for (int i = 0; i < len - 1; i++)
            arr[i] = arr[i + 1];
        arr[len - 1] = temp;
    }

    printf("[ ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("]\n\n");
}

void RearrangeEvenOdd(){
    int arr[] = { 8, 10, 9, 5, 11};
    int arrLen = sizeof(arr)/sizeof(arr[0]), newArr[arrLen], count = 0;
    for(int i = 0; i < arrLen; i++)
        if(arr[i] % 2 == 1) newArr[count++] = arr[i];
    for(int i = 0; i < arrLen; i++)
        if(arr[i] % 2 == 0) newArr[count++] = arr[i];
    for(int i = 0; i < arrLen; i++)
        printf("%d ", newArr[i]);  
}

void MaxProduct(){
    int arr[] = { 8, 10, 9, 5, 11}, max1, max2, arrLen = sizeof(arr)/sizeof(arr[0]), maxpro = 0;
    for(int i = 0; i < arrLen; i++)
        for(int j = 0; j < arrLen && j != i; j++)
            if(arr[i] * arr[j] > maxpro)
                maxpro = arr[i] * arr[j], max1 = arr[i], max2 = arr[j];
    printf("The numbers which give the max output is %d and %d and their product is %d", max1, max2, maxpro);
}

void SaddlePoint(){
    int arr[3][3] = {{70,80,90},{43,21,70},{34,87,45}}, tempRow = arr[0][0], tempCol=arr[0][0], number;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(tempRow > arr[i][j]) tempRow = arr[i][j];
            if(tempCol < arr[j][i]) tempCol = arr[j][i];
        }
        if(tempCol == tempRow)  
            printf("%d\n", tempCol);        
    }
}

void Swap1 (int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void SwapWithPointers(){
    int a = 10, b = 20;
    printf("%d %d\n", a, b);
    Swap1(&a, &b);
    printf("%d %d\n", a, b);
}

void string_length(char* given_string, int* length) 
{ 
    while (*given_string != '\0') { 
        *length += 1; 
        given_string++; 
    } 
}

void strLength(){
    char s[] = "Hello There";
    int len = 0;
    string_length(s, &len);
    printf("%d", len);
}

void ReverseString(){
    char s[] = "Hello World";
    int len, index = 0;
    string_length(s, &len);
    len--;
    while(index < len){
        char temp = s[index];
        s[index++] = s[len];
        s[len--] = temp;
    }
    printf("%s\n", s);
}

void Occurence(){
    char s[] = "Hello World", find = 'l';
    int cou = 0;
    int count(char* str, char find, int *c){
        int len = 0;
        string_length(str, &len);
        for(int i = 0; i < len; i++)
            if(str[i] == find) *c+=1;
        return 0;
    }
    count(s, find, &cou);
    printf("The occuarence is %d", cou );
}

void MinMax(){
    int arr[] = { 8, 10, 9, 5, 11}, arrLen = sizeof(arr)/sizeof(arr[0]), min = arr[0], max = arr[0];
    void MM(int* arr, int len, int *min, int *max){
        for(int i = 0; i < len; i++){
            if(arr[i] > *max) *max = arr[i];
            if(arr[i] < *min) *min = arr[i];
        }
    }
    MM(arr, arrLen, &min, &max);
    printf("The Min is %d and Max is %d", min, max);
}

void sortFunc(){
    void sort(int n, int *ptr){
        int i, j, t;
        for (i = 0; i < n; i++) 
            for (j = i + 1; j < n; j++) 
                if (*(ptr + j) < *(ptr + i)) {  
                    t = *(ptr + i);  
                    *(ptr + i) = *(ptr + j);  
                    *(ptr + j) = t;  
                }  
        
        for (i = 0; i < n; i++)  
            printf("%d ", *(ptr + i));  
    }

    int n = 5;  
    int arr[] = { 0, 23, 14, 12, 9 };  
  
    sort(n, arr);  
}

void FactorialWithPointers(){
    int num = 6;
    int fact(int *num){
        int number = (*num - 1);
        return (*num > 0 ? *num * fact(&number) : 1);
    }
    printf("%d", fact(&num));
}

void Prime(){
    int num = 11;
    int pri(int *num){
        for(int i = 2; i < *num / 2 + 1 ; i++)
            if(*num % i == 0) return 0;
        return 1;
    }
    printf(pri(&num) == 1 ? "Is prime": "Not prime");
}

void SumOfNum(){
    int arr[] = { 8, 10, 9, 5, 11}, arrLen = sizeof(arr)/sizeof(arr[0]), sum = 0;
    void Sum(int *arr, int arrLen, int *sum){
        for(int i = 0; i < arrLen; i++) *sum += *arr++;
    }
    Sum(arr, arrLen, &sum);
    printf("%d", sum);
}

void DeleteElement()
{
    printf("To delete an element from array\n");
    int array[6] = {12, 65, 32, 75, 48, 11};

    printf("[ ");
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("]\n");
    
    printf("We will delete 75\n");
    int flag = 0;
    int *ptr = &array[0];
    for (int j = 0; j < 6; j++, ptr++)
    {
        if (*ptr == 75)
        {
            *ptr == 0;
            flag = 1;
        }
        if (flag)
        {
            *ptr = *(ptr + 1);
        }
    }
    printf("[ ");
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("]\n\n");
}

void ReverseArray(){
    int array[6] = {12, 65, 32, 75, 48, 11};

    printf("[ ");
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("]\n\n");

    int *ptr = &array[0], *end = &array[5];
    while(ptr < end){
        Swap1(&(*ptr), &(*end));
        ptr++, end--;
    }

    printf("[ ");
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("]\n\n");
}

void Fibonacci()
{
    int fibbo(int num, int prev, int x){
        return (x > 1 ? num + fibbo(num+prev, num, x - 1): 1);
    }
    printf("\n%d", fibbo(0, 1, 8));
}

void SumOfDigits(){
    int x = 12632;
    int sum(int num){
        return (num != 0 ? num % 10 + sum(num/10) : 0);
    }
    printf("%d", sum(x));
}

void pown(){
    int x = 2, b = 10;
    int pow(int b, int x){
        return (x > 0 ? b * pow(b, x - 1) : 1);
    }
    printf("%d", pow(b, x));
}

void Gc(){
    int x = 12, y = 15, num = 2;
    int gcd(int x, int y, int num){
        static int div = 1;
        if(x % num == 0 && y % num == 0) div = num;
        return ((num < x && num < y) ? gcd(x, y, num + 1) : div );
    }
    printf("%d", gcd(x,y,num));
}

void sumInArray(){
    int array[] = {1,2,3,4,5,6,7,2}, len = sizeof(array)/sizeof(array[0]);
    int SumIn(int *arr, int len){
        return len > 0 ? arr[len - 1] + SumIn(arr, len - 1) : 0;
    }
    printf("%d", SumIn(array, len));
}

void Palin(){
    char s[] = "EYES";
    char *ptr = &s[0], *eptr = &s[2];
    int Pal(char *ptr, char *eptr){
        return (ptr != eptr && *ptr == *eptr) ? Pal(++ptr, --eptr) : (ptr == eptr ? 1 : 0);
    }
    printf("%d", Pal(ptr, eptr));
}

void EvenSum(){
    int s = 0, e = 9;
    int sum(int s, int e){
        return(s < e ? (s % 2 == 0 ? s + sum(s+2, e) : sum(s+1, e)) : 0);
    }
    printf("%d", sum(s, e));
}

void EvenFibonacci()
{
    int fibbo(int num, int prev, int x){
        return (x > 1 ? (num % 2 == 0 ? num : 0) + fibbo(num+prev, num, x - 1): 0);
    }
    printf("\n%d", fibbo(0, 1, 8));
}

void Multistring() 
{ 
    void swapchar(char* x, char* y) { 
        char temp; 
        temp = *x; 
        *x = *y; 
        *y = temp; 
    } 

    void permute(char* a, int l, int r) { 
        int i; 
        if (l == r) 
            printf("%s\n", a); 
        else { 
            for (i = l; i <= r; i++) { 
                swapchar((a + l), (a + i)); 
                permute(a, l + 1, r); 
                swapchar((a + l), (a + i)); // backtrack 
            } 
        } 
    } 

    char str[] = "ACD"; 
    int n = strlen(str); 
    permute(str, 0, n - 1); 
}

void reverseWord(){
    char s[] = "Hello World", s2[10][20], temp[20]= "", sp[1]=" ";
    int wc = 0;
    for(int i = 0; i < strlen(s); i++){
        if(!strcmp((char *)s[i], sp)) wc += 1;
        strncat(temp, s, i);
    }
    printf("%s", temp);
    // for(int i = 0; i < wc/2+1; i++){
    // }
}

int main(){
    reverseWord();
    return 0;
}