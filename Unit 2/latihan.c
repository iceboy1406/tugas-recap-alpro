#include <stdio.h>

int main() {
  int transactionCount;

  scanf("%d", &transactionCount);

  if (transactionCount <= 0) {
    printf("Tidak ada transaksi hari ini");
  } else {
    int totalExpense = 0;
    while (transactionCount--) {
      int expense;
      scanf("%d", &expense);

      totalExpense += expense;
    }

    printf("Total transaksi hari ini : %d\n", totalExpense);
  }
  return 0;
}