void Merge(vector<int>& A, int p, int q, int r) {
    int leftSize = q - p + 1;
    int rightSize = r - q;

    vector<int> Left(leftSize);
    vector<int> Right(rightSize);

    for (int i = 0; i < leftSize; ++i)
        Left[i] = A[p + i];
    for (int j = 0; j < rightSize; ++j)
        Right[j] = A[q + 1 + j];
    
    int k = p;
    int i = 0, j = 0;

    while (i < leftSize && j < rightSize) {
        if (Left[i] <= Right[j]) {
            A[k] = Left[i];
            ++i;
        }
        else {
            A[k] = Right[j];
            ++j;
        }
        ++k;
    }

    while (i < leftSize) {
        A[k] = Left[i];
        ++i;
        ++k;
    }

    while (j < rightSize) {
        A[k] = Right[j];
        ++j;
        ++k;
    }
}
