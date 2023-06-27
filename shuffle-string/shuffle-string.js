/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
  let result = []

  let n = indices.length
  for ( let i = 0; i < n; i++ ) {
    result[indices[i]] = s[i]
  }

  return result.join('')
};