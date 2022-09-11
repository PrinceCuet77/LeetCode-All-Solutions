package main

func twoSum(nums []int, target int) []int {
	mp := make(map[int]int)
	for i, v := range nums {
		if value, ok := mp[target-v]; ok {
			return []int{i, value}
		}
		mp[v] = i
	}

	return []int{}
}
