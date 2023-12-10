int get_position_in_alphabet(char letter) {
  if (letter >= 'a' && letter <= 'z') {
    return letter - 'a' + 1;
  } else if (letter >= 'A' && letter <= 'Z') {
    return letter - 'A' + 1;
  } else {
    return 0;
  }
}

int count_occurrences(int** array, int rows, int cols, int target) {
  int count = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (array[i][j] == target) {
        count++;
      }
    }
  }
  return count;
}
