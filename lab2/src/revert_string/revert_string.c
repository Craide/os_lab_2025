#include "revert_string.h"
#include <string.h>

void RevertString(char *sequence)
{
    if (!sequence) return;
    
    size_t sequence_length = strlen(sequence);
    size_t left_index = 0;
    size_t right_index = sequence_length - 1;
    
    while (left_index < right_index)
    {
        char temporary_holder = sequence[left_index];
        sequence[left_index] = sequence[right_index];
        sequence[right_index] = temporary_holder;
        
        left_index++;
        right_index--;
    }
}