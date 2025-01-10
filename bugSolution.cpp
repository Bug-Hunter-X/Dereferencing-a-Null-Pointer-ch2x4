int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; // Dereferencing a null pointer
  } else {
    // Handle the case where ptr is null
    std::cerr << "Error: Pointer is null" << std::endl;
  }
  return 0;
}