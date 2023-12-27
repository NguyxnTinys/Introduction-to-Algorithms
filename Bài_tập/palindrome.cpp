 while (temp != 0) {
    remainder = temp % 10;
    reverse = reverse * 10 + remainder;
    temp = temp / 10;
  }