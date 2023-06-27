/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
  let result = []

  let mp = new Map()
  for ( let i = 0; i < nums.length; i++ ) {
    let count = 0
    if (mp.get(nums[i]) == undefined ) {
      for ( let j = 0; j < nums.length; j++ ) {
        if ( i != j && nums[i] > nums[j] ) {
          count++;
        }
      }
      
      result.push(count)
      mp.set(nums[i], count)
    } else {
      result.push(mp.get(nums[i]))
    }
  }

  return result
};