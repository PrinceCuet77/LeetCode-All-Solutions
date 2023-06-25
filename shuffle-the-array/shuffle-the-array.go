func shuffle(nums []int, n int) []int {
  result := []int{}
    
  for i := 0; i < n; i += 1 {
    result = append(result, nums[i])
    result = append(result, nums[i+n])
  }
    
  return result
}