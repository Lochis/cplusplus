
int main() {

  // copy assignment, allows narrowing conversions
  int a = 4;
  // list-assignment
  int b{4};

  // list-assignment is preferred because int conversions from doubles will not
  // work e.g. int b {4.5} will not compile, but int b = 4.5 would compile using
  // narrowing conversion would make the program less safe.

  int c{}; // value-initialization / zero-initialization to value 0

  // Best practice
  // Prefer direct-list-initialization or value-initialization to initialize
  // your variables.

  return 0;
}
