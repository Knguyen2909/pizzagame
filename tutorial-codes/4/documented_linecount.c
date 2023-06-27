int main(int argc, char *argv[]) {
  int c; // Integer: Current character
  int line_count; // Integer line count
  line_count = 0; // Set line_count to 0

  // Loop
  while ((c = getchar()) != EOF) {
    // If we encounter a newline char increment n1.
    if (c == '\n') {
      ++line_count;
    }
  }

  // Print the total line count
  printf("Line Count: %d\n", line_count);
  // Return the success status code.
  return 0;
}
