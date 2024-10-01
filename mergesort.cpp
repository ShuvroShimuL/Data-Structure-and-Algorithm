function mergeSort(A, lb, ub) {
    if (lb < ub) {
        mid = (lb + ub) / 2; // Find the midpoint
        mergeSort(A, lb, mid); // Recursively sort the left half
        mergeSort(A, mid + 1, ub); // Recursively sort the right half
        merge(A, lb, mid, ub); // Merge the sorted halves
    }
}

function merge(A, lb, mid, ub) {
    i = lb; // Start index for left subarray
    j = mid + 1; // Start index for right subarray
    k = lb; // Start index for temporary array B
    B = []; // Temporary array for merged result

    // Step 1: Merge the two halves
    while (i <= mid && j <= ub) {
        if (A[i] < A[j]) {
            B[k] = A[i]; // If left element is smaller, add it to B
            k++;
            i++;
        } else {
            B[k] = A[j]; // If right element is smaller, add it to B
            k++;
            j++;
        }
    }

    // Step 2: Add remaining elements from the left half
    while (i <= mid) {
        B[k] = A[i];
        k++;
        i++;
    }

    // Step 3: Add remaining elements from the right half
    while (j <= ub) {
        B[k] = A[j];
        k++;
        j++;
    }

    // Step 4: Copy the merged elements back to the original array
    for (index = lb; index <= ub; index++) {
        A[index] = B[index];
    }
}
