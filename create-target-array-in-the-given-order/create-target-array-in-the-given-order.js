/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function(nums, index) {
  let result = []

  let n = nums.length;
  for ( let i = 0; i < n; i++ ) {
    if ( result.length == index[i] ) {
      result.push(nums[i])
    } else {
      result.push(0)
      for ( let j = result.length - 1; j > index[i]; j-- ) {
        result[j] = result[j - 1]
      }
      result[index[i]] = nums[i]
    }
  }

  return result
};