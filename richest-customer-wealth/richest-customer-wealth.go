func maximumWealth(accounts [][]int) int {
  maxWealth := 0

  for _, customer := range accounts {
    totalMoney := 0
    for _, money := range customer {
      totalMoney += money
    }

    if maxWealth < totalMoney {
      maxWealth = totalMoney
    }
  }

  return maxWealth
}