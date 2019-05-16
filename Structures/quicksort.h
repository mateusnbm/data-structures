/*
 * quicksort.h
 * Structures
 *
 * Created by Mateus Nunes de B Magalhaes on 3/16/17.
 * Copyright © 2017 mateusnbm. All rights reserved.
 *
 */

#ifndef quicksort_h
#define quicksort_h

/*
 *
 * Sorts an array of integers in-place using the Quicksort algorithm.
 *
 * @param arr - The array of integers.
 * @param i0 - The lower bound of the range of integers that should be sorted.
 * @param iX - The upper bound of the range of integers that should be sorted.
 *
 */

void quicksort(int arr[], int i0, int iX);

/*
 *
 * Prints every number on an array of integers.
 *
 * @param arr - The array of integers.
 * @param size - The size of the array.
 *
 */

void quicksortPrintIntegers(int arr[], int size);

#endif /* quicksort_h */
