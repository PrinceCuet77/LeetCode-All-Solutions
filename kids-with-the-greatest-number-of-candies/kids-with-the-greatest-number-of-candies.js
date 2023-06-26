/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
  let maxCandy = -1;
  for ( let i = 0; i < candies.length; i++ ) {
    maxCandy = maxCandy < candies[i] ? candies[i] : maxCandy;
  }
  
  let result = []
  for ( let i = 0; i < candies.length; i++ ) {
    result.push((candies[i] + extraCandies >= maxCandy))
  }

  return result
};