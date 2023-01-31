#include<stdio.h>
int findMostFrequentBird(int bird_ids[], int size) {
    // create an array to keep track of the frequency of each bird type
    int frequency[size];
    for (int i = 0; i < size; i++) {
        frequency[i] = 0; // initialize all frequencies to 0
    }

    // iterate through the bird_ids array and increment the frequency of each type
    for (int i = 0; i < size; i++) {
        frequency[bird_ids[i]]++;
    }

    // find the maximum frequency and the id of the bird type with that frequency
    int max_frequency = 0;
    int max_id = 0;
    for (int i = 0; i < size; i++) {
        if (frequency[i] > max_frequency) {
            max_frequency = frequency[i];
            max_id = i;
        } else if (frequency[i] == max_frequency) {
            // if there is a tie, select the one with the smallest id
            if (i < max_id) {
                max_id = i;
            }
        }
    }

    return max_id;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i < n;i++)
        scanf("%d",&a[i]);
    printf("%d",findMostFrequentBird(a,n));
    
    
}
