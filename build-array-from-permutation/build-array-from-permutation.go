func buildArray(nums []int) []int {
  var result = []int{}

  for i := 0; i < len(nums); i += 1  {
    result = append(result, nums[nums[i]])
  }

  return result
}