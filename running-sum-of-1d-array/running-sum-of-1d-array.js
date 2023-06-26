/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
  let result = []

  result.push(nums[0])
  for ( let i = 0; i < nums.length - 1; i++ ) {
    result.push(result[i] + nums[i+1])
  }

  return result
};