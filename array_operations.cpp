#include "array_operations.hh"

int greatest_v1(int *itemptr, int size)
{
    // Help variable that starts from the first.
    int greatest = *itemptr;
    int *start_position = itemptr;

    while ( itemptr < start_position + size )
    {
        /* verranto

        if ( *itemptr > greatest )
        {
            greatest = *itemptr;
        }

        */

        // unary operator ts. one-line if-else
        greatest = (*itemptr > greatest) ? *itemptr : greatest;

        // shift pointer
        itemptr++;

    }

    return greatest;

}

int greatest_v2(int *itemptr, int *endptr)
{
    int greatest = *itemptr;

    while ( itemptr < endptr )
    {
        greatest = (*itemptr > greatest) ? *itemptr : greatest;
        itemptr++;
    }

    return greatest;

}

void copy(int *itemptr, int *endptr, int *targetptr)
{
    while ( itemptr < endptr )
    {
        // Stores to the tagetptr the information of where itemptr is pointing
        // at the moment.
        *targetptr = *itemptr;

        // Both are moved to the right by one.
        itemptr++;
        targetptr++;
    }

}

void reverse(int *leftptr, int *rightptr)
{
    int temp;

    // At first points to the memory slot that comes after the last element
    // meaning that it must be reduced by one.
    rightptr--;

    while ( leftptr < rightptr )
    {
        // Store the other.
        temp = *leftptr;

        // Switch values.
        *leftptr = *rightptr;
        *rightptr = temp;

        // Moves both by one; leftptr to right and rightptr to left.
        leftptr++;
        rightptr--;

    }

}
