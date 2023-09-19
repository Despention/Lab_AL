#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool Check(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return true;
        }
    }
    return false;
}

int main() {

    setlocale(LC_ALL, "Rus");

    int M, N;
    cout << "¬ведите размер массива A: ";
    cin >> M;
    cout << "¬ведите размер массива B: ";
    cin >> N;

    int A[M], B[N];
    int* all_com = new int[M < N ? M : N];
    int* arr_A = new int[M];
    int* uni = new int[M + N];

    cout << "¬ведите элементы массива A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "¬ведите элементы массива B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int all_com_Size = 0, arr_A_Size = 0, uni_Size = 0;

    for (int i = 0; i < M; i++) {
        if (Check(B, N, A[i]) && !Check(all_com, all_com_Size, A[i])) {
            all_com[all_com_Size++] = A[i];
        }
        if (!Check(B, N, A[i]) && !Check(arr_A, arr_A_Size, A[i])) {
            arr_A[arr_A_Size++] = A[i];
        }
        if (!Check(uni, uni_Size, A[i])) {
            uni[uni_Size++] = A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (!Check(A, M, B[i]) && !Check(uni, uni_Size, B[i])) {
            uni[uni_Size++] = B[i];
        }
    }

    cout << "ќбщие элементы: ";
    for (int i = 0; i < all_com_Size; i++) {
        cout << all_com[i] << "|";
    }
    cout << endl;

    cout << "Ёлементы только из A: ";
    for (int i = 0; i < arr_A_Size; i++) {
        cout << arr_A[i] << "|";
    }
    cout << endl;

    cout << "”никальные элементы из A и B: ";
    for (int i = 0; i < uni_Size; i++) {
        cout << uni[i] << "";
    }
    cout << endl;

    delete[] all_com;
    delete[] arr_A;
    delete[] uni;

    return 0;
}



// int* End(int* arr, int& size, int* block, int blockSize) {
//     int* newArr = new int[size + blockSize];
//     for (int i = 0; i < size; i++) {
//         newArr[i] = arr[i];
//     }
//     for (int i = 0; i < blockSize; i++) {
//         newArr[size + i] = block[i];
//     }
//     delete[] arr;
//     size += blockSize;
//     return newArr;
// }

// int* At(int* arr, int& size, int* block, int blockSize, int index) {
//     if (index < 0 || index > size) {
//         cout << "Ќеверный индекс" << endl;
//         return arr;
//     }
//     int* newArr = new int[size + blockSize];
//     for (int i = 0; i < index; i++) {
//         newArr[i] = arr[i];
//     }
//     for (int i = 0; i < blockSize; i++) {
//         newArr[index + i] = block[i];
//     }
//     for (int i = index; i < size; i++) {
//         newArr[i + blockSize] = arr[i];
//     }
//     delete[] arr;
//     size += blockSize;
//     return newArr;
// }

// int main() {
//     int size = 5;
//     int* arr = new int[size] {1, 2, 3, 4, 5};

//     int blockSize = 3;
//     int block1[] = {6, 7, 8};
//     arr = End(arr, size, block1, blockSize);

//     int block2[] = {10, 11};
//     arr = At(arr, size, block2, 2, 2);

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;
//     return 0;
// }
