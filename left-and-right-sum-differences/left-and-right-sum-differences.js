/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
  let leftSum = 0, rightSum = 0
  for ( let i = nums.length - 1; i > 0; i-- ) {
    rightSum += nums[i]
  }

  let result = []
  result.push(Math.abs(leftSum - rightSum))
  for ( let i = 0; i < nums.length - 1; i++ ) {
    leftSum += nums[i]
    rightSum -= nums[i+1]
    result.push(Math.abs(leftSum - rightSum))
  }

  return result
};