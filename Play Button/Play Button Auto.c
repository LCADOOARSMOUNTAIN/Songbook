#include <stdio.h>

void pb(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("<div class=\"hpb%d\"><button style=\"text-align:right\" class=\"play-pause-btn\" onclick='playPause(\"HSN\",\"HSN%d\",this)'><i class=\"fas fa-play\"></i></button></div>\n", arr[i], arr[i]);
    }
}

int main() {
    int arr[] = {115, 121, 125, 137, 138, 139, 147, 148, 152, 161, 166, 167, 168, 183, 207, 209, 211, 249, 250, 79};
    int size = sizeof(arr) / sizeof(arr[0]);
    pb(arr, size);
    return 0;
}
